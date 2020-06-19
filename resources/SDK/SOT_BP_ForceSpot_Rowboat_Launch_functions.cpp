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

// Function BP_ForceSpot_Rowboat_Launch.BP_ForceSpot_Rowboat_Launch_C.SetupClamberSpline
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ForceSpot_Rowboat_Launch_C::SetupClamberSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForceSpot_Rowboat_Launch.BP_ForceSpot_Rowboat_Launch_C.SetupClamberSpline");

	ABP_ForceSpot_Rowboat_Launch_C_SetupClamberSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ForceSpot_Rowboat_Launch.BP_ForceSpot_Rowboat_Launch_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ForceSpot_Rowboat_Launch_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ForceSpot_Rowboat_Launch.BP_ForceSpot_Rowboat_Launch_C.UserConstructionScript");

	ABP_ForceSpot_Rowboat_Launch_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
