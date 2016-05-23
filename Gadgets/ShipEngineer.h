/*
	ShipEngineer.h
	(c)2004 Palestar Inc, Richard Lyle
*/

#ifndef SHIPENGINEER_H
#define SHIPENGINEER_H

#include "DarkSpace/NounShip.h"

//----------------------------------------------------------------------------

class ShipEngineer : public NounShip
{
public:
	DECLARE_WIDGET_CLASS();

	// NounShip interface
	Type type() const
	{
		return ENGINEER;
	}
	int buildTechnology() const
	{
		return 0;
	}
	int	buildCost() const
	{
		return 9500;
	}
	dword buildFlags() const
	{
		return NounPlanet::FLAG_METALS;
	}
	int	buildTime() const
	{
		return 1800;
	}
	int baseValue() const
	{
		return 20000;
	}
	int baseEnergy() const
	{
		return 12000;
	}
	int baseDamage() const
	{
		return 55200;
	}
	float baseVelocity() const
	{
		return 10.0f;
	}
	int baseCargo() const
	{
		return 5;
	}
	float baseSignature() const
	{
		return 3.0f;
	}
	float baseSensor() const
	{
		return 250.0f;
	}
	float baseView() const
	{
		return 4.0f;
	}
	float baseThrust() const
	{
		return 0.5f;
	}
	float baseYaw() const
	{
		return 3.14f;
	}
	virtual int	maxRepair() const
	{
		return 1000;
	}
	int explodeDamage() const
	{
		return 32000;
	}
	float explodeArea() const
	{
		return 80.0f;
	}
	bool enableGateSpawn() const
	{
		return true;
	}
	float velocityModifier() const
	{
		return 5.0f;
	}
	float cloakEnergyModifier() const
	{
		return 1.0f;
	}
	float cloakTime() const
	{
		return 6.0f;
	}
	float uncloakTime() const
	{
		return 0.75f;
	}
	float maxCloakTime() const
	{
		return 45.0f;
	}
	float shieldEnergyModifier() const
	{
		return 1.0f;
	}
	float armorModifier() const
	{
		return 1.0f;
	}
	float shieldModifier() const
	{
		return 1.0f;
	}
	int	gadgetLevel() const
	{
		return 3;
	}
	float planetDefenseModifier() const
	{
		return 0.5f;
	}
	virtual dword despawnTime() const
	{
		return 5 * TICKS_PER_SECOND;
	}
	virtual float controlWeight() const
	{
		return 1.0f;
	}
};

//----------------------------------------------------------------------------



#endif

//----------------------------------------------------------------------------
//EOF
