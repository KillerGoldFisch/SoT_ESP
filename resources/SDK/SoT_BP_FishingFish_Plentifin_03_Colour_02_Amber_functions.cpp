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

// Function BP_FishingFish_Plentifin_03_Colour_02_Amber.BP_FishingFish_Plentifin_03_Colour_02_Amber_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FishingFish_Plentifin_03_Colour_02_Amber_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingFish_Plentifin_03_Colour_02_Amber.BP_FishingFish_Plentifin_03_Colour_02_Amber_C.UserConstructionScript");

	ABP_FishingFish_Plentifin_03_Colour_02_Amber_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
