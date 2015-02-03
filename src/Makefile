include auto/config.mk
#.include "auto/config.mk"
CClink = $(CC)

### Names of the programs and targets
VIMTARGET	= $(VIMNAME)$(EXEEXT)
EXTARGET	= $(EXNAME)$(LNKEXT)
VIEWTARGET	= $(VIEWNAME)$(LNKEXT)
GVIMNAME	= g$(VIMNAME)
GVIMTARGET	= $(GVIMNAME)$(LNKEXT)
GVIEWNAME	= g$(VIEWNAME)
GVIEWTARGET	= $(GVIEWNAME)$(LNKEXT)
RVIMNAME	= r$(VIMNAME)
RVIMTARGET	= $(RVIMNAME)$(LNKEXT)
RVIEWNAME	= r$(VIEWNAME)
RVIEWTARGET	= $(RVIEWNAME)$(LNKEXT)
RGVIMNAME	= r$(GVIMNAME)
RGVIMTARGET	= $(RGVIMNAME)$(LNKEXT)
RGVIEWNAME	= r$(GVIEWNAME)
RGVIEWTARGET	= $(RGVIEWNAME)$(LNKEXT)
VIMDIFFNAME	= $(VIMNAME)diff
GVIMDIFFNAME	= g$(VIMDIFFNAME)
VIMDIFFTARGET	= $(VIMDIFFNAME)$(LNKEXT)
GVIMDIFFTARGET	= $(GVIMDIFFNAME)$(LNKEXT)
EVIMNAME	= e$(VIMNAME)
EVIMTARGET	= $(EVIMNAME)$(LNKEXT)
EVIEWNAME	= e$(VIEWNAME)
EVIEWTARGET	= $(EVIEWNAME)$(LNKEXT)

### Names of the tools that are also made
TOOLS = xxd/xxd$(EXEEXT)

### Installation directories.  The defaults come from configure.
#
### prefix	the top directory for the data (default "/usr/local")
#
# Uncomment the next line to install Vim in your home directory.
#prefix = $(HOME)

### exec_prefix	is the top directory for the executable (default $(prefix))
#
# Uncomment the next line to install the Vim executable in "/usr/machine/bin"
#exec_prefix = /usr/machine

### BINDIR	dir for the executable	 (default "$(exec_prefix)/bin")
### MANDIR	dir for the manual pages (default "$(prefix)/man")
### DATADIR	dir for the other files  (default "$(prefix)/lib" or
#						  "$(prefix)/share")
# They may be different when using different architectures for the
# executable and a common directory for the other files.
#
# Uncomment the next line to install Vim in "/usr/bin"
#BINDIR   = /usr/bin
# Uncomment the next line to install Vim manuals in "/usr/share/man/man1"
#MANDIR   = /usr/share/man
# Uncomment the next line to install Vim help files in "/usr/share/vim"
#DATADIR  = /usr/share

### DESTDIR	root of the installation tree.  This is prepended to the other
#		directories.  This directory must exist.
#DESTDIR  = ~/pkg/vim

### Directory of the man pages
MAN1DIR = /man1

### Vim version (adjusted by a script)
VIMMAJOR = 7
VIMMINOR = 4

### Location of Vim files (should not need to be changed, and
### some things might not work when they are changed!)
VIMDIR = /vim
VIMRTDIR = /vim$(VIMMAJOR)$(VIMMINOR)
HELPSUBDIR = /doc
COLSUBDIR = /colors
SYNSUBDIR = /syntax
INDSUBDIR = /indent
AUTOSUBDIR = /autoload
PLUGSUBDIR = /plugin
FTPLUGSUBDIR = /ftplugin
LANGSUBDIR = /lang
COMPSUBDIR = /compiler
KMAPSUBDIR = /keymap
MACROSUBDIR = /macros
TOOLSSUBDIR = /tools
TUTORSUBDIR = /tutor
SPELLSUBDIR = /spell
PRINTSUBDIR = /print
PODIR = po

### VIMLOC	common root of the Vim files (all versions)
### VIMRTLOC	common root of the runtime Vim files (this version)
### VIMRCLOC	compiled-in location for global [g]vimrc files (all versions)
### VIMRUNTIMEDIR  compiled-in location for runtime files (optional)
### HELPSUBLOC	location for help files
### COLSUBLOC	location for colorscheme files
### SYNSUBLOC	location for syntax files
### INDSUBLOC	location for indent files
### AUTOSUBLOC	location for standard autoload files
### PLUGSUBLOC	location for standard plugin files
### FTPLUGSUBLOC  location for ftplugin files
### LANGSUBLOC	location for language files
### COMPSUBLOC	location for compiler files
### KMAPSUBLOC	location for keymap files
### MACROSUBLOC	location for macro files
### TOOLSSUBLOC	location for tools files
### TUTORSUBLOC	location for tutor files
### SPELLSUBLOC	location for spell files
### PRINTSUBLOC	location for PostScript files (prolog, latin1, ..)
### SCRIPTLOC	location for script files (menu.vim, bugreport.vim, ..)
### You can override these if you want to install them somewhere else.
### Edit feature.h for compile-time settings.
VIMLOC		= $(DATADIR)$(VIMDIR)
VIMRTLOC	= $(DATADIR)$(VIMDIR)$(VIMRTDIR)
VIMRCLOC	= $(VIMLOC)
HELPSUBLOC	= $(VIMRTLOC)$(HELPSUBDIR)
COLSUBLOC	= $(VIMRTLOC)$(COLSUBDIR)
SYNSUBLOC	= $(VIMRTLOC)$(SYNSUBDIR)
INDSUBLOC	= $(VIMRTLOC)$(INDSUBDIR)
AUTOSUBLOC	= $(VIMRTLOC)$(AUTOSUBDIR)
PLUGSUBLOC	= $(VIMRTLOC)$(PLUGSUBDIR)
FTPLUGSUBLOC	= $(VIMRTLOC)$(FTPLUGSUBDIR)
LANGSUBLOC	= $(VIMRTLOC)$(LANGSUBDIR)
COMPSUBLOC	= $(VIMRTLOC)$(COMPSUBDIR)
KMAPSUBLOC	= $(VIMRTLOC)$(KMAPSUBDIR)
MACROSUBLOC	= $(VIMRTLOC)$(MACROSUBDIR)
TOOLSSUBLOC	= $(VIMRTLOC)$(TOOLSSUBDIR)
TUTORSUBLOC	= $(VIMRTLOC)$(TUTORSUBDIR)
SPELLSUBLOC	= $(VIMRTLOC)$(SPELLSUBDIR)
PRINTSUBLOC	= $(VIMRTLOC)$(PRINTSUBDIR)
SCRIPTLOC	= $(VIMRTLOC)

### Only set VIMRUNTIMEDIR when VIMRTLOC is set to a different location and
### the runtime directory is not below it.
#VIMRUNTIMEDIR = $(VIMRTLOC)

### Name of the evim file target.
EVIM_FILE	= $(DESTDIR)$(SCRIPTLOC)/evim.vim
MSWIN_FILE	= $(DESTDIR)$(SCRIPTLOC)/mswin.vim

### Name of the menu file target.
SYS_MENU_FILE	= $(DESTDIR)$(SCRIPTLOC)/menu.vim
SYS_SYNMENU_FILE = $(DESTDIR)$(SCRIPTLOC)/synmenu.vim
SYS_DELMENU_FILE = $(DESTDIR)$(SCRIPTLOC)/delmenu.vim

### Name of the bugreport file target.
SYS_BUGR_FILE	= $(DESTDIR)$(SCRIPTLOC)/bugreport.vim

### Name of the file type detection file target.
SYS_FILETYPE_FILE = $(DESTDIR)$(SCRIPTLOC)/filetype.vim

### Name of the file type detection file target.
SYS_FTOFF_FILE	= $(DESTDIR)$(SCRIPTLOC)/ftoff.vim

### Name of the file type detection script file target.
SYS_SCRIPTS_FILE = $(DESTDIR)$(SCRIPTLOC)/scripts.vim

### Name of the ftplugin-on file target.
SYS_FTPLUGIN_FILE = $(DESTDIR)$(SCRIPTLOC)/ftplugin.vim

### Name of the ftplugin-off file target.
SYS_FTPLUGOF_FILE = $(DESTDIR)$(SCRIPTLOC)/ftplugof.vim

### Name of the indent-on file target.
SYS_INDENT_FILE = $(DESTDIR)$(SCRIPTLOC)/indent.vim

### Name of the indent-off file target.
SYS_INDOFF_FILE = $(DESTDIR)$(SCRIPTLOC)/indoff.vim

### Name of the option window script file target.
SYS_OPTWIN_FILE = $(DESTDIR)$(SCRIPTLOC)/optwin.vim

# Program to install the program in the target directory.  Could also be "mv".
INSTALL_PROG	= cp

# Program to install the data in the target directory.	Cannot be "mv"!
INSTALL_DATA	= cp
INSTALL_DATA_R	= cp -r

### Program to run on installed binary.  Use the second one to disable strip.
#STRIP = strip
#STRIP = /bin/true

### Permissions for binaries
BINMOD = 755

### Permissions for man page
MANMOD = 644

### Permissions for help files
HELPMOD = 644

### Permissions for Perl and shell scripts
SCRIPTMOD = 755

### Permission for Vim script files (menu.vim, bugreport.vim, ..)
VIMSCRIPTMOD = 644

### Permissions for all directories that are created
DIRMOD = 755

### Permissions for all other files that are created
FILEMOD = 644

# Where to copy the man and help files from
HELPSOURCE = ../runtime/doc

# Where to copy the script files from (menu, bugreport)
SCRIPTSOURCE = ../runtime

# Where to copy the colorscheme files from
COLSOURCE = ../runtime/colors

# Where to copy the syntax files from
SYNSOURCE = ../runtime/syntax

# Where to copy the indent files from
INDSOURCE = ../runtime/indent

# Where to copy the standard plugin files from
AUTOSOURCE = ../runtime/autoload

# Where to copy the standard plugin files from
PLUGSOURCE = ../runtime/plugin

# Where to copy the ftplugin files from
FTPLUGSOURCE = ../runtime/ftplugin

# Where to copy the macro files from
MACROSOURCE = ../runtime/macros

# Where to copy the tools files from
TOOLSSOURCE = ../runtime/tools

# Where to copy the tutor files from
TUTORSOURCE = ../runtime/tutor

# Where to copy the spell files from
SPELLSOURCE = ../runtime/spell

# Where to look for language specific files
LANGSOURCE = ../runtime/lang

# Where to look for compiler files
COMPSOURCE = ../runtime/compiler

# Where to look for keymap files
KMAPSOURCE = ../runtime/keymap

# Where to look for print resource files
PRINTSOURCE = ../runtime/print

# If you are using Linux, you might want to use this to make vim the
# default vi editor, it will create a link from vi to Vim when doing
# "make install".  An existing file will be overwritten!
# When not using it, some make programs can't handle an undefined $(LINKIT).
#LINKIT = ln -f -s $(DEST_BIN)/$(VIMTARGET) $(DESTDIR)/usr/bin/vi
LINKIT = @echo >/dev/null

