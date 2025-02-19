// -------------------------------------------------------------------
//
//     Filename: HandleEvents.h
//  Description: Definition of event handler classes for SolidWorks
//               notifications.
//
// -------------------------------------------------------------------

#if !defined(HANDLEEVENTS_H)
#define HANDLEEVENTS_H

#include "ccitem.h"

class swAppEvents;

class swAppEvents : public CControlItem
{
public:
	swAppEvents(){}
	DECLARE_EVENTSINK_MAP()

	// ole event handlers
	HRESULT OnModelDocChange(void);
	HRESULT swAppEvents::OnDocumentOpen(BSTR docName);
	HRESULT OnDocumentNew(LPDISPATCH NewDoc, long DocType);
	HRESULT OnDestroy(void);
};

#endif

// --------------------------------
//  End of HandleEvents.h
// --------------------------------
