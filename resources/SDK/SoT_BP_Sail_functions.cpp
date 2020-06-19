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

// Function BP_Sail.BP_Sail_C.Debug
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Sail_C::Debug()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sail.BP_Sail_C.Debug");

	ABP_Sail_C_Debug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sail.BP_Sail_C.Initialise
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsMainSail                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          SailForceScalar                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Sail_C::Initialise(bool IsMainSail, float SailForceScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sail.BP_Sail_C.Initialise");

	ABP_Sail_C_Initialise_Params params;
	params.IsMainSail = IsMainSail;
	params.SailForceScalar = SailForceScalar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sail.BP_Sail_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Sail_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sail.BP_Sail_C.UserConstructionScript");

	ABP_Sail_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
