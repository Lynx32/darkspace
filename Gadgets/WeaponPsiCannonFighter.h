/*	
	WeaponPsiCannonFightet.h
	(c)2009 Palestar, Richard Lyle
	Created by Robert Kelford, March 2009
*/

#ifndef WEAPON_PSI_CANNON_FIGHTER_H
#define WEAPON_PSI_CANNON_FIGHTER_H

#include "DarkSpace/Constants.h"
#include "DarkSpace/GadgetWeapon.h"



//----------------------------------------------------------------------------

class WeaponPsiCannonFighter : public GadgetWeapon
{
public:
	DECLARE_WIDGET_CLASS();

	// NounGadget interface
	Type type() const
	{
		return WEAPON;
	}
	int maxDamage() const
	{
		return 800;
	}
	int addValue() const
	{
		return 1750;
	}
	int buildTechnology() const
	{
		return 10;
	}
	int	buildCost() const
	{
		return 50;
	}
	dword buildFlags() const
	{
		return NounPlanet::FLAG_METALS;
	}
	int buildTime() const
	{
		return 260;
	}
	// GadgetWeapon interface
	int energyCost() const	
	{
		return 70;
	}
	int energyCharge() const
	{
		return 1;
	}
	int ammoCost() const
	{
		return 0;
	}
	int ammoMax() const
	{
		return 0;
	}
	int ammoReload() const
	{
		return 0;
	}
	int ammoResources() const
	{
		return 0;
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
		return 20;
	}
	int projectileCount() const
	{
		return 5;
	}
	int projectileDelay() const
	{
		return 4;
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
		return 400.0f;
	}
	float projectileLife() const
	{
		return 900.0f / projectileVelocity();
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
		return 0.0f;
	}
	int tracerRate() const
	{
		return 10;
	}
	int tracerLife() const
	{
		return TICKS_PER_SECOND * 2;
	}
	dword damageType() const
	{
		return DAMAGE_PSI | DAMAGE_KINETIC;
	}
	int damage() const
	{
		return 152;
	}
	int damageRandom() const
	{
		return 912;
	}
	bool reverseFalloff() const
	{
		return false;
	}
	float damageFalloff() const
	{
		return 1.0f;
	}
	int repairRate() const
	{
		return 3;
	}
	int areaDamage() const
	{
		return 0;
	}
	int areaDamageRandom() const
	{
		return 0;
	}
	float areaDamageRadius() const
	{
		return 0.0f;
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
