#############################################################################
#                                                                           #
# The make process relies on the creation of DLL and library response file  #
# creation.  To control the location of object modules the following should #
# be defined:                                                               #
#                                                                           #
#     IMPOBJS - A list of object modules that should appear in the DLL      #
#               import library.                                             #
#                                                                           #
#        OBJS - If a DLL is build, this is a list of the object modules     #
#               that are linked into the DLL.  If building a library, this  #
#               is the list of object modules that goes into the library.   #
#                                                                           #
# The building of miscellaneous object modules and libraries is controlled  #
# by the list of files in the MISC variable.                                #
#                                                                           #
# $Revision:   9.4  $                                                                #
#                                                                           #
#############################################################################

#############################################################################
# Build the object module lists.                                            #
#############################################################################
OBJS =               \
        __access.obj \
        __close.obj  \
        __dup.obj    \
        __dup2.obj   \
        __eof.obj    \
        __ftrunc.obj \
        __isatty.obj \
        __lseek.obj  \
        __open.obj   \
        __read.obj   \
        __wopen.obj  \
        __wread.obj  \
        __write.obj  \
        _cfinfo.obj  \
        _chmod.obj   \
        _close.obj   \
        _commit.obj  \
        _creat.obj   \
        _fclosal.obj \
        _fdopen.obj  \
        _fgetchr.obj \
        _fileno.obj  \
        _flshall.obj \
        _fputc.obj   \
        _fputchr.obj \
        _fputwc.obj  \
        _fsopen.obj  \
        _getw.obj    \
        _mkdir.obj   \
        _mktemp.obj  \
        _open.obj    \
        _pipe.obj    \
        _popen.obj   \
        _putw.obj    \
        _read.obj    \
        _rmdir.obj   \
        _rmtmp.obj   \
        _sopen.obj   \
        _stat.obj    \
        _tempnam.obj \
        _umask.obj   \
        _unlink.obj  \
        _utime.obj   \
        _waccess.obj \
        _wchmod.obj  \
        _wcreat.obj  \
        _wfdopen.obj \
        _wfsopen.obj \
        _wopen.obj   \
        _wpopen.obj  \
        _write.obj   \
        access.obj   \
        allocbuf.obj \
        cfinfo.obj   \
        chdir.obj    \
        chdrive.obj  \
        chmod.obj    \
        chsize.obj   \
        clearerr.obj \
        close.obj    \
        closeall.obj \
        creat.obj    \
        createmp.obj \
        creatnew.obj \
        direct.obj   \
        dosclose.obj \
        doscreat.obj \
        dosdfree.obj \
        dosfattr.obj \
        dosfind.obj  \
        dosgdriv.obj \
        dosgftim.obj \
        dosopen.obj  \
        dosread.obj  \
        dossftim.obj \
        doswrite.obj \
        dup.obj      \
        dup2.obj     \
        eof.obj      \
        fclose.obj   \
        fdopen.obj   \
        ffile.obj    \
        ffile64.obj  \
        fflush.obj   \
        fgetchar.obj \
        fgetpos.obj  \
        fgets.obj    \
        fgetwchr.obj \
        fgetws.obj   \
        files.obj    \
        files2.obj   \
        findfrst.obj \
        flength.obj  \
        flushall.obj \
        flushout.obj \
        fmode.obj    \
        fmodeptr.obj \
        fnmerge.obj  \
        fnsplit.obj  \
        fopen.obj    \
        fprintf.obj  \
        fprintfw.obj \
        fputchar.obj \
        fputn.obj    \
        fputnw.obj   \
        fputs.obj    \
        fputwchr.obj \
        fputws.obj   \
        fread.obj    \
        freopen.obj  \
        fscanf.obj   \
        fscanfw.obj  \
        fseek.obj    \
        fsetpos.obj  \
        fstat.obj    \
        ftruncat.obj \
        fullpath.obj \
        fwrite.obj   \
        getcurdi.obj \
        getcwd.obj   \
        getdcwd.obj  \
        getdfree.obj \
        getdisk.obj  \
        getftime.obj \
        gets.obj     \
        getw.obj     \
        getws.obj    \
        handles.obj  \
        ioerror.obj  \
        iomacro.obj  \
        isatty.obj   \
        lgetc.obj    \
        lgetwc.obj   \
        lock.obj     \
        locking.obj  \
        lputc.obj    \
        lputwc.obj   \
        lseek.obj    \
        makepath.obj \
        mkdir.obj    \
        mkname.obj   \
        mktemp.obj   \
        open.obj     \
        oshandle.obj \
        perror.obj   \
        printf.obj   \
        printfw.obj  \
        puts.obj     \
        putw.obj     \
        putws.obj    \
        read.obj     \
        remove.obj   \
        rename.obj   \
        rewind.obj   \
        rmdir.obj    \
        rmtmp.obj    \
        scanf.obj    \
        scanfw.obj   \
        scanner.obj  \
        scannerw.obj \
        scantol.obj  \
        scanwtol.obj \
        scn2i64.obj  \
        scn2i64w.obj \
        setbuf.obj   \
        setftime.obj \
        setmode.obj  \
        setvbuf.obj  \
        snprntf.obj  \
        snprntfw.obj \
        sopen.obj    \
        splitpth.obj \
        sprintf.obj  \
        sprintfw.obj \
        sscanf.obj   \
        sscanfw.obj  \
        stat.obj     \
        stati64.obj  \
        streams.obj  \
        tell.obj     \
        tempnam.obj  \
        tmpfile.obj  \
        tmpnam.obj   \
        umask.obj    \
        ungetc.obj   \
        ungetwc.obj  \
        unlink.obj   \
        utime.obj    \
        vfprintf.obj \
        vfprntfw.obj \
        vfscanf.obj  \
        vfscanfw.obj \
        vprinter.obj \
        vprintf.obj  \
        vprintfw.obj \
        vprintrw.obj \
        vscanf.obj   \
        vscanfw.obj  \
        wchdir.obj   \
        wchmod.obj   \
        wcreat.obj   \
        wdirect.obj  \
        wdscreat.obj \
        wffile.obj   \
        wffile64.obj \
        wfndfrst.obj \
        wfnmerge.obj \
        wfopen.obj   \
        wfreopen.obj \
        wfullpth.obj \
        wgetcurd.obj \
        wgetcwd.obj  \
        wgetdcwd.obj \
        wiomacro.obj \
        wmakepth.obj \
        wmkdir.obj   \
        wmkname.obj  \
        wmktemp.obj  \
        wperror.obj  \
        wrename.obj  \
        write.obj    \
        wrmdir.obj   \
        wsopen.obj   \
        wspltpth.obj \
        wstat.obj    \
        wstati64.obj \
        wtempnam.obj \
        wtmpnam.obj  \
        wunlink.obj  \
        wutime.obj   \
        xfclose.obj  \
        xfflush.obj


