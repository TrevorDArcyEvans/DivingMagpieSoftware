/*------------------------------------------------------------------------
 * filename - _ctype.h
 *
 *      Defines the "C" locale ctype macros.
 *-----------------------------------------------------------------------*/

/*
 *      C/C++ Run Time Library - Version 10.0
 *
 *      Copyright (c) 1992, 2000 by Inprise Corporation
 *      All Rights Reserved.
 *
 */

/* $Revision:   9.0  $ */

#ifndef __CTYPE_H
#include <ctype.h>
#endif

#if !defined(___DEFS_H)
#include <_defs.h>
#endif

#if !defined(__LOCALE_H)
#include <locale.h>
#endif


#ifdef __cplusplus
extern "C" {
#endif

int _RTLENTRY  _EXPFUNC iscalnum (int __c);
int _RTLENTRY  _EXPFUNC iscalpha (int __c);
int _RTLENTRY  _EXPFUNC isccntrl (int __c);
int _RTLENTRY  _EXPFUNC iscdigit (int __c);
int _RTLENTRY  _EXPFUNC iscgraph (int __c);
int _RTLENTRY  _EXPFUNC isclower (int __c);
int _RTLENTRY  _EXPFUNC iscprint (int __c);
int _RTLENTRY  _EXPFUNC iscpunct (int __c);
int _RTLENTRY  _EXPFUNC iscspace (int __c);
int _RTLENTRY  _EXPFUNC iscupper (int __c);
int _RTLENTRY  _EXPFUNC iscxdigit(int __c);
int _RTLENTRY  _EXPFUNC __isctype(int c, int type);
int _RTLENTRY  _EXPFUNC __iswctype(int c, int type);

#ifdef __cplusplus
}
#endif

/* "C" locale only character classification macros */
#define iscalnum(c)  (_chartype[ (c)+1 ] & (_IS_ALNUM))

#define iscalpha(c)  (_chartype[ (c)+1 ] & (_IS_ALPHA))

#define isccntrl(c)  (_chartype[ (c)+1 ] & (_IS_CTL))

#define iscdigit(c)  (_chartype[ (c)+1 ] & (_IS_DIG))

#define iscgraph(c)  (_chartype[ (c)+1 ] & (_IS_GRAPH))

#define isclower(c)  (_chartype[ (c)+1 ] & (_IS_LOW))

#define iscprint(c)  (_chartype[ (c)+1 ] & (_IS_GRAPH | _IS_BLK))

#define iscpunct(c)  (_chartype[ (c)+1 ] & (_IS_PUN))

#define iscspace(c)  (_chartype[ (c)+1 ] & (_IS_SP))

#define iscupper(c)  (_chartype[ (c)+1 ] & (_IS_UPP))

#define iscxdigit(c) (_chartype[ (c)+1 ] & (_IS_HEX))

#define _isctype( c, type )  (int) (_locale->pctype[ (((c) & 0x00ff) +1) ] & (type))

#ifdef __cplusplus
extern "C" {
#endif
int _RTLENTRY _EXPFUNC ctolower(int __ch);
int _RTLENTRY _EXPFUNC _fctolower(int __ch);
int _RTLENTRY _EXPFUNC ctoupper(int __ch);
int _RTLENTRY _EXPFUNC _fctoupper(int __ch);
int _RTLENTRYF _EXPFUNC _ftolower(int __ch);
int _RTLENTRYF _EXPFUNC _ftoupper(int __ch);
#ifdef __cplusplus
}
#endif

#if defined( __USELOCALES__ )
#define _ftoupper  _ltoupper
#define _ftolower  _ltolower
#endif


/* "C" locale only character conversion */
#define ctolower(c) ( _lower[ (c) ] )
#define ctoupper(c) ( _upper[ (c) ] )


