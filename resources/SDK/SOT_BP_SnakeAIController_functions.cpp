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

// Function BP_SnakeAIController.BP_SnakeAIController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SnakeAIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SnakeAIController.BP_SnakeAIController_C.UserConstructionScript");

	ABP_SnakeAIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SnakeAIController.BP_SnakeAIController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_SnakeAIController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SnakeAIController.BP_SnakeAIController_C.ReceiveBeginPlay");

	ABP_SnakeAIController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SnakeAIController.BP_SnakeAIController_C.ExecuteUbergraph_BP_SnakeAIController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SnakeAIController_C::ExecuteUbergraph_BP_SnakeAIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SnakeAIController.BP_SnakeAIController_C.ExecuteUbergraph_BP_SnakeAIController");

	ABP_SnakeAIController_C_ExecuteUbergraph_BP_SnakeAIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