###
### GRAPHICAL USER INTERFACE (GUI).
### 'configure --enable-gui' can enable one of these for you if you did set
### a corresponding CONF_OPT_GUI above and have X11.
### Override configures choice by uncommenting all the following lines.
### As they are, the GUI is disabled.  Replace "NONE" with "ATHENA" or "MOTIF"
### for enabling the Athena or Motif GUI.
#GUI_SRC	= $(NONE_SRC)
#GUI_OBJ	= $(NONE_OBJ)
#GUI_DEFS	= $(NONE_DEFS)
#GUI_IPATH	= $(NONE_IPATH)
#GUI_LIBS_DIR	= $(NONE_LIBS_DIR)
#GUI_LIBS1	= $(NONE_LIBS1)
#GUI_LIBS2	= $(NONE_LIBS2)
#GUI_INSTALL    = $(NONE_INSTALL)
#GUI_TARGETS	= $(NONE_TARGETS)
#GUI_MAN_TARGETS= $(NONE_MAN_TARGETS)
#GUI_TESTTARGET = $(NONE_TESTTARGET)
#GUI_BUNDLE	= $(NONE_BUNDLE)

# Without a GUI install the normal way.
NONE_INSTALL = install_normal

### GTK GUI
GTK_SRC		= gui.c gui_gtk.c gui_gtk_x11.c pty.c gui_gtk_f.c
GTK_OBJ		= objects/gui.o objects/gui_gtk.o objects/gui_gtk_x11.o \
			objects/pty.o objects/gui_gtk_f.o
GTK_DEFS	= -DFEAT_GUI_GTK $(NARROW_PROTO)
GTK_IPATH	= $(GUI_INC_LOC)
GTK_LIBS_DIR	= $(GUI_LIB_LOC)
GTK_LIBS1	=
GTK_LIBS2	= $(GTK_LIBNAME)
GTK_INSTALL     = install_normal install_gui_extra
GTK_TARGETS	= installglinks
GTK_MAN_TARGETS = yes
GTK_TESTTARGET  = gui
GTK_BUNDLE	=

# All GUI files
ALL_GUI_SRC  = gui.c gui_gtk.c gui_gtk_f.c gui_gtk_x11.c gui_x11.c pty.c
ALL_GUI_PRO  = gui.pro gui_gtk.pro gui_gtk_x11.pro gui_x11.pro

### Command to create dependencies based on #include "..."
### prototype headers are ignored due to -DPROTO, system
### headers #include <...> are ignored if we use the -MM option, as
### e.g. provided by gcc-cpp.
### Include FEAT_GUI to get dependency on gui.h
### Need to change "-I /<path>" to "-isystem /<path>" for GCC 3.x.
CPP_DEPEND = $(CC) -I$(srcdir) -M$(CPP_MM) \
		`echo "$(DEPEND_CFLAGS)" $(DEPEND_CFLAGS_FILTER)`

# flags for cproto
#     This is for cproto 3 patchlevel 8 or below
#     __inline, __attribute__ and __extension__ are not recognized by cproto
#     G_IMPLEMENT_INLINES is to avoid functions defined in glib/gutils.h.
#NO_ATTR = -D__inline= -D__inline__= -DG_IMPLEMENT_INLINES \
#	  -D"__attribute__\\(x\\)=" -D"__asm__\\(x\\)=" \
#	  -D__extension__= -D__restrict="" \
#	  -D__gnuc_va_list=char -D__builtin_va_list=char

#
#     This is for cproto 3 patchlevel 9 or above (currently 4.6, 4.7g)
#     __inline and __attribute__ are now recognized by cproto
#     -D"foo()=" is not supported by all compilers so do not use it
NO_ATTR=
#
# Use this for cproto 3 patchlevel 6 or below (use "cproto -V" to check):
# PROTO_FLAGS = -f4 -m__ARGS -d -E"$(CPP)" $(NO_ATTR)
#
# Use this for cproto 3 patchlevel 7 or above (use "cproto -V" to check):
PROTO_FLAGS = -m -M__ARGS -d -E"$(CPP)" $(NO_ATTR)


################################################
##   no changes required below this line      ##
################################################

SHELL = /bin/sh

.SUFFIXES:
.SUFFIXES: .c .o .pro

PRE_DEFS = -Iproto $(DEFS) $(GUI_DEFS) $(GUI_IPATH) $(CPPFLAGS) $(EXTRA_IPATHS)
POST_DEFS = $(X_CFLAGS) $(MZSCHEME_CFLAGS) $(TCL_CFLAGS) $(EXTRA_DEFS)

ALL_CFLAGS = $(PRE_DEFS) $(CFLAGS) $(PROFILE_CFLAGS) $(LEAK_CFLAGS) $(POST_DEFS)

# Exclude $CFLAGS for osdef.sh, for Mac 10.4 some flags don't work together
# with "-E".
OSDEF_CFLAGS = $(PRE_DEFS) $(POST_DEFS)

LINT_CFLAGS = -DLINT -I. $(PRE_DEFS) $(POST_DEFS) $(PYTHON_CFLAGS) $(PYTHON3_CFLAGS) -Dinline= -D__extension__= -Dalloca=alloca

LINT_EXTRA = -DUSE_SNIFF -DHANGUL_INPUT -D"__attribute__(x)="

DEPEND_CFLAGS = -DPROTO -DDEPEND -DFEAT_GUI $(LINT_CFLAGS)

# Note: MZSCHEME_LIBS must come before LIBS, because LIBS adds -lm which is
# needed by racket.
ALL_LIB_DIRS = $(GUI_LIBS_DIR) $(X_LIBS_DIR)
ALL_LIBS = \
	   $(GUI_LIBS1) \
	   $(GUI_X_LIBS) \
	   $(GUI_LIBS2) \
	   $(X_PRE_LIBS) \
	   $(X_LIBS) \
	   $(X_EXTRA_LIBS) \
	   $(MZSCHEME_LIBS) \
	   $(LIBS) \
	   $(EXTRA_LIBS) \
	   $(LUA_LIBS) \
	   $(PYTHON_LIBS) \
	   $(PYTHON3_LIBS) \
	   $(TCL_LIBS) \
	   $(RUBY_LIBS) \
	   $(PROFILE_LIBS) \
	   $(LEAK_LIBS)

# abbreviations
DEST_BIN = $(DESTDIR)$(BINDIR)
DEST_VIM = $(DESTDIR)$(VIMLOC)
DEST_RT = $(DESTDIR)$(VIMRTLOC)
DEST_HELP = $(DESTDIR)$(HELPSUBLOC)
DEST_COL = $(DESTDIR)$(COLSUBLOC)
DEST_SYN = $(DESTDIR)$(SYNSUBLOC)
DEST_IND = $(DESTDIR)$(INDSUBLOC)
DEST_AUTO = $(DESTDIR)$(AUTOSUBLOC)
DEST_PLUG = $(DESTDIR)$(PLUGSUBLOC)
DEST_FTP = $(DESTDIR)$(FTPLUGSUBLOC)
DEST_LANG = $(DESTDIR)$(LANGSUBLOC)
DEST_COMP = $(DESTDIR)$(COMPSUBLOC)
DEST_KMAP = $(DESTDIR)$(KMAPSUBLOC)
DEST_MACRO = $(DESTDIR)$(MACROSUBLOC)
DEST_TOOLS = $(DESTDIR)$(TOOLSSUBLOC)
DEST_TUTOR = $(DESTDIR)$(TUTORSUBLOC)
DEST_SPELL = $(DESTDIR)$(SPELLSUBLOC)
DEST_SCRIPT = $(DESTDIR)$(SCRIPTLOC)
DEST_PRINT = $(DESTDIR)$(PRINTSUBLOC)
DEST_MAN_TOP = $(DESTDIR)$(MANDIR)

# We assume that the ".../man/xx/man1/" directory is for latin1 manual pages.
# Some systems use UTF-8, but these should find the ".../man/xx.UTF-8/man1/"
# directory first.
# FreeBSD uses ".../man/xx.ISO8859-1/man1" for latin1, use that one too.
DEST_MAN = $(DEST_MAN_TOP)$(MAN1DIR)
DEST_MAN_FR = $(DEST_MAN_TOP)/fr$(MAN1DIR)
DEST_MAN_FR_I = $(DEST_MAN_TOP)/fr.ISO8859-1$(MAN1DIR)
DEST_MAN_FR_U = $(DEST_MAN_TOP)/fr.UTF-8$(MAN1DIR)
DEST_MAN_IT = $(DEST_MAN_TOP)/it$(MAN1DIR)
DEST_MAN_IT_I = $(DEST_MAN_TOP)/it.ISO8859-1$(MAN1DIR)
DEST_MAN_IT_U = $(DEST_MAN_TOP)/it.UTF-8$(MAN1DIR)
DEST_MAN_JA_U = $(DEST_MAN_TOP)/ja$(MAN1DIR)
DEST_MAN_PL = $(DEST_MAN_TOP)/pl$(MAN1DIR)
DEST_MAN_PL_I = $(DEST_MAN_TOP)/pl.ISO8859-2$(MAN1DIR)
DEST_MAN_PL_U = $(DEST_MAN_TOP)/pl.UTF-8$(MAN1DIR)
DEST_MAN_RU = $(DEST_MAN_TOP)/ru.KOI8-R$(MAN1DIR)
DEST_MAN_RU_U = $(DEST_MAN_TOP)/ru.UTF-8$(MAN1DIR)

#	     BASIC_SRC: files that are always used
#	       GUI_SRC: extra GUI files for current configuration
#	   ALL_GUI_SRC: all GUI files for Unix
#
#		   SRC: files used for current configuration
#	      TAGS_SRC: source files used for make tags
#	     TAGS_INCL: include files used for make tags
#	       ALL_SRC: source files used for make depend and make lint

TAGS_INCL = *.h

BASIC_SRC = \
	buffer.c \
	charset.c \
	diff.c \
	digraph.c \
	edit.c \
	eval.c \
	ex_cmds.c \
	ex_cmds2.c \
	ex_docmd.c \
	ex_eval.c \
	ex_getln.c \
	fileio.c \
	fold.c \
	getchar.c \
	hashtab.c \
	if_xcmdsrv.c \
	main.c \
	mark.c \
	memfile.c \
	memline.c \
	menu.c \
	message.c \
	misc1.c \
	misc2.c \
	move.c \
	mbyte.c \
	normal.c \
	ops.c \
	option.c \
	os_unix.c \
	auto/pathdef.c \
	popupmnu.c \
	quickfix.c \
	regexp.c \
	screen.c \
	search.c \
	sha256.c \
	spell.c \
	syntax.c \
	tag.c \
	term.c \
	ui.c \
	undo.c \
	version.c \
	window.c \
	$(OS_EXTRA_SRC)

SRC =	$(BASIC_SRC) \
	$(GUI_SRC) \
	$(PYTHON_SRC) $(PYTHON3_SRC) \
	$(WORKSHOP_SRC) \
	$(WSDEBUG_SRC)

TAGS_SRC = *.c *.cpp

EXTRA_SRC = if_python.c wsdebug.c

