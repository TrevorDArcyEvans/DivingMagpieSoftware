// ************************************************************************ //
// WARNING                                                                    
// -------                                                                    
// The types declared in this file were generated from data read from a       
// Type Library. If this type library is explicitly or indirectly (via        
// another type library referring to this type library) re-imported, or the   
// 'Refresh' command of the Type Library Editor activated while editing the   
// Type Library, the contents of this file will be regenerated and all        
// manual modifications will be lost.                                         
// ************************************************************************ //

// C++ TLBWRTR : $Revision:   1.0.3.1  $
// File generated on 1/24/2000 9:49:20 AM from Type Library described below.

// ************************************************************************ //
// Type Lib: g:\rampage\typelib\TypeLibraries\MSWORD8.olb (1)
// IID\LCID: {00020905-0000-0000-C000-000000000046}\409
// Helpfile: g:\rampage\typelib\TypeLibraries\VBAWRD8.HLP
// DepndLst: 
//   (1) v2.0 stdole, (C:\WINNT\System32\stdole2.tlb)
//   (2) v2.0 Office, (D:\Program Files\Microsoft Office\Office\MSO97.DLL)
//   (3) v5.0 VBIDE, (C:\Program Files\Common Files\Microsoft Shared\VBA\VBEEXT1.OLB)
//   (4) v4.0 StdVCL, (C:\WINNT\System32\STDVCL40.DLL)
// Errors:
//   Hint: Symbol 'Window' renamed to 'WINDOW'
//   Hint: Symbol 'Windows' renamed to 'Windoz'
//   Hint: Symbol 'System' renamed to 'SYSTEM'
//   Hint: Symbol 'Global' renamed to 'WordGlobal'
//   Hint: Symbol 'Application' renamed to 'WordApplication'
//   Hint: Symbol 'Document' renamed to 'WordDocument'
//   Hint: Symbol 'Font' renamed to 'WordFont'
//   Hint: Symbol 'ParagraphFormat' renamed to 'WordParagraphFormat'
//   Hint: Symbol 'OLEControl' renamed to 'WordOLEControl'
//   Hint: Symbol 'LetterContent' renamed to 'WordLetterContent'
//   Hint: Symbol 'Windows' renamed to 'Windoz'
//   Hint: Symbol 'Windows' renamed to 'Windoz'
//   Hint: Symbol 'Windows' renamed to 'Windoz'
//   Hint: Symbol 'Update' renamed to '_Update'
//   Hint: Symbol 'Update' renamed to '_Update'
//   Hint: Symbol 'Update' renamed to '_Update'
//   Hint: Symbol 'Update' renamed to '_Update'
//   Hint: Symbol 'Update' renamed to '_Update'
//   Hint: Symbol 'Update' renamed to '_Update'
//   Hint: Symbol 'Update' renamed to '_Update'
//   Hint: Symbol 'Update' renamed to '_Update'
//   Hint: Symbol 'ExitWindows' renamed to 'ExitWindoz'
//   Hint: Symbol 'RGB' renamed to 'rgb'
//   Hint: Symbol 'RGB' renamed to 'rgb'
//   Hint: Symbol 'Window' renamed to 'WINDOW'
//   Hint: Symbol 'Windows' renamed to 'Windoz'
//   Hint: Symbol 'System' renamed to 'SYSTEM'
//   Hint: Symbol 'Global' renamed to 'WordGlobal'
//   Hint: Symbol 'Application' renamed to 'WordApplication'
//   Hint: Symbol 'Document' renamed to 'WordDocument'
//   Hint: Symbol 'Font' renamed to 'WordFont'
//   Hint: Symbol 'ParagraphFormat' renamed to 'WordParagraphFormat'
//   Hint: Symbol 'OLEControl' renamed to 'WordOLEControl'
//   Hint: Symbol 'LetterContent' renamed to 'WordLetterContent'
//   Hint: Symbol 'Windows' renamed to 'Windoz'
//   Hint: Symbol 'Windows' renamed to 'Windoz'
//   Hint: Symbol 'Windows' renamed to 'Windoz'
//   Hint: Symbol 'Update' renamed to '_Update'
//   Hint: Symbol 'Update' renamed to '_Update'
//   Hint: Symbol 'Update' renamed to '_Update'
//   Hint: Symbol 'Update' renamed to '_Update'
//   Hint: Symbol 'Update' renamed to '_Update'
//   Hint: Symbol 'Update' renamed to '_Update'
//   Hint: Symbol 'Update' renamed to '_Update'
//   Hint: Symbol 'Update' renamed to '_Update'
//   Hint: Symbol 'ExitWindows' renamed to 'ExitWindoz'
//   Hint: Symbol 'RGB' renamed to 'rgb'
//   Hint: Symbol 'RGB' renamed to 'rgb'
// ************************************************************************ //

