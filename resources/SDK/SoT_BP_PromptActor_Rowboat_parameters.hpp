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

// Function BP_PromptActor_Rowboat.BP_PromptActor_Rowboat_C.UserConstructionScript
struct ABP_PromptActor_Rowboat_C_UserConstructionScript_Params
{
};

// Function BP_PromptActor_Rowboat.BP_PromptActor_Rowboat_C.ReceiveBeginPlay
struct ABP_PromptActor_Rowboat_C_ReceiveBeginPlay_Params
{
};

// Function BP_PromptActor_Rowboat.BP_PromptActor_Rowboat_C.ReceiveEndPlay
struct ABP_PromptActor_Rowboat_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PromptActor_Rowboat.BP_PromptActor_Rowboat_C.ExecuteUbergraph_BP_PromptActor_Rowboat
struct ABP_PromptActor_Rowboat_C_ExecuteUbergraph_BP_PromptActor_Rowboat_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
