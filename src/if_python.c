/* vi:set ts=8 sts=4 sw=4 noet:
 *
 * VIM - Vi IMproved	by Bram Moolenaar
 *
 * Do ":help uganda"  in Vim to read copying and usage conditions.
 * Do ":help credits" in Vim to see a list of people who contributed.
 * See README.txt for an overview of the Vim source code.
 */
/*
 * Python extensions by Paul Moore.
 * Changes for Unix by David Leonard.
 *
 * This consists of four parts:
 * 1. Python interpreter main program
 * 2. Python output stream: writes output via [e]msg().
 * 3. Implementation of the Vim module for Python
 * 4. Utility functions for handling the interface between Vim and Python.
 */

#include "vim.h"
#include <limits.h>

#ifdef HAVE_STDARG_H
# undef HAVE_STDARG_H	/* Python's config.h defines it as well. */
#endif

#include <Python.h>

//Some Aliases
#define PyBytes_FromString      PyString_FromString
#define PyBytes_Check           PyString_Check
#define PyBytes_AsStringAndSize PyString_AsStringAndSize

# define PyInt Py_ssize_t
# define PyInquiry lenfunc
# define PyIntArgFunc ssizeargfunc
# define PyIntIntArgFunc ssizessizeargfunc
# define PyIntObjArgProc ssizeobjargproc
# define PyIntIntObjArgProc ssizessizeobjargproc
# define Py_ssize_t_fmt "n"
#define Py_bytes_fmt "s"

/* Parser flags */
#define single_input	256
#define file_input	257
#define eval_input	258

static int initialised = 0;

#define DESTRUCTOR_FINISH(self) self->ob_type->tp_free((PyObject*)self);

#define WIN_PYTHON_REF(win) win->w_python_ref
#define BUF_PYTHON_REF(buf) buf->b_python_ref
#define TAB_PYTHON_REF(tab) tab->tp_python_ref

/******************************************************
 * Internal function prototypes.
 */

static int PythonMod_Init(void);
static PyObject *OutputGetattr(PyObject *, char *);
static PyObject *BufferGetattr(PyObject *, char *);
static PyObject *WindowGetattr(PyObject *, char *);
static PyObject *TabPageGetattr(PyObject *, char *);
static PyObject *RangeGetattr(PyObject *, char *);
static PyObject *DictionaryGetattr(PyObject *, char*);
static PyObject *ListGetattr(PyObject *, char *);
static PyObject *FunctionGetattr(PyObject *, char *);

static void * py_memsave(void *p, size_t len)
{
    void	*r;

    if (!(r = PyMem_Malloc(len)))
	return NULL;
    mch_memmove(r, p, len);
    return r;
}

# define PY_STRSAVE(s) ((char_u *) py_memsave(s, STRLEN(s) + 1))

/*
 * Include the code shared with if_python3.c
 */
#include "if_py_both.h"


/******************************************************
 * 1. Python interpreter main program.
 */

void python_end()
{
    static int recurse = 0;

    /* If a crash occurs while doing this, don't try again. */
    if (recurse != 0)
	return;

    ++recurse;

    --recurse;
}

static int Python_Init(void)
{
    if (!initialised)
    {
	Py_SetPythonHome(PYTHON_HOME);

	init_structs();

	Py_Initialize();
	/* Initialise threads, and below save the state using
	 * PyEval_SaveThread.  Without the call to PyEval_SaveThread, thread
	 * specific state (such as the system trace hook), will be lost
	 * between invocations of Python code. */
	PyEval_InitThreads();

	if (PythonIO_Init_io())
	    goto fail;

	if (PythonMod_Init())
	    goto fail;

	globals = PyModule_GetDict(PyImport_AddModule("__main__"));

	/* Remove the element from sys.path that was added because of our
	 * argv[0] value in PythonMod_Init().  Previously we used an empty
	 * string, but depending on the OS we then get an empty entry or
	 * the current directory in sys.path. */
	PyRun_SimpleString("import sys; sys.path = filter(lambda x: x != '/must>not&exist', sys.path)");

	/* lock is created and acquired in PyEval_InitThreads() and thread
	 * state is created in Py_Initialize()
	 * there _PyGILState_NoteThreadState() also sets gilcounter to 1
	 * (python must have threads enabled!)
	 * so the following does both: unlock GIL and save thread state in TLS
	 * without deleting thread state
	 */
	PyEval_SaveThread();

	initialised = 1;
    }

    return 0;

fail:
    /* We call PythonIO_Flush() here to print any Python errors.
     * This is OK, as it is possible to call this function even
     * if PythonIO_Init_io() has not completed successfully (it will
     * not do anything in this case).
     */
    PythonIO_Flush();
    return -1;
}

