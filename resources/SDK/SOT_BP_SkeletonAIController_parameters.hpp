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

// Function BP_SkeletonAIController.BP_SkeletonAIController_C.UserConstructionScript
struct ABP_SkeletonAIController_C_UserConstructionScript_Params
{
};

// Function BP_SkeletonAIController.BP_SkeletonAIController_C.OnPossess
struct ABP_SkeletonAIController_C_OnPossess_Params
{
	class APawn**                                      PossessedPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkeletonAIController.BP_SkeletonAIController_C.ExecuteUbergraph_BP_SkeletonAIController
struct ABP_SkeletonAIController_C_ExecuteUbergraph_BP_SkeletonAIController_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