!if $d(MT)
    OBJS = $(OBJS)      \
           fgetc.obj    \
           fgetwc.obj   \
           fputc.obj    \
           fputwc.obj
!endif

!if $d(DLL)
    IMPOBJS =              \
              fmode.obj    \
              cfinfo.obj
!else
    MISC    = $(LIBDIR)\fileinfo.obj
!endif

#############################################################################
# Configure the environment appropriately.                                  #
#############################################################################
TASMCFG = 1        # Force tasm.cfg creation

!include rules.mak

#############################################################################
# MISC explicit rules.                                                      #
#############################################################################
$(LIBDIR)\fileinfo.obj : fileinfo.obj
    copy $** $(LIBDIR)\$.

# Special rules for wide-char versions so that they depend on the dual-mode
# source code in the non-w files

__wopen.obj  : __open.c
__wread.obj  : __read.c
_waccess.obj : __access.c
_wchmod.obj  : _chmod.c
_wcreat.obj  : _creat.c
_wfdopen.obj : _fdopen.c
_wfsopen.obj : _fsopen.c
_wopen.obj   : _open.c
_wpopen.obj  : _popen.c
_wunlnk.obj  : unlink.c
fgetwc.obj   : fgetc.c
fgetwchr.obj : fgetchar.c
fgetws.obj   : fgets.c
fprintfw.obj : fprintf.c
fputnw.obj   : fputn.c
fputwc.obj   : fputc.c
fputwchr.obj : fputchar.c
fputws.obj   : fputs.c
fscanfw.obj  : fscanf.c
getws.obj    : gets.c
lgetwc.obj   : lgetc.c
lputwc.obj   : lputc.c
printfw.obj  : printf.c
putws.obj    : puts.c
scanfw.obj   : scanf.c
scannerw.obj : scanner.c
scanwtol.obj : scantol.c
sprintfw.obj : sprintf.c
snprntfw.obj : snprntf.c
sscanfw.obj  : sscanf.c
ungetwc.obj  : ungetc.c
vfprntfw.obj : vfprintf.c
vfscanfw.obj : vfscanf.c
vprintfw.obj : vprintf.c
vprintrw.obj : vprinter.c
vscanfw.obj  : vscanf.c
wchdir.obj   : chdir.c
wchmod.obj   : chmod.c
wcreat.obj   : creat.c
wdscreat.obj : doscreat.c
wfndfrst.obj : findfrst.c
wfnmerge.obj : fnmerge.c
wfopen.obj   : fopen.c
wfreopen.obj : freopen.c
wfullpth.obj : fullpath.c
wgetcurd.obj : getcurdi.c
wgetcwd.obj  : getcwd.c
wgetdcwd.obj : getdcwd.c
wiomacro.obj : iomacro.c
wmakepth.obj : makepath.c
wmkdir.obj   : mkdir.c
wmkname.obj  : mkname.c
wmktemp.obj  : mktemp.c
wperror.obj  : perror.c
wrename.obj  : rename.c
wrmdir.obj   : rmdir.c
wspltpth.obj : splitpth.c
wstat.obj    : stat.c
wtempnam.obj : tempnam.c
wtmpnam.obj  : tmpnam.c
wutime.obj   : utime.c
wffile.obj   : ffile.c
ffile64.obj  : ffile.c
wffile64.obj : ffile.c