/*
 * External interface
 */
    static void
DoPyCommand(const char *cmd, rangeinitializer init_range, runner run, void *arg)
{
    char *saved_locale;
    PyGILState_STATE pygilstate;

    if (Python_Init()) return;

    init_range(arg);

    Python_Release_Vim();	    /* leave vim */

    /* Python only works properly when the LC_NUMERIC locale is "C". */
    saved_locale = setlocale(LC_NUMERIC, NULL);
    if (saved_locale == NULL || STRCMP(saved_locale, "C") == 0)
	saved_locale = NULL;
    else
    {
	/* Need to make a copy, value may change when setting new locale. */
	saved_locale = (char *) PY_STRSAVE(saved_locale);
	(void)setlocale(LC_NUMERIC, "C");
    }

    pygilstate = PyGILState_Ensure();
    run((char *) cmd, arg , &pygilstate);
    PyGILState_Release(pygilstate);

    if (saved_locale != NULL)
    {
	(void)setlocale(LC_NUMERIC, saved_locale);
	PyMem_Free(saved_locale);
    }

    Python_Lock_Vim();		    /* enter vim */
    PythonIO_Flush();

    return;
}

/*
 * ":python"
 */
    void
ex_python(exarg_T *eap)
{
    char_u *script;

    script = script_get(eap, eap->arg);
    if (!eap->skip)
    {
	DoPyCommand(
	    script == NULL ? (char *) eap->arg : (char *) script,
	    (rangeinitializer) init_range_cmd,
	    (runner) run_cmd,
	    (void *) eap
	);
    }
    vim_free(script);
}

#define BUFFER_SIZE 1024

/*
 * ":pyfile"
 */
void ex_pyfile(exarg_T *eap)
{
    static char buffer[BUFFER_SIZE];
    const char *file = (char *)eap->arg;
    char *p;

    /* Have to do it like this. PyRun_SimpleFile requires you to pass a
     * stdio file pointer, but Vim and the Python DLL are compiled with
     * different options under Windows, meaning that stdio pointers aren't
     * compatible between the two. Yuk.
     *
     * Put the string "execfile('file')" into buffer. But, we need to
     * escape any backslashes or single quotes in the file name, so that
     * Python won't mangle the file name.
     */
    strcpy(buffer, "execfile('");
    p = buffer + 10; /* size of "execfile('" */

    while (*file && p < buffer + (BUFFER_SIZE - 3))
    {
	if (*file == '\\' || *file == '\'')
	    *p++ = '\\';
	*p++ = *file++;
    }

    /* If we didn't finish the file name, we hit a buffer overflow */
    if (*file != '\0')
	return;

    /* Put in the terminating "')" and a null */
    *p++ = '\'';
    *p++ = ')';
    *p++ = '\0';

    /* Execute the file */
    DoPyCommand(
	buffer,
	(rangeinitializer) init_range_cmd,
	(runner) run_cmd,
	(void *) eap
    );
}

void ex_pydo(exarg_T *eap)
{
    DoPyCommand(
	(char *)eap->arg,
	(rangeinitializer) init_range_cmd,
	(runner)run_do,
	(void *)eap
    );
}

/******************************************************
 * 2. Python output stream: writes output via [e]msg().
 */

/* Implementation functions
 */

static PyObject * OutputGetattr(PyObject *self, char *name)
{
    if (strcmp(name, "softspace") == 0)
	return PyInt_FromLong(((OutputObject *)(self))->softspace);
    else if (strcmp(name, "__members__") == 0)
	return ObjectDir(NULL, OutputAttrs);

    return Py_FindMethod(OutputMethods, self, name);
}

