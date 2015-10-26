//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose: 
//
//=============================================================================

#include "cbase.h"
#include "weapon_citizenpackage.h"

//-----------------------------------------------------------------------------
// Purpose: Old Man Harpoon - Lost Coast.
//-----------------------------------------------------------------------------
class CWeaponOldManHarpoon : public CWeaponCitizenPackage
{
	DECLARE_CLASS( CWeaponOldManHarpoon, CWeaponCitizenPackage );
public:
	DECLARE_SERVERCLASS();
	DECLARE_DATADESC();	
	DECLARE_ACTTABLE();
};

IMPLEMENT_SERVERCLASS_ST( CWeaponOldManHarpoon, DT_WeaponOldManHarpoon )
END_SEND_TABLE()

BEGIN_DATADESC( CWeaponOldManHarpoon )
END_DATADESC()

LINK_ENTITY_TO_CLASS( weapon_oldmanharpoon, CWeaponOldManHarpoon );
PRECACHE_WEAPON_REGISTER( weapon_oldmanharpoon );

acttable_t	CWeaponOldManHarpoon::m_acttable[] = 
{
	{ ACT_IDLE,						ACT_IDLE_SUITCASE,					false },
	{ ACT_WALK,						ACT_WALK_SUITCASE,					false },

	{ ACT_RANGE_ATTACK1, ACT_RANGE_ATTACK_SLAM, true },
	{ ACT_HL2MP_IDLE, ACT_HL2MP_IDLE_MELEE, false },
	{ ACT_HL2MP_RUN, ACT_HL2MP_RUN_MELEE, false },
	{ ACT_HL2MP_IDLE_CROUCH, ACT_HL2MP_IDLE_CROUCH_MELEE, false },
	{ ACT_HL2MP_WALK_CROUCH, ACT_HL2MP_WALK_CROUCH_MELEE, false },
	{ ACT_HL2MP_GESTURE_RANGE_ATTACK, ACT_HL2MP_GESTURE_RANGE_ATTACK_MELEE, false },
	{ ACT_HL2MP_GESTURE_RELOAD, ACT_HL2MP_GESTURE_RELOAD_MELEE, false },
	{ ACT_HL2MP_JUMP, ACT_HL2MP_JUMP_MELEE, false },
};
IMPLEMENT_ACTTABLE( CWeaponOldManHarpoon );
