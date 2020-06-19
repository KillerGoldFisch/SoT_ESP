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

// Function BP_PigAIController.BP_PigAIController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PigAIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PigAIController.BP_PigAIController_C.UserConstructionScript");

	ABP_PigAIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PigAIController.BP_PigAIController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_PigAIController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PigAIController.BP_PigAIController_C.ReceiveBeginPlay");

	ABP_PigAIController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PigAIController.BP_PigAIController_C.ExecuteUbergraph_BP_PigAIController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PigAIController_C::ExecuteUbergraph_BP_PigAIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PigAIController.BP_PigAIController_C.ExecuteUbergraph_BP_PigAIController");

	ABP_PigAIController_C_ExecuteUbergraph_BP_PigAIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
