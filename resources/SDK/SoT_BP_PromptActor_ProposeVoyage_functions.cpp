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

// Function BP_PromptActor_ProposeVoyage.BP_PromptActor_ProposeVoyage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PromptActor_ProposeVoyage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptActor_ProposeVoyage.BP_PromptActor_ProposeVoyage_C.UserConstructionScript");

	ABP_PromptActor_ProposeVoyage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PromptActor_ProposeVoyage.BP_PromptActor_ProposeVoyage_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_PromptActor_ProposeVoyage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptActor_ProposeVoyage.BP_PromptActor_ProposeVoyage_C.ReceiveBeginPlay");

	ABP_PromptActor_ProposeVoyage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PromptActor_ProposeVoyage.BP_PromptActor_ProposeVoyage_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_ProposeVoyage_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptActor_ProposeVoyage.BP_PromptActor_ProposeVoyage_C.ReceiveEndPlay");

	ABP_PromptActor_ProposeVoyage_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PromptActor_ProposeVoyage.BP_PromptActor_ProposeVoyage_C.ExecuteUbergraph_BP_PromptActor_ProposeVoyage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_ProposeVoyage_C::ExecuteUbergraph_BP_PromptActor_ProposeVoyage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptActor_ProposeVoyage.BP_PromptActor_ProposeVoyage_C.ExecuteUbergraph_BP_PromptActor_ProposeVoyage");

	ABP_PromptActor_ProposeVoyage_C_ExecuteUbergraph_BP_PromptActor_ProposeVoyage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