# Unittest files
MEMFILE_TEST_SRC = memfile_test.c
MEMFILE_TEST_TARGET = memfile_test$(EXEEXT)

UNITTEST_SRC = $(MEMFILE_TEST_SRC)
UNITTEST_TARGETS = $(MEMFILE_TEST_TARGET)

# All sources, also the ones that are not configured
ALL_SRC = $(BASIC_SRC) $(ALL_GUI_SRC) $(UNITTEST_SRC) $(EXTRA_SRC)

# Which files to check with lint.  Select one of these three lines.  ALL_SRC
# checks more, but may not work well for checking a GUI that wasn't configured.
# The perl sources also don't work well with lint.
LINT_SRC = $(BASIC_SRC) $(GUI_SRC) $(PYTHON_SRC) $(PYTHON3_SRC) $(TCL_SRC) \
	$(SNIFF_SRC) $(WORKSHOP_SRC) $(WSDEBUG_SRC)
#LINT_SRC = $(SRC)
#LINT_SRC = $(ALL_SRC)
#LINT_SRC = $(BASIC_SRC)

OBJ_COMMON = \
	objects/buffer.o \
	objects/charset.o \
	objects/diff.o \
	objects/digraph.o \
	objects/edit.o \
	objects/eval.o \
	objects/ex_cmds.o \
	objects/ex_cmds2.o \
	objects/ex_docmd.o \
	objects/ex_eval.o \
	objects/ex_getln.o \
	objects/fileio.o \
	objects/fold.o \
	objects/getchar.o \
	objects/hashtab.o \
	objects/if_xcmdsrv.o \
	objects/mark.o \
        objects/memline.o \
	objects/menu.o \
	objects/message.o \
	objects/misc1.o \
	objects/misc2.o \
	objects/move.o \
	objects/mbyte.o \
	objects/normal.o \
	objects/ops.o \
	objects/option.o \
	objects/os_unix.o \
	objects/pathdef.o \
	objects/popupmnu.o \
	objects/quickfix.o \
	objects/regexp.o \
	objects/screen.o \
	objects/search.o \
	objects/sha256.o \
	objects/spell.o \
	objects/syntax.o \
	$(SNIFF_OBJ) \
	objects/tag.o \
	objects/term.o \
	objects/ui.o \
	objects/undo.o \
	objects/version.o \
	objects/window.o \
	$(GUI_OBJ) \
	$(LUA_OBJ) \
	$(MZSCHEME_OBJ) \
	$(PYTHON_OBJ) \
	$(PYTHON3_OBJ) \
	$(TCL_OBJ) \
	$(RUBY_OBJ) \
	$(OS_EXTRA_OBJ) \
	$(WORKSHOP_OBJ) \
	$(WSDEBUG_OBJ)

OBJ = $(OBJ_COMMON) \
	objects/main.o \
	objects/memfile.o

MEMFILE_TEST_OBJ = $(OBJ_COMMON) \
        objects/memfile_test.o

PRO_AUTO = \
	buffer.pro \
	charset.pro \
	diff.pro \
	digraph.pro \
	edit.pro \
	eval.pro \
	ex_cmds.pro \
	ex_cmds2.pro \
	ex_docmd.pro \
	ex_eval.pro \
	ex_getln.pro \
	fileio.pro \
	fold.pro \
	getchar.pro \
	hashtab.pro \
	if_xcmdsrv.pro \
	if_python.pro \
	main.pro \
	mark.pro \
	memfile.pro \
	memline.pro \
	menu.pro \
	message.pro \
	misc1.pro \
	misc2.pro \
	move.pro \
	mbyte.pro \
	normal.pro \
	ops.pro \
	option.pro \
	os_unix.pro \
	popupmnu.pro \
	quickfix.pro \
	regexp.pro \
	screen.pro \
	search.pro \
	sha256.pro \
	spell.pro \
	syntax.pro \
	tag.pro \
	term.pro \
	termlib.pro \
	ui.pro \
	undo.pro \
	version.pro \
	window.pro \
	workshop.pro \
	$(ALL_GUI_PRO) \
	$(TCL_PRO)

# Resources used for the Mac are in one directory.
RSRC_DIR = os_mac_rsrc

PRO_MANUAL = os_amiga.pro os_msdos.pro os_win16.pro os_win32.pro \
	os_mswin.pro winclip.pro os_beos.pro os_vms.pro

# Default target is making the executable and tools
all: $(VIMTARGET) $(TOOLS) languages $(GUI_BUNDLE)

tools: $(TOOLS)

# Run configure with all the setting from above.
#
# Note: auto/config.h doesn't depend on configure, because running configure
# doesn't always update auto/config.h.  The timestamp isn't changed if the
# file contents didn't change (to avoid recompiling everything).  Including a
# dependency on auto/config.h would cause running configure each time when
# auto/config.h isn't updated.  The dependency on auto/config.mk should make
# sure configure is run when it's needed.
#
config auto/config.mk: auto/configure config.mk.in config.h.in
	if test -f auto/config.cache && \
	    grep '^ac_cv_env_CFLAGS_value=' auto/config.cache > /dev/null && \
	    ! grep -x -F 'ac_cv_env_CFLAGS_value=$(CFLAGS)' auto/config.cache > /dev/null; then \
		rm auto/config.cache; \
	fi
	GUI_INC_LOC="$(GUI_INC_LOC)" GUI_LIB_LOC="$(GUI_LIB_LOC)" \
		CC="$(CC)" CPPFLAGS="$(CPPFLAGS)" CFLAGS="$(CFLAGS)" \
		LDFLAGS="$(LDFLAGS)" $(CONF_SHELL) srcdir="$(srcdir)" \
		./configure $(CONF_OPT_GUI) $(CONF_OPT_X) $(CONF_OPT_XSMP) \
		$(CONF_OPT_DARWIN) $(CONF_OPT_FAIL) \
		$(CONF_OPT_PYTHON) $(CONF_OPT_PYTHON3) \
		$(CONF_OPT_TCL) $(CONF_OPT_RUBY) $(CONF_OPT_NLS) \
		$(CONF_OPT_CSCOPE) $(CONF_OPT_MULTIBYTE) $(CONF_OPT_INPUT) \
		$(CONF_OPT_OUTPUT) $(CONF_OPT_GPM) $(CONF_OPT_WORKSHOP) \
		$(CONF_OPT_SNIFF) $(CONF_OPT_FEAT) $(CONF_TERM_LIB) \
		$(CONF_OPT_COMPBY) $(CONF_OPT_ACL) \
		$(CONF_ARGS) $(CONF_OPT_MZSCHEME) $(CONF_OPT_PLTHOME) \
		$(CONF_OPT_LUA) $(CONF_OPT_LUA_PREFIX) \
		$(CONF_OPT_SYSMOUSE)

# Use "make reconfig" to rerun configure without cached values.
# When config.h changes, most things will be recompiled automatically.
# Invoke $(MAKE) to run config with the empty auto/config.mk.
# Invoke $(MAKE) to build all with the filled auto/config.mk.
reconfig: scratch clean
	$(MAKE) -f Makefile config
	$(MAKE) -f Makefile all

# Run autoconf to produce auto/configure.
# Note:
# - DO NOT RUN autoconf MANUALLY!  It will overwrite ./configure instead of
#   producing auto/configure.
# - autoconf is not run automatically, because a patch usually changes both
#   configure.in and auto/configure but can't update the timestamps.  People
#   who do not have (the correct version of) autoconf would run into trouble.
#
# Two tricks are required to make autoconf put its output in the "auto" dir:
# - Temporarily move the ./configure script to ./configure.save.  Don't
#   overwrite it, it's probably the result of an aborted autoconf.
# - Use sed to change ./config.log to auto/config.log in the configure script.
# Autoconf 2.5x (2.59 at least) produces a few more files that we need to take
# care of:
# - configure.lineno: has the line numbers replaced with $LINENO.  That
#   improves patches a LOT, thus use it instead (until someone says it doesn't
#   work on some system).
# - autom4te.cache directory is created and not cleaned up.  Delete it.
# - Uses ">config.log" instead of "./config.log".
autoconf:
	if test ! -f configure.save; then mv configure configure.save; fi
	autoconf
	sed -e 's+>config.log+>auto/config.log+' -e 's+\./config.log+auto/config.log+' configure > auto/configure
	chmod 755 auto/configure
	mv -f configure.save configure
	-rm -rf autom4te.cache
	-rm -f auto/config.status auto/config.cache

# Re-execute this Makefile to include the new auto/config.mk produced by
# configure Only used when typing "make" with a fresh auto/config.mk.
myself:
	$(MAKE) -f Makefile all


# The normal command to compile a .c file to its .o file.
CCC = $(CC) -c -I$(srcdir) $(ALL_CFLAGS)


# Link the target for normal use or debugging.
# A shell script is used to try linking without unnecessary libraries.
$(VIMTARGET): auto/config.mk objects $(OBJ) version.c version.h
	$(CCC) version.c -o objects/version.o
	@LINK="$(PURIFY) $(SHRPENV) $(CClink) $(ALL_LIB_DIRS) $(LDFLAGS) \
		-o $(VIMTARGET) $(OBJ) $(ALL_LIBS)" \
		MAKE="$(MAKE)" LINK_AS_NEEDED=$(LINK_AS_NEEDED) \
		sh $(srcdir)/link.sh

xxd/xxd$(EXEEXT): xxd/xxd.c
	cd xxd; CC="$(CC)" CFLAGS="$(CPPFLAGS) $(CFLAGS)" LDFLAGS="$(LDFLAGS)" \
		$(MAKE) -f Makefile

# Build the language specific files if they were unpacked.
# Generate the converted .mo files separately, it's no problem if this fails.
languages:
	@if test -n "$(MAKEMO)" -a -f $(PODIR)/Makefile; then \
		cd $(PODIR); \
		CC="$(CC)" $(MAKE) prefix=$(DESTDIR)$(prefix); \
	fi
	-@if test -n "$(MAKEMO)" -a -f $(PODIR)/Makefile; then \
		cd $(PODIR); CC="$(CC)" $(MAKE) prefix=$(DESTDIR)$(prefix) converted; \
	fi

# Update the *.po files for changes in the sources.  Only run manually.
update-po:
	cd $(PODIR); CC="$(CC)" $(MAKE) prefix=$(DESTDIR)$(prefix) update-po

# Generate function prototypes.  This is not needed to compile vim, but if
# you want to use it, cproto is out there on the net somewhere -- Webb
#
# When generating os_amiga.pro, os_msdos.pro and os_win32.pro there will be a
# few include files that can not be found, that's OK.

proto: $(PRO_AUTO) $(PRO_MANUAL)

# Filter out arguments that cproto doesn't support.
# Don't pass "-pthread" to cproto, it sees it as a list of individual flags.
# Don't pass "-fstack-protector" to cproto, for the same reason.
# Don't pass "-g" to cproto.
# The -E"gcc -E" argument must be separate to avoid problems with shell
# quoting.
CPROTO = cproto $(PROTO_FLAGS) -DPROTO \
	 `echo '$(LINT_CFLAGS)' | sed -e 's/-pthread//g' -e 's/-fstack-protector//g' -e 's/\ -g\ / /g'`

