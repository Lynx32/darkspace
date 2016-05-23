/*
	StructureHub.h

	Colony Hub Structure
	(c)2000 Palestar Inc, Richard Lyle
*/

#ifndef STRUCTUREHUB_H
#define STRUCTUREHUB_H

#include "NounStructure.h"
#include "NounUnit.h"
#include "NounGadget.h"
#include "NounUnit.h"
#include "GameDll.h"

//----------------------------------------------------------------------------

class DLL StructureHub : public NounStructure
{
public:
	DECLARE_WIDGET_CLASS();
	DECLARE_PROPERTY_LIST();

	// Types
	typedef WidgetReference< StructureHub >		wRef;

	// Construction
	StructureHub();

	// NounStructure interface
	virtual int			sortId() const;
	virtual int			groupId() const;
	int					maxDamage() const;					// how much damage can this structure take
	int					buildTechnology() const;			// technology level required to build
	int					buildTime() const;					// time in seconds to build this structure
	int					buildCost() const;					// cost to build this structure
	dword				buildFlags() const;
	int					repairRate() const;

	Color				color() const;

	bool				canBuild( NounPlanet * pPlanet, bool bUpgrade ) const;

	dword				planetFlags() const;
	int					workers() const;				// workers needed
	int					power() const;					// power required/generated
	int					food() const;					// food generated by this structure
	int					habitat() const;				// habitat provided by this structure
	int					mining() const;					// mining from this structure
	int					research() const;				// research generated by this structure
	int					production() const;				// production
	int					technology() const;
};

//----------------------------------------------------------------------------



#endif

//----------------------------------------------------------------------------
//EOF

