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

// Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.StopReaction
struct ABP_LocalWindGenerator_C_StopReaction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.ApplyDisturbanceAtCurrentTime
struct ABP_LocalWindGenerator_C_ApplyDisturbanceAtCurrentTime_Params
{
	float                                              DeltaTme;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.StartReaction
struct ABP_LocalWindGenerator_C_StartReaction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.UserConstructionScript
struct ABP_LocalWindGenerator_C_UserConstructionScript_Params
{
};

// Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.ReceiveTick
struct ABP_LocalWindGenerator_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.ExecuteUbergraph_BP_LocalWindGenerator
struct ABP_LocalWindGenerator_C_ExecuteUbergraph_BP_LocalWindGenerator_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
