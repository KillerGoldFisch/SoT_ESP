// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SkeletonAIController.BP_SkeletonAIController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SkeletonAIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkeletonAIController.BP_SkeletonAIController_C.UserConstructionScript");

	ABP_SkeletonAIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkeletonAIController.BP_SkeletonAIController_C.OnPossess
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  PossessedPawn                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkeletonAIController_C::OnPossess(class APawn** PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkeletonAIController.BP_SkeletonAIController_C.OnPossess");

	ABP_SkeletonAIController_C_OnPossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkeletonAIController.BP_SkeletonAIController_C.ExecuteUbergraph_BP_SkeletonAIController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkeletonAIController_C::ExecuteUbergraph_BP_SkeletonAIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkeletonAIController.BP_SkeletonAIController_C.ExecuteUbergraph_BP_SkeletonAIController");

	ABP_SkeletonAIController_C_ExecuteUbergraph_BP_SkeletonAIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
