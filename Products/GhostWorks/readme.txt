========================================================================
       MICROSOFT FOUNDATION CLASS LIBRARY : GhostWorks
========================================================================


AppWizard has created this Example DLL for you.  This DLL not only
demonstrates the basics of using the Microsoft Foundation classes but
is also a starting point for writing your DLL.

This file contains a summary of what you will find in each of the files that
make up your Example DLL.

GhostWorks.cpp
    This is the main DLL source file that contains the definition of
	DllMain().


GhostWorks.rc
    This is a listing of all of the Microsoft Windows resources that the
    program uses.  It includes the icons, bitmaps, and cursors that are stored
    in the RES subdirectory.  This file can be directly edited in Microsoft
	Developer Studio.

res\GhostWorks.rc2
    This file contains resources that are not edited by Microsoft 
	Developer Studio.  You should place all resources not
	editable by the resource editor in this file.

GhostWorks.def
    This file contains information about the DLL that must be
    provided to run with Microsoft Windows.  It defines parameters
    such as the name and description of the DLL.  It also exports
	functions from the DLL.

GhostWorks.clw
    This file contains information used by ClassWizard to edit existing
    classes or add new classes.  ClassWizard also uses this file to store
    information needed to create and edit message maps and dialog data
    maps and to create prototype member functions.

/////////////////////////////////////////////////////////////////////////////
Other standard files:

StdAfx.h, StdAfx.cpp
    These files are used to build a precompiled header (PCH) file
    named GhostWorks.pch and a precompiled types file named StdAfx.obj.

Resource.h
    This is the standard header file, which defines new resource IDs.
    Microsoft Developer Studio reads and updates this file.

/////////////////////////////////////////////////////////////////////////////
Other notes:

AppWizard uses "TODO:" to indicate parts of the source code you
should add to or customize.

/////////////////////////////////////////////////////////////////////////////

This Application Wizard will create an application framework for
a well behaved SolidWorks Add-In Application.

This Add-In will create a single menu item and Save-As item for each
SolidWorks document type and will respond to notifications from
SolidWorks that the active document has changed.

A registry file (.reg) has also been created in your project directory,
review this to see the registry entries for your Add-In.

***** NOTE *****

The active configuration will be set to Win32 DEBUG.  You should change
the active configuration to Win32 RELEASE before building.

/////////////////////////////////////////////////////////////////////////////
