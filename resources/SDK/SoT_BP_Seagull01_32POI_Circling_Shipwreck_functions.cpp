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

// Function BP_Seagull01_32POI_Circling_Shipwreck.BP_Seagull01_32POI_Circling_Shipwreck_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Seagull01_32POI_Circling_Shipwreck_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Seagull01_32POI_Circling_Shipwreck.BP_Seagull01_32POI_Circling_Shipwreck_C.UserConstructionScript");

	ABP_Seagull01_32POI_Circling_Shipwreck_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