### Would be nice if this would work for "normal" make.
### Currently it only works for (Free)BSD make.
#$(PRO_AUTO): $$(*F).c
#	$(CPROTO) -DFEAT_GUI $(*F).c > $@

# Always define FEAT_GUI.  This may generate a few warnings if it's also
# defined in auto/config.h, you can ignore that.
.c.pro:
	$(CPROTO) -DFEAT_GUI $< > proto/$@
	echo "/* vim: set ft=c : */" >> proto/$@

os_amiga.pro: os_amiga.c
	$(CPROTO) -DAMIGA -UHAVE_CONFIG_H -DBPTR=char* $< > proto/$@
	echo "/* vim: set ft=c : */" >> proto/$@

os_msdos.pro: os_msdos.c
	$(CPROTO) -DMSDOS -UHAVE_CONFIG_H $< > proto/$@
	echo "/* vim: set ft=c : */" >> proto/$@

os_win16.pro: os_win16.c
	$(CPROTO) -DWIN16 -UHAVE_CONFIG_H $< > proto/$@
	echo "/* vim: set ft=c : */" >> proto/$@

os_win32.pro: os_win32.c
	$(CPROTO) -DWIN32 -UHAVE_CONFIG_H $< > proto/$@
	echo "/* vim: set ft=c : */" >> proto/$@

os_mswin.pro: os_mswin.c
	$(CPROTO) -DWIN16 -DWIN32 -UHAVE_CONFIG_H $< > proto/$@
	echo "/* vim: set ft=c : */" >> proto/$@

winclip.pro: winclip.c
	$(CPROTO) -DWIN16 -DWIN32 -UHAVE_CONFIG_H $< > proto/$@
	echo "/* vim: set ft=c : */" >> proto/$@

os_beos.pro: os_beos.c
	$(CPROTO) -D__BEOS__ -UHAVE_CONFIG_H $< > proto/$@
	echo "/* vim: set ft=c : */" >> proto/$@

os_vms.pro: os_vms.c
# must use os_vms_conf.h for auto/config.h
	mv auto/config.h auto/config.h.save
	cp os_vms_conf.h auto/config.h
	$(CPROTO) -DVMS -UFEAT_GUI_ATHENA -UFEAT_GUI_NEXTAW -UFEAT_GUI_GTK $< > proto/$@
	echo "/* vim: set ft=c : */" >> proto/$@
	rm auto/config.h
	mv auto/config.h.save auto/config.h

notags:
	-rm -f tags

# Note: tags is made for the currently configured version, can't include both
#	Motif and Athena GUI
# You can ignore error messages for missing files.
tags TAGS: notags
	$(TAGPRG) $(TAGS_SRC) $(TAGS_INCL)

# Make a highlight file for types.  Requires Exuberant ctags and awk
types: types.vim
types.vim: $(TAGS_SRC) $(TAGS_INCL)
	ctags --c-kinds=gstu -o- $(TAGS_SRC) $(TAGS_INCL) |\
		awk 'BEGIN{printf("syntax keyword Type\t")}\
			{printf("%s ", $$1)}END{print ""}' > $@

# install targets

install: $(GUI_INSTALL)

install_normal: installvim installtools $(INSTALL_LANGS) install-icons

install_gui_extra: installgtutorbin

installvim: installvimbin installtutorbin \
		installruntime installlinks installmanlinks

#
# Avoid overwriting an existing executable, somebody might be running it and
# overwriting it could cause it to crash.  Deleting it is OK, it won't be
# really deleted until all running processes for it have exited.  It is
# renamed first, in case the deleting doesn't work.
#
# If you want to keep an older version, rename it before running "make
# install".
#
installvimbin: $(VIMTARGET) $(DESTDIR)$(exec_prefix) $(DEST_BIN)
	-if test -f $(DEST_BIN)/$(VIMTARGET); then \
	  mv -f $(DEST_BIN)/$(VIMTARGET) $(DEST_BIN)/$(VIMNAME).rm; \
	  rm -f $(DEST_BIN)/$(VIMNAME).rm; \
	fi
	$(INSTALL_PROG) $(VIMTARGET) $(DEST_BIN)
	$(STRIP) $(DEST_BIN)/$(VIMTARGET)
	chmod $(BINMOD) $(DEST_BIN)/$(VIMTARGET)
# may create a link to the new executable from /usr/bin/vi
	-$(LINKIT)

# Long list of arguments for the shell script that installs the manual pages
# for one language.
INSTALLMANARGS = $(VIMLOC) $(SCRIPTLOC) $(VIMRCLOC) $(HELPSOURCE) $(MANMOD) \
		$(VIMNAME) $(VIMDIFFNAME) $(EVIMNAME)

# Install most of the runtime files
installruntime: installrtbase installmacros installtutor installspell

# install the help files; first adjust the contents for the final location
installrtbase: $(HELPSOURCE)/vim.1 $(DEST_VIM) $(DEST_RT) \
		$(DEST_HELP) $(DEST_PRINT) $(DEST_COL) $(DEST_SYN) $(DEST_IND) \
		$(DEST_FTP) $(DEST_AUTO) $(DEST_AUTO)/xml $(DEST_PLUG) \
		$(DEST_TUTOR) $(DEST_SPELL) $(DEST_COMP)
	-$(SHELL) ./installman.sh install $(DEST_MAN) "" $(INSTALLMANARGS)
	@echo generating help tags
