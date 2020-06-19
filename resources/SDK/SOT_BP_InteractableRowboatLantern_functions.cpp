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

// Function BP_InteractableRowboatLantern.BP_InteractableRowboatLantern_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_InteractableRowboatLantern_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableRowboatLantern.BP_InteractableRowboatLantern_C.UserConstructionScript");

	ABP_InteractableRowboatLantern_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InteractableRowboatLantern.BP_InteractableRowboatLantern_C.LightStateChanged
// (Event, Public, BlueprintEvent)

void ABP_InteractableRowboatLantern_C::LightStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableRowboatLantern.BP_InteractableRowboatLantern_C.LightStateChanged");

	ABP_InteractableRowboatLantern_C_LightStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InteractableRowboatLantern.BP_InteractableRowboatLantern_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_InteractableRowboatLantern_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableRowboatLantern.BP_InteractableRowboatLantern_C.ReceiveBeginPlay");

	ABP_InteractableRowboatLantern_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InteractableRowboatLantern.BP_InteractableRowboatLantern_C.ExecuteUbergraph_BP_InteractableRowboatLantern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InteractableRowboatLantern_C::ExecuteUbergraph_BP_InteractableRowboatLantern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableRowboatLantern.BP_InteractableRowboatLantern_C.ExecuteUbergraph_BP_InteractableRowboatLantern");

	ABP_InteractableRowboatLantern_C_ExecuteUbergraph_BP_InteractableRowboatLantern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
