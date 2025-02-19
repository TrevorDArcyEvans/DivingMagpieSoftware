//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "DMS_Comm_ATL.h"

#pragma option -w-aus		// Var. assigned value never used

#ifdef _ATL_STATIC_REGISTRY
#include <statreg.h>
#include <statreg.cpp>
#endif

#include <atl\atlimpl.cpp>
#include <atl\atlctl.cpp>

#if defined(USING_ATLVCL)
#include <atl\atlvcl.cpp>
#else
#include <atl\atlwin.cpp>
#endif

//---------------------------------------------------------------------------
#pragma package(smart_init)
