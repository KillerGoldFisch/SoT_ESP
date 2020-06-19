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

// Function BP_wld_trunk_01_b.BP_wld_trunk_01_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_wld_trunk_01_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_wld_trunk_01_b.BP_wld_trunk_01_b_C.UserConstructionScript");

	ABP_wld_trunk_01_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
