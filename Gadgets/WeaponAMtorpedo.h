/*	
	WeaponAMtorpedo.h
	(c)2004 Palestar, Richard Lyle
*/

#ifndef WEAPON_AM_TORPEDO_H
#define WEAPON_AM_TORPEDO_H

#include "DarkSpace/Constants.h"
#include "DarkSpace/GadgetWeapon.h"



//----------------------------------------------------------------------------

class WeaponAMtorpedo : public GadgetWeapon
{
public:
	DECLARE_WIDGET_CLASS();

	// NounGadget interface
	Type type() const
	{
		return WEAPON_MEDIUM;
	}
	int maxDamage() const
	{
		return (3900 + (level() * 1200));
	}
	int addValue() const
	{
		return 2400;
	}
	int buildTechnology() const
	{
		return 15;
	}
	int	buildCost() const
	{
		return 95;
	}
	dword buildFlags() const
	{
		return NounPlanet::FLAG_METALS;
	}
	int buildTime() const
	{
		return 360;
	}

	// GadgetWeapon interface
	int energyCost() const	
	{
		return (840 + (168 * level()));
	}
	int energyCharge() const	
	{
		return 8;
	}
	int ammoCost() const
	{
		return 1;
	}
	int ammoMax() const
	{
		return ( 300 ) / ( ( energyCost() / energyCharge() ) / 20 );
	}
	int ammoReload() const
	{
		return ammoMax() / 10;
	}
	int ammoResources() const
	{
		return 5;
	}
	bool needsTarget() const
	{
		return true;
	}
	bool needsLock() const
	{
		return false;
	}
	int lockTime() const
	{
		return 0;
	}
	dword lockType() const
	{
		return 0;
	}
	bool checkRange() const
	{
		return true;
	}
	bool inheritVelocity() const
	{
		return true;
	}
	bool turret() const
	{
		return true;
	}
	int	maxProjectiles() const
	{
		return 4;
	}
	int projectileCount() const
	{
		return 1;
	}
	int projectileDelay() const
	{
		return 0;
	}
	bool projectileSmart() const
	{
		return false;
	}
	bool isMine() const
	{
		return false;
	}
	float projectileVelocity() const
	{
		switch (level()) 
		{
			case 10:
				return 60.0f;
			default:
				return 200.0f - (level() * 20.0f);
		}
	}
	float projectileLife() const
	{
		return 400.0f / projectileVelocity();
	}
	float projectileSig() const
	{
		return 0.0f;
	}
	bool projectileCollidable() const
	{
		return false;
	}
	bool projectileAutoTarget() const
	{
		return false;
	}
	float turnRate() const
	{
		return PI / 64.0f;
	}
	int tracerRate() const
	{
		return 20;
	}
	int tracerLife() const
	{
		return TICKS_PER_SECOND * 3;
	}
	dword damageType() const
	{
		return DAMAGE_ENERGY;
	}
	int damage() const
	{
		return (level() * 210);
	}
	int damageRandom() const
	{
		return (level() * 1260);
	}
	bool reverseFalloff() const
	{
		return false;
	}
	float damageFalloff() const
	{
		return 1;
	}
	int repairRate() const
	{
		return 3;
	}
	int areaDamage() const
	{
		return 1050;
	}
	int areaDamageRandom() const
	{
		return 6300;
	}
	float areaDamageRadius() const
	{
		return (30.0f * (1 + (level() / 5)));
	}
	float armTime() const
	{
		return 0.0f;
	}
};

//----------------------------------------------------------------------------



#endif

//----------------------------------------------------------------------------
// EOF
