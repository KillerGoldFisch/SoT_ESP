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

// Function BP_EnemyVFXComponent.BP_EnemyVFXComponent_C.ReceiveBeginPlay
struct UBP_EnemyVFXComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_EnemyVFXComponent.BP_EnemyVFXComponent_C.ReceiveEndPlay
struct UBP_EnemyVFXComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EnemyVFXComponent.BP_EnemyVFXComponent_C.ExecuteUbergraph_BP_EnemyVFXComponent
struct UBP_EnemyVFXComponent_C_ExecuteUbergraph_BP_EnemyVFXComponent_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
