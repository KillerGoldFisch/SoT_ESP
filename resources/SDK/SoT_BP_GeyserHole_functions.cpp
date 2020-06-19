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

// Function BP_GeyserHole.BP_GeyserHole_C.SetFadeOutParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GeyserHole_C::SetFadeOutParameters(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GeyserHole.BP_GeyserHole_C.SetFadeOutParameters");

	ABP_GeyserHole_C_SetFadeOutParameters_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GeyserHole.BP_GeyserHole_C.SetFadeInParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GeyserHole_C::SetFadeInParameters(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GeyserHole.BP_GeyserHole_C.SetFadeInParameters");

	ABP_GeyserHole_C_SetFadeInParameters_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GeyserHole.BP_GeyserHole_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GeyserHole_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GeyserHole.BP_GeyserHole_C.UserConstructionScript");

	ABP_GeyserHole_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GeyserHole.BP_GeyserHole_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_GeyserHole_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GeyserHole.BP_GeyserHole_C.ReceiveBeginPlay");

	ABP_GeyserHole_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GeyserHole.BP_GeyserHole_C.OnStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHoleState>*       InState                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GeyserHole_C::OnStateChanged(TEnumAsByte<EHoleState>* InState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GeyserHole.BP_GeyserHole_C.OnStateChanged");

	ABP_GeyserHole_C_OnStateChanged_Params params;
	params.InState = InState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GeyserHole.BP_GeyserHole_C.ExecuteUbergraph_BP_GeyserHole
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GeyserHole_C::ExecuteUbergraph_BP_GeyserHole(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GeyserHole.BP_GeyserHole_C.ExecuteUbergraph_BP_GeyserHole");

	ABP_GeyserHole_C_ExecuteUbergraph_BP_GeyserHole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
