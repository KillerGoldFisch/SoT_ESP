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

// Function BP_Snake.BP_Snake_C.UserConstructionScript
struct ABP_Snake_C_UserConstructionScript_Params
{
};

// Function BP_Snake.BP_Snake_C.ReceiveBeginPlay
struct ABP_Snake_C_ReceiveBeginPlay_Params
{
};

// Function BP_Snake.BP_Snake_C.OnAgitatedDirected
struct ABP_Snake_C_OnAgitatedDirected_Params
{
	struct FVector                                     SourceLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      Crate;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Snake.BP_Snake_C.ExecuteUbergraph_BP_Snake
struct ABP_Snake_C_ExecuteUbergraph_BP_Snake_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
