#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.AnimNotify_ExitedFire
struct UBP_Anim_FlintlockPistol_C_AnimNotify_ExitedFire_Params
{
};

// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.OnOneShotUseTriggered
struct UBP_Anim_FlintlockPistol_C_OnOneShotUseTriggered_Params
{
	class UClass**                                     InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWieldableItemActionVisuals*                ActionVisuals;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.OnUseStarted
struct UBP_Anim_FlintlockPistol_C_OnUseStarted_Params
{
	class UClass**                                     InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWieldableItemActionVisuals*                ActionVisuals;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.BlueprintInitializeAnimation
struct UBP_Anim_FlintlockPistol_C_BlueprintInitializeAnimation_Params
{
};

// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.ReloadEventDelegate
struct UBP_Anim_FlintlockPistol_C_ReloadEventDelegate_Params
{
	struct FEventProjectileWeaponReload                Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.BlueprintUninitializeAnimation
struct UBP_Anim_FlintlockPistol_C_BlueprintUninitializeAnimation_Params
{
};

// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.AnimNotify_ResetReload
struct UBP_Anim_FlintlockPistol_C_AnimNotify_ResetReload_Params
{
};

// Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.ExecuteUbergraph_BP_Anim_FlintlockPistol
struct UBP_Anim_FlintlockPistol_C_ExecuteUbergraph_BP_Anim_FlintlockPistol_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