# Generate the help tags with ":helptags" to handle all languages.
	-@cd $(HELPSOURCE); $(MAKE) VIMEXE=$(DEST_BIN)/$(VIMTARGET) vimtags
	cd $(HELPSOURCE); \
		files=`ls *.txt tags`; \
		files="$$files `ls *.??x tags-?? 2>/dev/null || true`"; \
		$(INSTALL_DATA) $$files  $(DEST_HELP); \
		cd $(DEST_HELP); \
		chmod $(HELPMOD) $$files
	$(INSTALL_DATA)  $(HELPSOURCE)/*.pl $(DEST_HELP)
	chmod $(SCRIPTMOD) $(DEST_HELP)/*.pl
# install the menu files
	$(INSTALL_DATA) $(SCRIPTSOURCE)/menu.vim $(SYS_MENU_FILE)
	chmod $(VIMSCRIPTMOD) $(SYS_MENU_FILE)
	$(INSTALL_DATA) $(SCRIPTSOURCE)/synmenu.vim $(SYS_SYNMENU_FILE)
	chmod $(VIMSCRIPTMOD) $(SYS_SYNMENU_FILE)
	$(INSTALL_DATA) $(SCRIPTSOURCE)/delmenu.vim $(SYS_DELMENU_FILE)
	chmod $(VIMSCRIPTMOD) $(SYS_DELMENU_FILE)
# install the evim file
	$(INSTALL_DATA) $(SCRIPTSOURCE)/mswin.vim $(MSWIN_FILE)
	chmod $(VIMSCRIPTMOD) $(MSWIN_FILE)
	$(INSTALL_DATA) $(SCRIPTSOURCE)/evim.vim $(EVIM_FILE)
	chmod $(VIMSCRIPTMOD) $(EVIM_FILE)
# install the bugreport file
	$(INSTALL_DATA) $(SCRIPTSOURCE)/bugreport.vim $(SYS_BUGR_FILE)
	chmod $(VIMSCRIPTMOD) $(SYS_BUGR_FILE)
# install the example vimrc files
	$(INSTALL_DATA) $(SCRIPTSOURCE)/vimrc_example.vim $(DEST_SCRIPT)
	chmod $(VIMSCRIPTMOD) $(DEST_SCRIPT)/vimrc_example.vim
	$(INSTALL_DATA) $(SCRIPTSOURCE)/gvimrc_example.vim $(DEST_SCRIPT)
	chmod $(VIMSCRIPTMOD) $(DEST_SCRIPT)/gvimrc_example.vim
# install the file type detection files
	$(INSTALL_DATA) $(SCRIPTSOURCE)/filetype.vim $(SYS_FILETYPE_FILE)
	chmod $(VIMSCRIPTMOD) $(SYS_FILETYPE_FILE)
	$(INSTALL_DATA) $(SCRIPTSOURCE)/ftoff.vim $(SYS_FTOFF_FILE)
	chmod $(VIMSCRIPTMOD) $(SYS_FTOFF_FILE)
	$(INSTALL_DATA) $(SCRIPTSOURCE)/scripts.vim $(SYS_SCRIPTS_FILE)
	chmod $(VIMSCRIPTMOD) $(SYS_SCRIPTS_FILE)
	$(INSTALL_DATA) $(SCRIPTSOURCE)/ftplugin.vim $(SYS_FTPLUGIN_FILE)
	chmod $(VIMSCRIPTMOD) $(SYS_FTPLUGIN_FILE)
	$(INSTALL_DATA) $(SCRIPTSOURCE)/ftplugof.vim $(SYS_FTPLUGOF_FILE)
	chmod $(VIMSCRIPTMOD) $(SYS_FTPLUGOF_FILE)
	$(INSTALL_DATA) $(SCRIPTSOURCE)/indent.vim $(SYS_INDENT_FILE)
	chmod $(VIMSCRIPTMOD) $(SYS_INDENT_FILE)
	$(INSTALL_DATA) $(SCRIPTSOURCE)/indoff.vim $(SYS_INDOFF_FILE)
	chmod $(VIMSCRIPTMOD) $(SYS_INDOFF_FILE)
	$(INSTALL_DATA) $(SCRIPTSOURCE)/optwin.vim $(SYS_OPTWIN_FILE)
	chmod $(VIMSCRIPTMOD) $(SYS_OPTWIN_FILE)
# install the print resource files
	cd $(PRINTSOURCE); $(INSTALL_DATA) *.ps $(DEST_PRINT)
	cd $(DEST_PRINT); chmod $(FILEMOD) *.ps
# install the colorscheme files
	cd $(COLSOURCE); $(INSTALL_DATA) *.vim README.txt $(DEST_COL)
	cd $(DEST_COL); chmod $(HELPMOD) *.vim README.txt
# install the syntax files
	cd $(SYNSOURCE); $(INSTALL_DATA) *.vim README.txt $(DEST_SYN)
	cd $(DEST_SYN); chmod $(HELPMOD) *.vim README.txt
# install the indent files
	cd $(INDSOURCE); $(INSTALL_DATA) *.vim README.txt $(DEST_IND)
	cd $(DEST_IND); chmod $(HELPMOD) *.vim README.txt
# install the standard autoload files
	cd $(AUTOSOURCE); $(INSTALL_DATA) *.vim README.txt $(DEST_AUTO)
	cd $(DEST_AUTO); chmod $(HELPMOD) *.vim README.txt
	cd $(AUTOSOURCE)/xml; $(INSTALL_DATA) *.vim $(DEST_AUTO)/xml
	cd $(DEST_AUTO)/xml; chmod $(HELPMOD) *.vim
# install the standard plugin files
	cd $(PLUGSOURCE); $(INSTALL_DATA) *.vim README.txt $(DEST_PLUG)
	cd $(DEST_PLUG); chmod $(HELPMOD) *.vim README.txt
# install the ftplugin files
	cd $(FTPLUGSOURCE); $(INSTALL_DATA) *.vim README.txt logtalk.dict $(DEST_FTP)
	cd $(DEST_FTP); chmod $(HELPMOD) *.vim README.txt
# install the compiler files
	cd $(COMPSOURCE); $(INSTALL_DATA) *.vim README.txt $(DEST_COMP)
	cd $(DEST_COMP); chmod $(HELPMOD) *.vim README.txt

installmacros: $(DEST_VIM) $(DEST_RT) $(DEST_MACRO)
	$(INSTALL_DATA_R) $(MACROSOURCE)/* $(DEST_MACRO)
	chmod $(DIRMOD) `find $(DEST_MACRO) -type d -print`
	chmod $(FILEMOD) `find $(DEST_MACRO) -type f -print`
	chmod $(SCRIPTMOD) $(DEST_MACRO)/less.sh
# When using CVS some CVS directories might have been copied.
# Also delete AAPDIR and *.info files.
	cvs=`find $(DEST_MACRO) \( -name CVS -o -name AAPDIR -o -name "*.info" \) -print`; \
	      if test -n "$$cvs"; then \
		 rm -rf $$cvs; \
	      fi

# install the tutor files
installtutorbin: $(DEST_VIM)
	$(INSTALL_DATA) vimtutor $(DEST_BIN)/$(VIMNAME)tutor
	chmod $(SCRIPTMOD) $(DEST_BIN)/$(VIMNAME)tutor

installgtutorbin: $(DEST_VIM)
	$(INSTALL_DATA) gvimtutor $(DEST_BIN)/$(GVIMNAME)tutor
	chmod $(SCRIPTMOD) $(DEST_BIN)/$(GVIMNAME)tutor

installtutor: $(DEST_RT) $(DEST_TUTOR)
	-$(INSTALL_DATA) $(TUTORSOURCE)/README* $(TUTORSOURCE)/tutor* $(DEST_TUTOR)
	-rm -f $(DEST_TUTOR)/*.info
	chmod $(HELPMOD) $(DEST_TUTOR)/*

# Install the spell files, if they exist.  This assumes at least the English
# spell file is there.
installspell: $(DEST_VIM) $(DEST_RT) $(DEST_SPELL)
	if test -f $(SPELLSOURCE)/en.latin1.spl; then \
	  $(INSTALL_DATA) $(SPELLSOURCE)/*.spl $(SPELLSOURCE)/*.sug $(SPELLSOURCE)/*.vim $(DEST_SPELL); \
	  chmod $(HELPMOD) $(DEST_SPELL)/*.spl $(DEST_SPELL)/*.sug $(DEST_SPELL)/*.vim; \
	fi

# install helper program xxd
installtools: $(TOOLS) $(DESTDIR)$(exec_prefix) $(DEST_BIN) \
		$(TOOLSSOURCE) $(DEST_VIM) $(DEST_RT) $(DEST_TOOLS) \
		$(INSTALL_TOOL_LANGS)
	if test -f $(DEST_BIN)/xxd$(EXEEXT); then \
	  mv -f $(DEST_BIN)/xxd$(EXEEXT) $(DEST_BIN)/xxd.rm; \
	  rm -f $(DEST_BIN)/xxd.rm; \
	fi
	$(INSTALL_PROG) xxd/xxd$(EXEEXT) $(DEST_BIN)
	$(STRIP) $(DEST_BIN)/xxd$(EXEEXT)
	chmod $(BINMOD) $(DEST_BIN)/xxd$(EXEEXT)
	-$(SHELL) ./installman.sh xxd $(DEST_MAN) "" $(INSTALLMANARGS)

# install the runtime tools
	$(INSTALL_DATA_R) $(TOOLSSOURCE)/* $(DEST_TOOLS)
# When using CVS some CVS directories might have been copied.
	cvs=`find $(DEST_TOOLS) \( -name CVS -o -name AAPDIR \) -print`; \
	      if test -n "$$cvs"; then \
		 rm -rf $$cvs; \
	      fi
	-chmod $(FILEMOD) $(DEST_TOOLS)/*
# replace the path in some tools
	awkpath=`./which.sh nawk` && sed -e "s+/usr/bin/nawk+$$awkpath+" $(TOOLSSOURCE)/mve.awk >$(DEST_TOOLS)/mve.awk; if test -z "$$awkpath"; then \
		awkpath=`./which.sh gawk` && sed -e "s+/usr/bin/nawk+$$awkpath+" $(TOOLSSOURCE)/mve.awk >$(DEST_TOOLS)/mve.awk; if test -z "$$awkpath"; then \
		awkpath=`./which.sh awk` && sed -e "s+/usr/bin/nawk+$$awkpath+" $(TOOLSSOURCE)/mve.awk >$(DEST_TOOLS)/mve.awk; fi; fi
	-chmod $(SCRIPTMOD) `grep -l "^#!" $(DEST_TOOLS)/*`

# install the language specific files for tools, if they were unpacked
install-tool-languages:
	-$(SHELL) ./installman.sh xxd $(DEST_MAN_FR) "-fr" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh xxd $(DEST_MAN_FR_I) "-fr" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh xxd $(DEST_MAN_FR_U) "-fr.UTF-8" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh xxd $(DEST_MAN_IT) "-it" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh xxd $(DEST_MAN_IT_I) "-it" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh xxd $(DEST_MAN_IT_U) "-it.UTF-8" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh xxd $(DEST_MAN_JA_U) "-ja.UTF-8" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh xxd $(DEST_MAN_PL) "-pl" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh xxd $(DEST_MAN_PL_I) "-pl" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh xxd $(DEST_MAN_PL_U) "-pl.UTF-8" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh xxd $(DEST_MAN_RU) "-ru" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh xxd $(DEST_MAN_RU_U) "-ru.UTF-8" $(INSTALLMANARGS)

# install the language specific files, if they were unpacked
install-languages: languages $(DEST_LANG) $(DEST_KMAP)
	-$(SHELL) ./installman.sh install $(DEST_MAN_FR) "-fr" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh install $(DEST_MAN_FR_I) "-fr" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh install $(DEST_MAN_FR_U) "-fr.UTF-8" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh install $(DEST_MAN_IT) "-it" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh install $(DEST_MAN_IT_I) "-it" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh install $(DEST_MAN_IT_U) "-it.UTF-8" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh install $(DEST_MAN_JA_U) "-ja.UTF-8" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh install $(DEST_MAN_PL) "-pl" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh install $(DEST_MAN_PL_I) "-pl" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh install $(DEST_MAN_PL_U) "-pl.UTF-8" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh install $(DEST_MAN_RU) "-ru" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh install $(DEST_MAN_RU_U) "-ru.UTF-8" $(INSTALLMANARGS)
	-$(SHELL) ./installml.sh install "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN_FR) $(INSTALLMLARGS)
	-$(SHELL) ./installml.sh install "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN_FR_I) $(INSTALLMLARGS)
	-$(SHELL) ./installml.sh install "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN_FR_U) $(INSTALLMLARGS)
	-$(SHELL) ./installml.sh install "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN_IT) $(INSTALLMLARGS)
	-$(SHELL) ./installml.sh install "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN_IT_I) $(INSTALLMLARGS)
	-$(SHELL) ./installml.sh install "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN_IT_U) $(INSTALLMLARGS)
	-$(SHELL) ./installml.sh install "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN_JA_U) $(INSTALLMLARGS)
	-$(SHELL) ./installml.sh install "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN_PL) $(INSTALLMLARGS)
	-$(SHELL) ./installml.sh install "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN_PL_I) $(INSTALLMLARGS)
	-$(SHELL) ./installml.sh install "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN_PL_U) $(INSTALLMLARGS)
	-$(SHELL) ./installml.sh install "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN_RU) $(INSTALLMLARGS)
	-$(SHELL) ./installml.sh install "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN_RU_U) $(INSTALLMLARGS)
	if test -n "$(MAKEMO)" -a -f $(PODIR)/Makefile; then \
	   cd $(PODIR); $(MAKE) prefix=$(DESTDIR)$(prefix) LOCALEDIR=$(DEST_LANG) \
	   INSTALL_DATA=$(INSTALL_DATA) FILEMOD=$(FILEMOD) install; \
	fi
	if test -d $(LANGSOURCE); then \
	   $(INSTALL_DATA) $(LANGSOURCE)/README.txt $(LANGSOURCE)/*.vim $(DEST_LANG); \
	   chmod $(FILEMOD) $(DEST_LANG)/README.txt $(DEST_LANG)/*.vim; \
	fi
	if test -d $(KMAPSOURCE); then \
	   $(INSTALL_DATA) $(KMAPSOURCE)/README.txt $(KMAPSOURCE)/*.vim $(DEST_KMAP); \
	   chmod $(FILEMOD) $(DEST_KMAP)/README.txt $(DEST_KMAP)/*.vim; \
	fi

# install the icons for KDE, if the directory exists and the icon doesn't.
ICON48PATH = $(DESTDIR)$(DATADIR)/icons/hicolor/48x48/apps
ICON32PATH = $(DESTDIR)$(DATADIR)/icons/locolor/32x32/apps
ICON16PATH = $(DESTDIR)$(DATADIR)/icons/locolor/16x16/apps
KDEPATH = $(HOME)/.kde/share/icons
install-icons:
	if test -d $(ICON48PATH) -a -w $(ICON48PATH) \
		-a ! -f $(ICON48PATH)/gvim.png; then \
	   $(INSTALL_DATA) $(SCRIPTSOURCE)/vim48x48.png $(ICON48PATH)/gvim.png; \
	fi
	if test -d $(ICON32PATH) -a -w $(ICON32PATH) \
		-a ! -f $(ICON32PATH)/gvim.png; then \
	   $(INSTALL_DATA) $(SCRIPTSOURCE)/vim32x32.png $(ICON32PATH)/gvim.png; \
	fi
	if test -d $(ICON16PATH) -a -w $(ICON16PATH) \
		-a ! -f $(ICON16PATH)/gvim.png; then \
	   $(INSTALL_DATA) $(SCRIPTSOURCE)/vim16x16.png $(ICON16PATH)/gvim.png; \
	fi


$(HELPSOURCE)/vim.1 $(MACROSOURCE) $(TOOLSSOURCE):
	@echo Runtime files not found.
	@echo You need to unpack the runtime archive before running "make install".
	test -f error

$(DESTDIR)$(exec_prefix) $(DEST_BIN) \
		$(DEST_VIM) $(DEST_RT) $(DEST_HELP) \
		$(DEST_PRINT) $(DEST_COL) $(DEST_SYN) $(DEST_IND) $(DEST_FTP) \
		$(DEST_LANG) $(DEST_KMAP) $(DEST_COMP) \
		$(DEST_MACRO) $(DEST_TOOLS) $(DEST_TUTOR) $(DEST_SPELL) \
		$(DEST_AUTO) $(DEST_AUTO)/xml $(DEST_PLUG):
	-$(SHELL) ./mkinstalldirs $@
	-chmod $(DIRMOD) $@

# create links from various names to vim.  This is only done when the links
# (or executables with the same name) don't exist yet.
installlinks: $(GUI_TARGETS) \
			$(DEST_BIN)/$(EXTARGET) \
			$(DEST_BIN)/$(VIEWTARGET) \
			$(DEST_BIN)/$(RVIMTARGET) \
			$(DEST_BIN)/$(RVIEWTARGET) \
			$(INSTALLVIMDIFF)

installglinks: $(DEST_BIN)/$(GVIMTARGET) \
			$(DEST_BIN)/$(GVIEWTARGET) \
			$(DEST_BIN)/$(RGVIMTARGET) \
			$(DEST_BIN)/$(RGVIEWTARGET) \
			$(DEST_BIN)/$(EVIMTARGET) \
			$(DEST_BIN)/$(EVIEWTARGET) \
			$(INSTALLGVIMDIFF)

installvimdiff: $(DEST_BIN)/$(VIMDIFFTARGET)
installgvimdiff: $(DEST_BIN)/$(GVIMDIFFTARGET)

$(DEST_BIN)/$(EXTARGET):
	cd $(DEST_BIN); ln -s $(VIMTARGET) $(EXTARGET)

$(DEST_BIN)/$(VIEWTARGET):
	cd $(DEST_BIN); ln -s $(VIMTARGET) $(VIEWTARGET)

$(DEST_BIN)/$(GVIMTARGET):
	cd $(DEST_BIN); ln -s $(VIMTARGET) $(GVIMTARGET)

$(DEST_BIN)/$(GVIEWTARGET):
	cd $(DEST_BIN); ln -s $(VIMTARGET) $(GVIEWTARGET)

$(DEST_BIN)/$(RVIMTARGET):
	cd $(DEST_BIN); ln -s $(VIMTARGET) $(RVIMTARGET)

$(DEST_BIN)/$(RVIEWTARGET):
	cd $(DEST_BIN); ln -s $(VIMTARGET) $(RVIEWTARGET)

$(DEST_BIN)/$(RGVIMTARGET):
	cd $(DEST_BIN); ln -s $(VIMTARGET) $(RGVIMTARGET)

$(DEST_BIN)/$(RGVIEWTARGET):
	cd $(DEST_BIN); ln -s $(VIMTARGET) $(RGVIEWTARGET)

$(DEST_BIN)/$(VIMDIFFTARGET):
	cd $(DEST_BIN); ln -s $(VIMTARGET) $(VIMDIFFTARGET)

$(DEST_BIN)/$(GVIMDIFFTARGET):
	cd $(DEST_BIN); ln -s $(VIMTARGET) $(GVIMDIFFTARGET)

$(DEST_BIN)/$(EVIMTARGET):
	cd $(DEST_BIN); ln -s $(VIMTARGET) $(EVIMTARGET)

$(DEST_BIN)/$(EVIEWTARGET):
	cd $(DEST_BIN); ln -s $(VIMTARGET) $(EVIEWTARGET)

# Create links for the manual pages with various names to vim.	This is only
# done when the links (or manpages with the same name) don't exist yet.

INSTALLMLARGS = $(VIMNAME) $(VIMDIFFNAME) $(EVIMNAME) \
		$(EXNAME) $(VIEWNAME) $(RVIMNAME) $(RVIEWNAME) \
		$(GVIMNAME) $(GVIEWNAME) $(RGVIMNAME) $(RGVIEWNAME) \
		$(GVIMDIFFNAME) $(EVIEWNAME)

installmanlinks:
	-$(SHELL) ./installml.sh install "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN) $(INSTALLMLARGS)

uninstall: uninstall_runtime
	-rm -f $(DEST_BIN)/$(VIMTARGET)
	-rm -f $(DEST_BIN)/vimtutor
	-rm -f $(DEST_BIN)/gvimtutor
	-rm -f $(DEST_BIN)/$(EXTARGET) $(DEST_BIN)/$(VIEWTARGET)
	-rm -f $(DEST_BIN)/$(GVIMTARGET) $(DEST_BIN)/$(GVIEWTARGET)
	-rm -f $(DEST_BIN)/$(RVIMTARGET) $(DEST_BIN)/$(RVIEWTARGET)
	-rm -f $(DEST_BIN)/$(RGVIMTARGET) $(DEST_BIN)/$(RGVIEWTARGET)
	-rm -f $(DEST_BIN)/$(VIMDIFFTARGET) $(DEST_BIN)/$(GVIMDIFFTARGET)
	-rm -f $(DEST_BIN)/$(EVIMTARGET) $(DEST_BIN)/$(EVIEWTARGET)
	-rm -f $(DEST_BIN)/xxd$(EXEEXT)

# Note: the "rmdir" will fail if any files were added after "make install"
uninstall_runtime:
	-$(SHELL) ./installman.sh uninstall $(DEST_MAN) "" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh uninstall $(DEST_MAN_FR) "" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh uninstall $(DEST_MAN_FR_I) "" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh uninstall $(DEST_MAN_FR_U) "" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh uninstall $(DEST_MAN_IT) "" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh uninstall $(DEST_MAN_IT_I) "" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh uninstall $(DEST_MAN_IT_U) "" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh uninstall $(DEST_MAN_JA_U) "" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh uninstall $(DEST_MAN_PL) "" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh uninstall $(DEST_MAN_PL_I) "" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh uninstall $(DEST_MAN_PL_U) "" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh uninstall $(DEST_MAN_RU) "" $(INSTALLMANARGS)
	-$(SHELL) ./installman.sh uninstall $(DEST_MAN_RU_U) "" $(INSTALLMANARGS)
	-$(SHELL) ./installml.sh uninstall "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN) $(INSTALLMLARGS)
	-$(SHELL) ./installml.sh uninstall "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN_FR) $(INSTALLMLARGS)
	-$(SHELL) ./installml.sh uninstall "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN_FR_I) $(INSTALLMLARGS)
	-$(SHELL) ./installml.sh uninstall "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN_FR_U) $(INSTALLMLARGS)
	-$(SHELL) ./installml.sh uninstall "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN_IT) $(INSTALLMLARGS)
	-$(SHELL) ./installml.sh uninstall "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN_IT_I) $(INSTALLMLARGS)
	-$(SHELL) ./installml.sh uninstall "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN_IT_U) $(INSTALLMLARGS)
	-$(SHELL) ./installml.sh uninstall "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN_JA_U) $(INSTALLMLARGS)
	-$(SHELL) ./installml.sh uninstall "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN_PL) $(INSTALLMLARGS)
	-$(SHELL) ./installml.sh uninstall "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN_PL_I) $(INSTALLMLARGS)
	-$(SHELL) ./installml.sh uninstall "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN_PL_U) $(INSTALLMLARGS)
	-$(SHELL) ./installml.sh uninstall "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN_RU) $(INSTALLMLARGS)
	-$(SHELL) ./installml.sh uninstall "$(GUI_MAN_TARGETS)" \
		$(DEST_MAN_RU_U) $(INSTALLMLARGS)
	-rm -f $(DEST_MAN)/xxd.1
	-rm -f $(DEST_MAN_FR)/xxd.1 $(DEST_MAN_FR_I)/xxd.1 $(DEST_MAN_FR_U)/xxd.1
	-rm -f $(DEST_MAN_IT)/xxd.1 $(DEST_MAN_IT_I)/xxd.1 $(DEST_MAN_IT_U)/xxd.1
	-rm -f $(DEST_MAN_JA_U)/xxd.1
	-rm -f $(DEST_MAN_PL)/xxd.1 $(DEST_MAN_PL_I)/xxd.1 $(DEST_MAN_PL_U)/xxd.1
	-rm -f $(DEST_MAN_RU)/xxd.1 $(DEST_MAN_RU_U)/xxd.1
	-rm -f $(DEST_HELP)/*.txt $(DEST_HELP)/tags $(DEST_HELP)/*.pl
	-rm -f $(DEST_HELP)/*.??x $(DEST_HELP)/tags-??
	-rm -f $(SYS_MENU_FILE) $(SYS_SYNMENU_FILE) $(SYS_DELMENU_FILE)
	-rm -f $(SYS_BUGR_FILE) $(EVIM_FILE) $(MSWIN_FILE)
	-rm -f $(DEST_SCRIPT)/gvimrc_example.vim $(DEST_SCRIPT)/vimrc_example.vim
	-rm -f $(SYS_FILETYPE_FILE) $(SYS_FTOFF_FILE) $(SYS_SCRIPTS_FILE)
	-rm -f $(SYS_INDOFF_FILE) $(SYS_INDENT_FILE)
	-rm -f $(SYS_FTPLUGOF_FILE) $(SYS_FTPLUGIN_FILE)
	-rm -f $(SYS_OPTWIN_FILE)
	-rm -f $(DEST_COL)/*.vim $(DEST_COL)/README.txt
	-rm -f $(DEST_SYN)/*.vim $(DEST_SYN)/README.txt
	-rm -f $(DEST_IND)/*.vim $(DEST_IND)/README.txt
	-rm -rf $(DEST_MACRO)
	-rm -rf $(DEST_TUTOR)
	-rm -rf $(DEST_SPELL)
	-rm -rf $(DEST_TOOLS)
	-rm -rf $(DEST_LANG)
	-rm -rf $(DEST_KMAP)
	-rm -rf $(DEST_COMP)
	-rm -f $(DEST_PRINT)/*.ps
	-rmdir $(DEST_HELP) $(DEST_PRINT) $(DEST_COL) $(DEST_SYN) $(DEST_IND)
	-rm -rf $(DEST_FTP)/*.vim $(DEST_FTP)/README.txt $(DEST_FTP)/logtalk.dict
	-rm -f $(DEST_AUTO)/*.vim $(DEST_AUTO)/README.txt $(DEST_AUTO)/xml/*.vim
	-rm -f $(DEST_PLUG)/*.vim $(DEST_PLUG)/README.txt
	-rmdir $(DEST_FTP) $(DEST_AUTO)/xml $(DEST_AUTO) $(DEST_PLUG) $(DEST_RT)
#	This will fail when other Vim versions are installed, no worries.
	-rmdir $(DEST_VIM)

# Clean up all the files that have been produced, except configure's.
# We support common typing mistakes for Juergen! :-)
clean:
	-rm -f *.o objects/* core $(VIMTARGET).core $(VIMTARGET) vim xxd/*.o
	-rm -f $(TOOLS) auto/osdef.h auto/pathdef.c
	-rm -f conftest* *~ auto/link.sed
	-rm -f $(UNITTEST_TARGETS)
	-rm -f runtime pixmaps
	-rm -rf $(APPDIR)
	-rm -rf mzscheme_base.c
	if test -d $(PODIR); then \
		cd $(PODIR); $(MAKE) prefix=$(DESTDIR)$(prefix) clean; \
	fi

# Make a shadow directory for compilation on another system or with different
# features.
SHADOWDIR = shadow

shadow:	runtime pixmaps
	mkdir $(SHADOWDIR)
	cd $(SHADOWDIR); ln -s ../*.[ch] ../*.in ../*.sh ../*.xs ../*.xbm ../toolcheck ../proto ../vimtutor ../gvimtutor ../mkinstalldirs .
	mkdir $(SHADOWDIR)/auto
	cd $(SHADOWDIR)/auto; ln -s ../../auto/configure .
	mkdir $(SHADOWDIR)/po
	cd $(SHADOWDIR)/po; ln -s ../../po/*.po ../../po/*.mak ../../po/*.vim ../../po/Makefile .
	cd $(SHADOWDIR); rm -f auto/link.sed
	cp Makefile configure $(SHADOWDIR)
	rm -f $(SHADOWDIR)/auto/config.mk $(SHADOWDIR)/config.mk.dist
	cp config.mk.dist $(SHADOWDIR)/auto/config.mk
	cp config.mk.dist $(SHADOWDIR)
	mkdir $(SHADOWDIR)/xxd
	cd $(SHADOWDIR)/xxd; ln -s ../../xxd/*.[ch] ../../xxd/Make* .
	if test -d $(RSRC_DIR); then \
		cd $(SHADOWDIR); \
		ln -s ../infplist.xml .; \
		ln -s ../$(RSRC_DIR) ../os_mac.rsr.hqx ../dehqx.py .; \
	fi

# Link needed for doing "make install" in a shadow directory.
runtime:
	-ln -s ../runtime .

# Link needed for doing "make" using GTK in a shadow directory.
pixmaps:
	-ln -s ../pixmaps .

# Update the synmenu.vim file with the latest Syntax menu.
# This is only needed when runtime/makemenu.vim was changed.
menu: ./vim ../runtime/makemenu.vim
	./vim -u ../runtime/makemenu.vim

# Start configure from scratch
scrub scratch:
	-rm -f auto/config.status auto/config.cache config.log auto/config.log
	-rm -f auto/config.h auto/link.log auto/link.sed auto/config.mk
	touch auto/config.h
	cp config.mk.dist auto/config.mk

distclean: clean scratch
	-rm -f tags

dist: distclean
	@echo
	@echo Making the distribution has to be done in the top directory

mdepend:
	-@rm -f Makefile~
	cp Makefile Makefile~
	sed -e '/\#\#\# Dependencies/q' < Makefile > tmp_make
	@for i in $(ALL_SRC) ; do \
	  echo "$$i" ; \
	  echo `echo "$$i" | sed -e 's/[^ ]*\.c$$/objects\/\1.o/'`": $$i" `\
	    $(CPP) $$i |\
	    grep '^# .*"\./.*\.h"' |\
	    sort -t'"' -u +1 -2 |\
	    sed -e 's/.*"\.\/\(.*\)".*/\1/'\
	    ` >> tmp_make ; \
	done
	mv tmp_make Makefile