/******************************************************
 * 3. Implementation of the Vim module for Python
 */

/* Window type - Implementation functions
 * --------------------------------------
 */

#define WindowType_Check(obj) ((obj)->ob_type == &WindowType)

/* Buffer type - Implementation functions
 * --------------------------------------
 */

#define BufferType_Check(obj) ((obj)->ob_type == &BufferType)

static PyInt BufferAssItem(PyObject *, PyInt, PyObject *);
static PyInt BufferAssSlice(PyObject *, PyInt, PyInt, PyObject *);

/* Line range type - Implementation functions
 * --------------------------------------
 */

#define RangeType_Check(obj) ((obj)->ob_type == &RangeType)

static PyInt RangeAssItem(PyObject *, PyInt, PyObject *);
static PyInt RangeAssSlice(PyObject *, PyInt, PyInt, PyObject *);

/* Current objects type - Implementation functions
 * -----------------------------------------------
 */

static PySequenceMethods BufferAsSeq = {
    (PyInquiry)		BufferLength,	    /* sq_length,    len(x)   */
    (binaryfunc)	0,		    /* BufferConcat, sq_concat, x+y */
    (PyIntArgFunc)	0,		    /* BufferRepeat, sq_repeat, x*n */
    (PyIntArgFunc)	BufferItem,	    /* sq_item,      x[i]     */
    (PyIntIntArgFunc)	BufferSlice,	    /* sq_slice,     x[i:j]   */
    (PyIntObjArgProc)	BufferAssItem,	    /* sq_ass_item,  x[i]=v   */
    (PyIntIntObjArgProc) BufferAssSlice,    /* sq_ass_slice, x[i:j]=v */
    (objobjproc)	0,
    (binaryfunc)	0,
    0,
};

/* Buffer object - Implementation
 */

    static PyObject *
BufferGetattr(PyObject *self, char *name)
{
    PyObject *r;

    if ((r = BufferAttrValid((BufferObject *)(self), name)))
	return r;

    if (CheckBuffer((BufferObject *)(self)))
	return NULL;

    r = BufferAttr((BufferObject *)(self), name);
    if (r || PyErr_Occurred())
	return r;
    else
	return Py_FindMethod(BufferMethods, self, name);
}

/******************/

    static PyInt
BufferAssItem(PyObject *self, PyInt n, PyObject *val)
{
    return RBAsItem((BufferObject *)(self), n, val, 1, -1, NULL);
}

    static PyInt
BufferAssSlice(PyObject *self, PyInt lo, PyInt hi, PyObject *val)
{
    return RBAsSlice((BufferObject *)(self), lo, hi, val, 1, -1, NULL);
}

static PySequenceMethods RangeAsSeq = {
    (PyInquiry)		RangeLength,	      /* sq_length,    len(x)   */
    (binaryfunc)	0, /* RangeConcat, */ /* sq_concat,    x+y      */
    (PyIntArgFunc)	0, /* RangeRepeat, */ /* sq_repeat,    x*n      */
    (PyIntArgFunc)	RangeItem,	      /* sq_item,      x[i]     */
    (PyIntIntArgFunc)	RangeSlice,	      /* sq_slice,     x[i:j]   */
    (PyIntObjArgProc)	RangeAssItem,	      /* sq_ass_item,  x[i]=v   */
    (PyIntIntObjArgProc) RangeAssSlice,	      /* sq_ass_slice, x[i:j]=v */
    (objobjproc)	0,
#if PY_MAJOR_VERSION >= 2
    (binaryfunc)	0,
    0,
#endif
};

/* Line range object - Implementation
 */

    static PyObject *
RangeGetattr(PyObject *self, char *name)
{
    if (strcmp(name, "start") == 0)
	return Py_BuildValue(Py_ssize_t_fmt, ((RangeObject *)(self))->start - 1);
    else if (strcmp(name, "end") == 0)
	return Py_BuildValue(Py_ssize_t_fmt, ((RangeObject *)(self))->end - 1);
    else if (strcmp(name, "__members__") == 0)
	return ObjectDir(NULL, RangeAttrs);
    else
	return Py_FindMethod(RangeMethods, self, name);
}

/****************/

    static PyInt
