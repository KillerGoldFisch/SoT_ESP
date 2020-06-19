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

// Function BP_Rowboat_Lantern_Front.BP_Rowboat_Lantern_Front_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Rowboat_Lantern_Front_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rowboat_Lantern_Front.BP_Rowboat_Lantern_Front_C.UserConstructionScript");

	ABP_Rowboat_Lantern_Front_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