depend:
	-@rm -f Makefile~
	cp Makefile Makefile~
	sed -e '/\#\#\# Dependencies/q' < Makefile > tmp_make
	-for i in $(ALL_SRC); do echo $$i; \
		$(CPP_DEPEND) $$i | \
		sed -e 's+^\([^ ]*\.o\)+objects/\1+' >> tmp_make; done
	mv tmp_make Makefile

# Run lint.  Clean up the *.ln files that are sometimes left behind.
lint:
	$(LINT) $(LINT_OPTIONS) $(LINT_CFLAGS) $(LINT_EXTRA) $(LINT_SRC)
	-rm -f *.ln

# Check dosinst.c with lint.
lintinstall:
	$(LINT) $(LINT_OPTIONS) -DWIN32 -DUNIX_LINT dosinst.c
	-rm -f dosinst.ln

###########################################################################

.c.o:
	$(CCC) $<

auto/osdef.h: auto/config.h osdef.sh osdef1.h.in osdef2.h.in
	CC="$(CC) $(OSDEF_CFLAGS)" srcdir=$(srcdir) sh $(srcdir)/osdef.sh

auto/pathdef.c: Makefile auto/config.mk
	-@echo creating $@
	-@echo '/* pathdef.c */' > $@
	-@echo '/* This file is automatically created by Makefile' >> $@
	-@echo ' * DO NOT EDIT!  Change Makefile only. */' >> $@
	-@echo '#include "vim.h"' >> $@
	-@echo 'char_u *default_vim_dir = (char_u *)"$(VIMRCLOC)";' | $(QUOTESED) >> $@
	-@echo 'char_u *default_vimruntime_dir = (char_u *)"$(VIMRUNTIMEDIR)";' | $(QUOTESED) >> $@
	-@echo 'char_u *all_cflags = (char_u *)"$(CC) -c -I$(srcdir) $(ALL_CFLAGS)";' | $(QUOTESED) >>  $@
	-@echo 'char_u *all_lflags = (char_u *)"$(CC) $(ALL_LIB_DIRS) $(LDFLAGS) -o $(VIMTARGET) $(ALL_LIBS) ";' | $(QUOTESED) >>  $@
	-@echo 'char_u *compiled_user = (char_u *)"' | tr -d $(NL) >> $@
	-@if test -n "$(COMPILEDBY)"; then \
		echo "$(COMPILEDBY)" | tr -d $(NL) >> $@; \
		else ((logname) 2>/dev/null || whoami) | tr -d $(NL) >> $@; fi
	-@echo '";' >> $@
	-@echo 'char_u *compiled_sys = (char_u *)"' | tr -d $(NL) >> $@
	-@if test -z "$(COMPILEDBY)"; then hostname | tr -d $(NL) >> $@; fi
	-@echo '";' >> $@
	-@sh $(srcdir)/pathdef.sh

