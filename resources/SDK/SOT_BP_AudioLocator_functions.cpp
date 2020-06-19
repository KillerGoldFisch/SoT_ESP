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

// Function BP_AudioLocator.BP_AudioLocator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AudioLocator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AudioLocator.BP_AudioLocator_C.UserConstructionScript");

	ABP_AudioLocator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AudioLocator.BP_AudioLocator_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AudioLocator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AudioLocator.BP_AudioLocator_C.ReceiveBeginPlay");

	ABP_AudioLocator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AudioLocator.BP_AudioLocator_C.ExecuteUbergraph_BP_AudioLocator
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AudioLocator_C::ExecuteUbergraph_BP_AudioLocator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AudioLocator.BP_AudioLocator_C.ExecuteUbergraph_BP_AudioLocator");

	ABP_AudioLocator_C_ExecuteUbergraph_BP_AudioLocator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
