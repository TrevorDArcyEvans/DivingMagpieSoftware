#include "stlhdrs.h"
#pragma  hdrstop
/***************************************************************************
 *
 * wcharby.cpp - Source for char instantions of locale _byname facets
 *
 ***************************************************************************
 *
 * Copyright (c) 1994-1999 Rogue Wave Software, Inc.  All Rights Reserved.
 *
 * This computer software is owned by Rogue Wave Software, Inc. and is
 * protected by U.S. copyright laws and other laws and by international
 * treaties.  This computer software is furnished by Rogue Wave Software,
 * Inc. pursuant to a written license agreement and may be used, copied,
 * transmitted, and stored only in accordance with the terms of such
 * license and with the inclusion of the above copyright notice.  This
 * computer software or any other copies thereof may not be provided or
 * otherwise made available to any other person.
 *
 * U.S. Government Restricted Rights.  This computer software is provided
 * with Restricted Rights.  Use, duplication, or disclosure by the
 * Government is subject to restrictions as set forth in subparagraph (c)
 * (1) (ii) of The Rights in Technical Data and Computer Software clause
 * at DFARS 252.227-7013 or subparagraphs (c) (1) and (2) of the
 * Commercial Computer Software � Restricted Rights at 48 CFR 52.227-19,
 * as applicable.  Manufacturer is Rogue Wave Software, Inc., 5500
 * Flatiron Parkway, Boulder, Colorado 80301 USA.
 *
 **************************************************************************/

#include <stdcomp.h>

#if defined(_RW_STD_LOCALE) && !defined(_RWSTD_NO_WIDE_CHAR)

#include <locale>

#ifndef _RWSTD_NO_NEW_HEADER
#include <cstdlib>
#include <cassert>
#include <clocale>
#else
#include <locale.h>
#endif

#ifndef _RWSTD_NO_EXCEPTIONS
#include <stdexcept>
#endif

#ifndef _RWSTD_NO_NAMESPACE
namespace std {
#endif

ctype_byname<wchar_t>::ctype_byname(const char* name, size_t refs)
: ctype<wchar_t>(refs)
{
}

ctype_byname<wchar_t>::~ctype_byname()
{ }
#ifndef _RWSTD_NO_NAMESPACE
} namespace __rwstd {
#endif

#ifndef _RWSTD_NO_NAMESPACE
} // namespace __rwstd
#endif

#endif // _RW_STD_LOCALE && !_RWSTD_NO_WIDE_CHAR