# All the object files are put in the "objects" directory.  Since not all make
# commands understand putting object files in another directory, it must be
# specified for each file separately.

objects:
	mkdir objects

objects/buffer.o: buffer.c
	$(CCC) -o $@ buffer.c

objects/charset.o: charset.c
	$(CCC) -o $@ charset.c

objects/diff.o: diff.c
	$(CCC) -o $@ diff.c

objects/digraph.o: digraph.c
	$(CCC) -o $@ digraph.c

objects/edit.o: edit.c
	$(CCC) -o $@ edit.c

objects/eval.o: eval.c
	$(CCC) -o $@ eval.c

objects/ex_cmds.o: ex_cmds.c
	$(CCC) -o $@ ex_cmds.c

objects/ex_cmds2.o: ex_cmds2.c
	$(CCC) -o $@ ex_cmds2.c

objects/ex_docmd.o: ex_docmd.c
	$(CCC) -o $@ ex_docmd.c

objects/ex_eval.o: ex_eval.c
	$(CCC) -o $@ ex_eval.c

objects/ex_getln.o: ex_getln.c
	$(CCC) -o $@ ex_getln.c

objects/fileio.o: fileio.c
	$(CCC) -o $@ fileio.c

objects/fold.o: fold.c
	$(CCC) -o $@ fold.c

objects/getchar.o: getchar.c
	$(CCC) -o $@ getchar.c

objects/hashtab.o: hashtab.c
	$(CCC) -o $@ hashtab.c

objects/gui.o: gui.c
	$(CCC) -o $@ gui.c

objects/gui_at_fs.o: gui_at_fs.c
	$(CCC) -o $@ gui_at_fs.c

objects/gui_at_sb.o: gui_at_sb.c
	$(CCC) -o $@ gui_at_sb.c

objects/gui_athena.o: gui_athena.c
	$(CCC) -o $@ gui_athena.c

objects/gui_gtk.o: gui_gtk.c
	$(CCC) -o $@ gui_gtk.c

objects/gui_gtk_f.o: gui_gtk_f.c
	$(CCC) -o $@ gui_gtk_f.c

objects/gui_gtk_x11.o: gui_gtk_x11.c
	$(CCC) -o $@ gui_gtk_x11.c

objects/gui_xmdlg.o: gui_xmdlg.c
	$(CCC) -o $@ gui_xmdlg.c

objects/gui_xmebw.o: gui_xmebw.c
	$(CCC) -o $@ gui_xmebw.c

objects/gui_x11.o: gui_x11.c
	$(CCC) -o $@ gui_x11.c

objects/gui_photon.o: gui_photon.c
	$(CCC) -o $@ gui_photon.c

objects/gui_mac.o: gui_mac.c
	$(CCC) -o $@ gui_mac.c

objects/if_xcmdsrv.o: if_xcmdsrv.c
	$(CCC) -o $@ if_xcmdsrv.c

mzscheme_base.c:
	$(MZSCHEME_MZC) --c-mods mzscheme_base.c ++lib scheme/base

objects/py_getpath.o: $(PYTHON_CONFDIR)/getpath.c
	$(CCC) $(PYTHON_CFLAGS) -o $@ $(PYTHON_CONFDIR)/getpath.c \
		-I$(PYTHON_CONFDIR) -DHAVE_CONFIG_H -DNO_MAIN \
		$(PYTHON_GETPATH_CFLAGS)

objects/if_python.o: if_python.c if_py_both.h
	$(CCC) $(PYTHON_CFLAGS) $(PYTHON_CFLAGS_EXTRA) -o $@ if_python.c

objects/main.o: main.c
	$(CCC) -o $@ main.c

objects/mark.o: mark.c
	$(CCC) -o $@ mark.c

objects/memfile.o: memfile.c
	$(CCC) -o $@ memfile.c

objects/memfile_test.o: memfile_test.c
	$(CCC) -o $@ memfile_test.c

objects/memline.o: memline.c
	$(CCC) -o $@ memline.c

objects/menu.o: menu.c
	$(CCC) -o $@ menu.c

objects/message.o: message.c
	$(CCC) -o $@ message.c

objects/misc1.o: misc1.c
	$(CCC) -o $@ misc1.c

objects/misc2.o: misc2.c
	$(CCC) -o $@ misc2.c

objects/move.o: move.c
	$(CCC) -o $@ move.c

objects/mbyte.o: mbyte.c
	$(CCC) -o $@ mbyte.c

objects/normal.o: normal.c
	$(CCC) -o $@ normal.c

objects/ops.o: ops.c
	$(CCC) -o $@ ops.c

objects/option.o: option.c
	$(CCC) -o $@ option.c

objects/os_beos.o: os_beos.c
	$(CCC) -o $@ os_beos.c

objects/os_qnx.o: os_qnx.c
	$(CCC) -o $@ os_qnx.c

objects/os_macosx.o: os_macosx.m
	$(CCC) -o $@ os_macosx.m

objects/os_mac_conv.o: os_mac_conv.c
	$(CCC) -o $@ os_mac_conv.c

objects/os_unix.o: os_unix.c
	$(CCC) -o $@ os_unix.c

objects/os_mswin.o: os_mswin.c
	$(CCC) -o $@ os_mswin.c

objects/winclip.o: winclip.c
	$(CCC) -o $@ winclip.c

objects/pathdef.o: auto/pathdef.c
	$(CCC) -o $@ auto/pathdef.c

objects/pty.o: pty.c
	$(CCC) -o $@ pty.c

objects/popupmnu.o: popupmnu.c
	$(CCC) -o $@ popupmnu.c

objects/quickfix.o: quickfix.c
	$(CCC) -o $@ quickfix.c

objects/regexp.o: regexp.c regexp_nfa.c
	$(CCC) -o $@ regexp.c

objects/screen.o: screen.c
	$(CCC) -o $@ screen.c