RangeAssItem(PyObject *self, PyInt n, PyObject *val)
{
    return RBAsItem(((RangeObject *)(self))->buf, n, val,
		     ((RangeObject *)(self))->start,
		     ((RangeObject *)(self))->end,
		     &((RangeObject *)(self))->end);
}

    static PyInt
RangeAssSlice(PyObject *self, PyInt lo, PyInt hi, PyObject *val)
{
    return RBAsSlice(((RangeObject *)(self))->buf, lo, hi, val,
		      ((RangeObject *)(self))->start,
		      ((RangeObject *)(self))->end,
		      &((RangeObject *)(self))->end);
}

/* TabPage object - Implementation
 */

    static PyObject *
TabPageGetattr(PyObject *self, char *name)
{
    PyObject *r;

    if ((r = TabPageAttrValid((TabPageObject *)(self), name)))
	return r;

    if (CheckTabPage((TabPageObject *)(self)))
	return NULL;

    r = TabPageAttr((TabPageObject *)(self), name);
    if (r || PyErr_Occurred())
	return r;
    else
	return Py_FindMethod(TabPageMethods, self, name);
}

/* Window object - Implementation
 */

    static PyObject *
WindowGetattr(PyObject *self, char *name)
{
    PyObject *r;

    if ((r = WindowAttrValid((WindowObject *)(self), name)))
	return r;

    if (CheckWindow((WindowObject *)(self)))
	return NULL;

    r = WindowAttr((WindowObject *)(self), name);
    if (r || PyErr_Occurred())
	return r;
    else
	return Py_FindMethod(WindowMethods, self, name);
}

/* Tab page list object - Definitions
 */

static PySequenceMethods TabListAsSeq = {
    (PyInquiry)		TabListLength,	    /* sq_length,    len(x)   */
    (binaryfunc)	0,		    /* sq_concat,    x+y      */
    (PyIntArgFunc)	0,		    /* sq_repeat,    x*n      */
    (PyIntArgFunc)	TabListItem,	    /* sq_item,      x[i]     */
    (PyIntIntArgFunc)	0,		    /* sq_slice,     x[i:j]   */
    (PyIntObjArgProc)	0,		    /* sq_ass_item,  x[i]=v   */
    (PyIntIntObjArgProc) 0,		    /* sq_ass_slice, x[i:j]=v */
    (objobjproc)	0,
#if PY_MAJOR_VERSION >= 2
    (binaryfunc)	0,
    0,
#endif
};

/* Window list object - Definitions
 */

static PySequenceMethods WinListAsSeq = {
    (PyInquiry)		WinListLength,	    /* sq_length,    len(x)   */
    (binaryfunc)	0,		    /* sq_concat,    x+y      */
    (PyIntArgFunc)	0,		    /* sq_repeat,    x*n      */
    (PyIntArgFunc)	WinListItem,	    /* sq_item,      x[i]     */
    (PyIntIntArgFunc)	0,		    /* sq_slice,     x[i:j]   */
    (PyIntObjArgProc)	0,		    /* sq_ass_item,  x[i]=v   */
    (PyIntIntObjArgProc) 0,		    /* sq_ass_slice, x[i:j]=v */
    (objobjproc)	0,
#if PY_MAJOR_VERSION >= 2
    (binaryfunc)	0,
    0,
#endif
};

/* External interface
 */

void python_buffer_free(buf_T *buf)
{
    if (BUF_PYTHON_REF(buf) != NULL)
    {
	BufferObject *bp = BUF_PYTHON_REF(buf);
	bp->buf = INVALID_BUFFER_VALUE;
	BUF_PYTHON_REF(buf) = NULL;
    }
}

#if defined(FEAT_WINDOWS) || defined(PROTO)
void python_window_free(win_T *win)
{
    if (WIN_PYTHON_REF(win) != NULL)
    {
	WindowObject *wp = WIN_PYTHON_REF(win);
	wp->win = INVALID_WINDOW_VALUE;
	WIN_PYTHON_REF(win) = NULL;
    }
}