#include <vcl.h>
#pragma hdrstop

#include "Word_97.h"

#if !defined(__PRAGMA_PACKAGE_SMART_INIT)
#define      __PRAGMA_PACKAGE_SMART_INIT
#pragma package(smart_init)
#endif

namespace Word_97
{


// *********************************************************************//
// GUIDS declared in the TypeLibrary                                      
// *********************************************************************//
const GUID LIBID_Word = {0x00020905, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__Application = {0x00020970, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__Global = {0x000209B9, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_FontNames = {0x0002096F, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Languages = {0x0002096E, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Language = {0x0002096D, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Documents = {0x0002096C, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__Document = {0x0002096B, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Template = {0x0002096A, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Templates = {0x000209A2, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_RoutingSlip = {0x00020969, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Bookmark = {0x00020968, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Bookmarks = {0x00020967, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Variable = {0x00020966, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Variables = {0x00020965, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_RecentFile = {0x00020964, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_RecentFiles = {0x00020963, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_WINDOW = {0x00020962, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Windoz = {0x00020961, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Pane = {0x00020960, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Panes = {0x0002095F, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Range = {0x0002095E, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_ListFormat = {0x000209C0, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Find = {0x000209B0, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Replacement = {0x000209B1, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Characters = {0x0002095D, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Words = {0x0002095C, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Sentences = {0x0002095B, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Sections = {0x0002095A, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Section = {0x00020959, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Paragraphs = {0x00020958, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Paragraph = {0x00020957, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_DropCap = {0x00020956, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_TabStops = {0x00020955, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_TabStop = {0x00020954, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__ParagraphFormat = {0x00020953, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__Font = {0x00020952, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Table = {0x00020951, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Row = {0x00020950, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Column = {0x0002094F, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Cell = {0x0002094E, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Tables = {0x0002094D, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Rows = {0x0002094C, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Columns = {0x0002094B, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Cells = {0x0002094A, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_AutoCorrect = {0x00020949, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_AutoCorrectEntries = {0x00020948, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_AutoCorrectEntry = {0x00020947, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_FirstLetterExceptions = {0x00020946, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_FirstLetterException = {0x00020945, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_TwoInitialCapsExceptions = {0x00020944, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_TwoInitialCapsException = {0x00020943, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Footnotes = {0x00020942, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Endnotes = {0x00020941, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Comments = {0x00020940, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Footnote = {0x0002093F, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Endnote = {0x0002093E, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Comment = {0x0002093D, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Borders = {0x0002093C, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Border = {0x0002093B, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Shading = {0x0002093A, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_TextRetrievalMode = {0x00020939, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_AutoTextEntries = {0x00020937, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_AutoTextEntry = {0x00020936, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_SYSTEM = {0x00020935, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_OLEFormat = {0x00020933, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_LinkFormat = {0x00020931, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__OLEControl = {0x000209A4, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Fields = {0x00020930, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Field = {0x0002092F, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Browser = {0x0002092E, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Styles = {0x0002092D, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Style = {0x0002092C, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Frames = {0x0002092B, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Frame = {0x0002092A, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_FormFields = {0x00020929, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_FormField = {0x00020928, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_TextInput = {0x00020927, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_CheckBox = {0x00020926, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_DropDown = {0x00020925, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_ListEntries = {0x00020924, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_ListEntry = {0x00020923, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_TablesOfFigures = {0x00020922, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_TableOfFigures = {0x00020921, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_MailMerge = {0x00020920, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_MailMergeFields = {0x0002091F, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_MailMergeField = {0x0002091E, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_MailMergeDataSource = {0x0002091D, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_MailMergeFieldNames = {0x0002091C, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_MailMergeFieldName = {0x0002091B, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_MailMergeDataFields = {0x0002091A, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_MailMergeDataField = {0x00020919, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Envelope = {0x00020918, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_MailingLabel = {0x00020917, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_CustomLabels = {0x00020916, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_CustomLabel = {0x00020915, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_TablesOfContents = {0x00020914, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_TableOfContents = {0x00020913, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_TablesOfAuthorities = {0x00020912, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_TableOfAuthorities = {0x00020911, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Dialogs = {0x00020910, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Dialog = {0x000209B8, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_PageSetup = {0x00020971, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_LineNumbering = {0x00020972, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_TextColumns = {0x00020973, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_TextColumn = {0x00020974, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Selection = {0x00020975, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_TablesOfAuthoritiesCategories = {0x00020976, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_TableOfAuthoritiesCategory = {0x00020977, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_CaptionLabels = {0x00020978, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_CaptionLabel = {0x00020979, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_AutoCaptions = {0x0002097A, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_AutoCaption = {0x0002097B, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Indexes = {0x0002097C, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Index = {0x0002097D, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_AddIn = {0x0002097E, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_AddIns = {0x0002097F, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Revisions = {0x00020980, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Revision = {0x00020981, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Task = {0x00020982, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Tasks = {0x00020983, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_HeadersFooters = {0x00020984, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_HeaderFooter = {0x00020985, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_PageNumbers = {0x00020986, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_PageNumber = {0x00020987, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Subdocuments = {0x00020988, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Subdocument = {0x00020989, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_HeadingStyles = {0x0002098A, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_HeadingStyle = {0x0002098B, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_StoryRanges = {0x0002098C, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_ListLevel = {0x0002098D, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_ListLevels = {0x0002098E, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_ListTemplate = {0x0002098F, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_ListTemplates = {0x00020990, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_ListParagraphs = {0x00020991, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_List = {0x00020992, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Lists = {0x00020993, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_ListGallery = {0x00020994, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_ListGalleries = {0x00020995, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_KeyBindings = {0x00020996, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_KeysBoundTo = {0x00020997, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_KeyBinding = {0x00020998, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_FileConverter = {0x00020999, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_FileConverters = {0x0002099A, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_SynonymInfo = {0x0002099B, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Hyperlinks = {0x0002099C, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Hyperlink = {0x0002099D, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Shapes = {0x0002099F, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_ShapeRange = {0x000209B5, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_GroupShapes = {0x000209B6, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Shape = {0x000209A0, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_TextFrame = {0x000209B2, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__LetterContent = {0x000209A1, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_View = {0x000209A5, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Zoom = {0x000209A6, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Zooms = {0x000209A7, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_InlineShape = {0x000209A8, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_InlineShapes = {0x000209A9, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_SpellingSuggestions = {0x000209AA, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_SpellingSuggestion = {0x000209AB, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Dictionaries = {0x000209AC, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_HangulHanjaConversionDictionaries = {0x000209E0, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Dictionary = {0x000209AD, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_ReadabilityStatistics = {0x000209AE, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_ReadabilityStatistic = {0x000209AF, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Versions = {0x000209B3, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Version = {0x000209B4, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Options = {0x000209B7, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_MailMessage = {0x000209BA, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_ProofreadingErrors = {0x000209BB, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Mailer = {0x000209BD, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_WrapFormat = {0x000209C3, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_HangulAndAlphabetExceptions = {0x000209D1, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_HangulAndAlphabetException = {0x000209D2, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_Adjustments = {0x000209C4, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_CalloutFormat = {0x000209C5, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_ColorFormat = {0x000209C6, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_ConnectorFormat = {0x000209C7, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_FillFormat = {0x000209C8, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_FreeformBuilder = {0x000209C9, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_LineFormat = {0x000209CA, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_PictureFormat = {0x000209CB, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_ShadowFormat = {0x000209CC, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_ShapeNode = {0x000209CD, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_ShapeNodes = {0x000209CE, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_TextEffectFormat = {0x000209CF, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID_ThreeDFormat = {0x000209D0, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID_ApplicationEvents = {0x000209F7, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID_WordGlobal = {0x000209F0, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID_WordApplication = {0x000209FF, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID_DocumentEvents = {0x000209F6, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID_WordDocument = {0x00020906, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID_WordFont = {0x000209F5, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID_WordParagraphFormat = {0x000209F4, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID_OCXEvents = {0x000209F3, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID_WordOLEControl = {0x000209F2, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID_WordLetterContent = {0x000209F1, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };

};     // namespace Word_97