objects/search.o: search.c
	$(CCC) -o $@ search.c

objects/sha256.o: sha256.c
	$(CCC) -o $@ sha256.c

objects/spell.o: spell.c
	$(CCC) -o $@ spell.c

objects/syntax.o: syntax.c
	$(CCC) -o $@ syntax.c

objects/tag.o: tag.c
	$(CCC) -o $@ tag.c

objects/term.o: term.c
	$(CCC) -o $@ term.c

objects/ui.o: ui.c
	$(CCC) -o $@ ui.c

objects/undo.o: undo.c
	$(CCC) -o $@ undo.c

objects/window.o: window.c
	$(CCC) -o $@ window.c

objects/wsdebug.o: wsdebug.c
	$(CCC) -o $@ wsdebug.c

Makefile:
	@echo The name of the makefile MUST be "Makefile" (with capital M)!!!!

###############################################################################
### MacOS X installation
###
### This installs a runnable Vim.app in $(prefix)

REZ    = /Developer/Tools/Rez
RESDIR = $(APPDIR)/Contents/Resources
VERSION = $(VIMMAJOR).$(VIMMINOR)

### Common flags
M4FLAGSX = $(M4FLAGS) -DAPP_EXE=$(VIMNAME) -DAPP_NAME=$(VIMNAME) \
		-DAPP_VER=$(VERSION)

install_macosx: gui_bundle
# Remove the link to the runtime dir, don't want to copy all of that.
	-rm $(RESDIR)/vim/runtime
	$(INSTALL_DATA_R) $(APPDIR) $(DESTDIR)$(prefix)
# Generate the help tags file now, it won't work with "make installruntime".
	-@srcdir=`pwd`; cd $(HELPSOURCE); $(MAKE) VIMEXE=$$srcdir/$(VIMTARGET) vimtags
# Install the runtime files.  Recursive!
	-mkdir -p $(DESTDIR)$(prefix)/$(RESDIR)/vim/runtime
#	-mkdir $(DESTDIR)$(prefix)/$(APPDIR)/bin
	srcdir=`pwd`; $(MAKE) -f Makefile installruntime \
		VIMEXE=$$srcdir/$(VIMTARGET) \
		prefix=$(DESTDIR)$(prefix)/$(RESDIR)$(VIMDIR) \
		exec_prefix=$(DESTDIR)$(prefix)/$(APPDIR)/Contents \
		BINDIR=$(DESTDIR)$(prefix)/$(APPDIR)/Contents/MacOS \
		VIMLOC=$(DESTDIR)$(prefix)/$(RESDIR)$(VIMDIR) \
		VIMRTLOC=$(DESTDIR)$(prefix)/$(RESDIR)$(VIMDIR)/runtime
# Put the link back.
	ln -s `pwd`/../runtime $(RESDIR)/vim
# Copy rgb.txt, Mac doesn't always have X11
	$(INSTALL_DATA) $(SCRIPTSOURCE)/rgb.txt $(DESTDIR)$(prefix)/$(RESDIR)/vim/runtime
# TODO: Create the vimtutor and/or gvimtutor application.

gui_bundle: $(RESDIR) bundle-dir bundle-executable bundle-info bundle-resource \
	bundle-language

$(RESDIR):
	mkdir -p $@

bundle-dir: $(APPDIR)/Contents $(VIMTARGET)
# Make a link to the runtime directory, so that we can try out the executable
# without installing it.
	mkdir -p $(RESDIR)/vim
	-ln -s `pwd`/../runtime $(RESDIR)/vim

bundle-executable: $(VIMTARGET)
	mkdir -p $(APPDIR)/Contents/MacOS
	cp $(VIMTARGET) $(APPDIR)/Contents/MacOS/$(VIMTARGET)

bundle-info:  bundle-dir
	@echo "Creating PkgInfo"
	@echo -n "APPLVIM!" > $(APPDIR)/Contents/PkgInfo
	@echo "Creating Info.plist"
	m4 $(M4FLAGSX) infplist.xml > $(APPDIR)/Contents/Info.plist

bundle-resource: bundle-dir bundle-rsrc
	cp -f $(RSRC_DIR)/*.icns $(RESDIR)

### Classic resources
# Resource fork (in the form of a .rsrc file) for Classic Vim (Mac OS 9)
# This file is also required for OS X Vim.
bundle-rsrc: os_mac.rsr.hqx
	@echo "Creating resource fork"
	python dehqx.py $<
	rm -f gui_mac.rsrc
	mv gui_mac.rsrc.rsrcfork $(RESDIR)/$(VIMNAME).rsrc

# po/Make_osx.pl says something about generating a Mac message file
# for Ukrainian.  Would somebody using Mac OS X in Ukrainian
# *really* be upset that Carbon Vim was not localised in
# Ukrainian?
#
#bundle-language: bundle-dir po/Make_osx.pl
#	cd po && perl Make_osx.pl --outdir ../$(RESDIR) $(MULTILANG)
bundle-language: bundle-dir

$(APPDIR)/Contents:
	-$(SHELL) ./mkinstalldirs $(APPDIR)/Contents/MacOS
	-$(SHELL) ./mkinstalldirs $(RESDIR)/English.lproj


###############################################################################
### (automatically generated by 'make depend')
### Dependencies:
objects/buffer.o: buffer.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h version.h
objects/charset.o: charset.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/diff.o: diff.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/digraph.o: digraph.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/edit.o: edit.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/eval.o: eval.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h version.h
objects/ex_cmds.o: ex_cmds.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h version.h
objects/ex_cmds2.o: ex_cmds2.c vim.h auto/config.h feature.h os_unix.h \
 auto/osdef.h ascii.h keymap.h term.h macros.h option.h structs.h \
 regexp.h gui.h ex_cmds.h proto.h globals.h version.h
objects/ex_docmd.o: ex_docmd.c vim.h auto/config.h feature.h os_unix.h \
 auto/osdef.h ascii.h keymap.h term.h macros.h option.h structs.h \
 regexp.h gui.h ex_cmds.h proto.h globals.h
objects/ex_eval.o: ex_eval.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/ex_getln.o: ex_getln.c vim.h auto/config.h feature.h os_unix.h \
 auto/osdef.h ascii.h keymap.h term.h macros.h option.h structs.h \
 regexp.h gui.h ex_cmds.h proto.h globals.h
objects/fileio.o: fileio.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/fold.o: fold.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/getchar.o: getchar.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/hashtab.o: hashtab.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/if_xcmdsrv.o: if_xcmdsrv.c vim.h auto/config.h feature.h os_unix.h \
 auto/osdef.h ascii.h keymap.h term.h macros.h option.h structs.h \
 regexp.h gui.h ex_cmds.h proto.h globals.h version.h
objects/main.o: main.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/mark.o: mark.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/memfile.o: memfile.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/memline.o: memline.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/menu.o: menu.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/message.o: message.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/misc1.o: misc1.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h version.h
objects/misc2.o: misc2.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/move.o: move.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/mbyte.o: mbyte.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/normal.o: normal.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/ops.o: ops.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h ascii.h \
 keymap.h term.h macros.h option.h structs.h regexp.h gui.h ex_cmds.h \
 proto.h globals.h
objects/option.o: option.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/os_unix.o: os_unix.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h os_unixx.h
objects/pathdef.o: auto/pathdef.c vim.h auto/config.h feature.h os_unix.h \
 auto/osdef.h ascii.h keymap.h term.h macros.h option.h structs.h \
 regexp.h gui.h ex_cmds.h proto.h globals.h
objects/popupmnu.o: popupmnu.c vim.h auto/config.h feature.h os_unix.h \
 auto/osdef.h ascii.h keymap.h term.h macros.h option.h structs.h \
 regexp.h gui.h ex_cmds.h proto.h globals.h
objects/quickfix.o: quickfix.c vim.h auto/config.h feature.h os_unix.h \
 auto/osdef.h ascii.h keymap.h term.h macros.h option.h structs.h \
 regexp.h gui.h ex_cmds.h proto.h globals.h
objects/regexp.o: regexp.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h regexp_nfa.c
objects/screen.o: screen.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/search.o: search.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/sha256.o: sha256.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/spell.o: spell.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/syntax.o: syntax.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/tag.o: tag.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h ascii.h \
 keymap.h term.h macros.h option.h structs.h regexp.h gui.h ex_cmds.h \
 proto.h globals.h
objects/term.o: term.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/ui.o: ui.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h ascii.h \
 keymap.h term.h macros.h option.h structs.h regexp.h gui.h ex_cmds.h \
 proto.h globals.h
objects/undo.o: undo.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/version.o: version.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h version.h
objects/window.o: window.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h
objects/gui.o: gui.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h ascii.h \
 keymap.h term.h macros.h option.h structs.h regexp.h gui.h ex_cmds.h \
 proto.h globals.h
objects/gui_gtk.o: gui_gtk.c gui_gtk_f.h vim.h auto/config.h feature.h os_unix.h \
 auto/osdef.h ascii.h keymap.h term.h macros.h option.h structs.h \
 regexp.h gui.h ex_cmds.h proto.h globals.h ../pixmaps/stock_icons.h
objects/gui_gtk_f.o: gui_gtk_f.c vim.h auto/config.h feature.h os_unix.h \
 auto/osdef.h ascii.h keymap.h term.h macros.h option.h structs.h \
 regexp.h gui.h ex_cmds.h proto.h globals.h gui_gtk_f.h
objects/gui_gtk_x11.o: gui_gtk_x11.c vim.h auto/config.h feature.h os_unix.h \
 auto/osdef.h ascii.h keymap.h term.h macros.h option.h structs.h \
 regexp.h gui.h ex_cmds.h proto.h globals.h gui_gtk_f.h \
 ../runtime/vim32x32.xpm ../runtime/vim16x16.xpm ../runtime/vim48x48.xpm
objects/gui_x11.o: gui_x11.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h \
 ascii.h keymap.h term.h macros.h option.h structs.h regexp.h gui.h \
 ex_cmds.h proto.h globals.h ../runtime/vim32x32.xpm \
 ../runtime/vim16x16.xpm ../runtime/vim48x48.xpm
objects/pty.o: pty.c vim.h auto/config.h feature.h os_unix.h auto/osdef.h ascii.h \
 keymap.h term.h macros.h option.h structs.h regexp.h gui.h ex_cmds.h \
 proto.h globals.h
objects/memfile_test.o: memfile_test.c main.c vim.h auto/config.h feature.h \
 os_unix.h auto/osdef.h ascii.h keymap.h term.h macros.h option.h \
 structs.h regexp.h gui.h ex_cmds.h proto.h globals.h memfile.c
objects/if_python.o: if_python.c vim.h auto/config.h feature.h os_unix.h \
 auto/osdef.h ascii.h keymap.h term.h macros.h option.h structs.h \
 regexp.h gui.h ex_cmds.h proto.h globals.h if_py_both.h
objects/vim_python.o: vim_python.c vim.h auto/config.h feature.h os_unix.h \
 auto/osdef.h ascii.h keymap.h term.h macros.h option.h structs.h \
 regexp.h gui.h ex_cmds.h proto.h globals.h
objects/wsdebug.o: wsdebug.c