void python_tabpage_free(tabpage_T *tab)
{
    if (TAB_PYTHON_REF(tab) != NULL)
    {
	TabPageObject *tp = TAB_PYTHON_REF(tab);
	tp->tab = INVALID_TABPAGE_VALUE;
	TAB_PYTHON_REF(tab) = NULL;
    }
}
#endif

static int PythonMod_Init(void)
{
    /* The special value is removed from sys.path in Python_Init(). */
    static char	*(argv[2]) = {"/must>not&exist/foo", NULL};

    if (init_types())
	return -1;

    /* Set sys.argv[] to avoid a crash in warn(). */
    PySys_SetArgv(1, argv);

    vim_module = Py_InitModule4("vim", VimMethods, (char *)NULL,
				(PyObject *)NULL, PYTHON_API_VERSION);

    if (populate_module(vim_module))
	return -1;

    if (init_sys_path())
	return -1;

    return 0;
}

/*************************************************************************
 * 4. Utility functions for handling the interface between Vim and Python.
 */

/* Convert a Vim line into a Python string.
 * All internal newlines are replaced by null characters.
 *
 * On errors, the Python exception data is set, and NULL is returned.
 */
static PyObject * LineToString(const char *str)
{
    PyObject *result;
    PyInt len = strlen(str);
    char *p;

    /* Allocate an Python string object, with uninitialised contents. We
     * must do it this way, so that we can modify the string in place
     * later. See the Python source, Objects/stringobject.c for details.
     */
    result = PyString_FromStringAndSize(NULL, len);
    if (result == NULL)
	return NULL;

    p = PyString_AsString(result);

    while (*str)
    {
	if (*str == '\n')
	    *p = '\0';
	else
	    *p = *str;

	++p;
	++str;
    }

    return result;
}

static PyObject * DictionaryGetattr(PyObject *self, char *name)
{
    DictionaryObject	*this = ((DictionaryObject *) (self));

    if (strcmp(name, "locked") == 0)
	return PyInt_FromLong(this->dict->dv_lock);
    else if (strcmp(name, "scope") == 0)
	return PyInt_FromLong(this->dict->dv_scope);
    else if (strcmp(name, "__members__") == 0)
	return ObjectDir(NULL, DictionaryAttrs);

    return Py_FindMethod(DictionaryMethods, self, name);
}

static PySequenceMethods ListAsSeq = {
    (PyInquiry)			ListLength,
    (binaryfunc)		0,
    (PyIntArgFunc)		0,
    (PyIntArgFunc)		ListItem,
    (PyIntIntArgFunc)		ListSlice,
    (PyIntObjArgProc)		ListAssItem,
    (PyIntIntObjArgProc)	ListAssSlice,
    (objobjproc)		0,
    (binaryfunc)		ListConcatInPlace,
    0,
};

static PyObject * ListGetattr(PyObject *self, char *name)
{
    if (strcmp(name, "locked") == 0)
	return PyInt_FromLong(((ListObject *)(self))->list->lv_lock);
    else if (strcmp(name, "__members__") == 0)
	return ObjectDir(NULL, ListAttrs);

    return Py_FindMethod(ListMethods, self, name);
}

static PyObject * FunctionGetattr(PyObject *self, char *name)
{
    FunctionObject	*this = (FunctionObject *)(self);

    if (strcmp(name, "name") == 0)
	return PyString_FromString((char *)(this->name));
    else if (strcmp(name, "__members__") == 0)
	return ObjectDir(NULL, FunctionAttrs);
    else
	return Py_FindMethod(FunctionMethods, self, name);
}

void do_pyeval (char_u *str, typval_T *rettv)
{
    DoPyCommand((char *) str,
	    (rangeinitializer) init_range_eval,
	    (runner) run_eval,
	    (void *) rettv);
    switch(rettv->v_type)
    {
	case VAR_DICT: ++rettv->vval.v_dict->dv_refcount; break;
	case VAR_LIST: ++rettv->vval.v_list->lv_refcount; break;
	case VAR_FUNC: func_ref(rettv->vval.v_string);    break;
	case VAR_UNKNOWN:
	    rettv->v_type = VAR_NUMBER;
	    rettv->vval.v_number = 0;
	    break;
    }
}

void set_ref_in_python (int copyID)
{
    set_ref_in_py(copyID);
}
