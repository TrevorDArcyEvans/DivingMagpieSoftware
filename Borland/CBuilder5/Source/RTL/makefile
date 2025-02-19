#############################################################################
# This makefile is used as the driver to build the chosen RTL flavor.  For  #
# appropriate command line switches and environment variables, see          #
# rules.mak                                                                 #
#############################################################################
RTLSOURCE = 1
!include rules.mak

#############################################################################
# Build the command line.  NOTE: The code here is based on rules.mak.  If   #
# rules.mak is enhanced or modified, make the results must be reflected     #
# here as well!!!                                                           #
#############################################################################
CMDLINE = -l TARGET_OS=$(TARGET_OS) -DMBCS

!if $d(DEBUG)
    CMDLINE = $(CMDLINE) -DDEBUG
!endif

!if $d(DLL)
    CMDLINE = $(CMDLINE) -DDLL
!endif

!if $d(MT)
    CMDLINE = $(CMDLINE) -DMT
!endif

!if $d(MAGIC)
    CMDLINE = $(CMDLINE) -DMAGIC
!endif

!if $d(PCH)
    CMDLINE = $(CMDLINE) -DPCH
!endif

!if $d(MAKEFLAGS)
    CMDLINE = $(CMDLINE) -$(MAKEFLAGS)
!endif

!if $d(RTLSOURCE)
    CMDLINE = $(CMDLINE) -DRTLSOURCE=1
!endif

!if $d(RTL_FORCE_FULL_REBUILD)
    CMDLINE = -B $(CMDLINE)
!endif

#############################################################################
# What needs to be built.                                                   #
#############################################################################
all : createdir start srcdirs builddir end

createdir:
  @if not exist $(PSDKDIR) mkdir $(PSDKDIR)
  @if not exist $(RTLROOT)\obj mkdir $(RTLROOT)\obj
  @if not exist $(RTLROOT)\obj\win32 mkdir $(RTLROOT)\obj\win32
  @if not exist $(RTLROOT)\obj\win32\obj mkdir $(RTLROOT)\obj\win32\obj
  @if not exist $(RTLROOT)\obj\win32\objx mkdir $(RTLROOT)\obj\win32\objx
  @if not exist $(RTLROOT)\obj\win32\objmt mkdir $(RTLROOT)\obj\win32\objmt
  @if not exist $(RTLROOT)\obj\win32\objmtx mkdir $(RTLROOT)\obj\win32\objmtx
  @if not exist $(RTLROOT)\obj\win32\objmgmt mkdir $(RTLROOT)\obj\win32\objmgmt
  @if not exist $(RTLROOT)\obj\win32\objmgmtx mkdir $(RTLROOT)\obj\win32\objmgmtx

srcdirs : $(SRCDIRS)

BUILDDIR = $(LIBDIR)

builddir : $(BUILDDIR)

#############################################################################
# For each source directory build whatever is necessary.                    #
#############################################################################
$(SRCDIRS) :
    @echo.
    @echo [*************** $* ***************]
    @echo.
    &cd $*
    $(MAKE) -I$(RTLROOT) $(CMDLINE) objs

$(BUILDDIR) :
    @echo.
    @echo [*************** $* ***************]
    @echo.
    cd $*
!if $d(DLL)
     $(MAKE) -I$(RTLROOT) $(CMDLINE) dll
!else
     $(MAKE) -I$(RTLROOT) $(CMDLINE) lib
!endif

#############################################################################
# Do whatever is necessary at the start and end of the build.               #
#############################################################################
start :
    @echo.
    @echo [***************** Borland C++Builder Run Time Libary *****************]
    @echo.
!if $d(DLL)
    if exist $(LIBDIR)\dll.rsp del $(LIBDIR)\dll.rsp
    echo $(LIBDIR)\\\\$(DLLC0)+ > $(LIBDIR)\dll.rsp
    if exist $(LIBDIR)\import.rsp del $(LIBDIR)\import.rsp
!else
    if exist $(LIBDIR)\tlib.rsp del $(LIBDIR)\tlib.rsp
!endif

end :
    cd $(RTLROOT)
!if $d(DLL)
    if exist $(LIBDIR)\dll.rsp del $(LIBDIR)\dll.rsp
    if exist $(LIBDIR)\import.rsp del $(LIBDIR)\import.rsp
!else
    if exist $(LIBDIR)\tlib.rsp del $(LIBDIR)\tlib.rsp
!endif


