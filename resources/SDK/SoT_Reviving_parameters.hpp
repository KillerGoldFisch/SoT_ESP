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

// Function Reviving.DeathSelfInteractionComponent.SetGiveUpAvaliable
struct UDeathSelfInteractionComponent_SetGiveUpAvaliable_Params
{
};

// Function Reviving.DeathSelfInteractionComponent.OnRep_HasGivenUp
struct UDeathSelfInteractionComponent_OnRep_HasGivenUp_Params
{
};

// Function Reviving.ReviveComponent.OnRep_ReviveState
struct UReviveComponent_OnRep_ReviveState_Params
{
	TEnumAsByte<EReviveState>                          PreviousReviveState;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Reviving.ReviveComponent.HandleOwningCharacterEndPlay
struct UReviveComponent_HandleOwningCharacterEndPlay_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
