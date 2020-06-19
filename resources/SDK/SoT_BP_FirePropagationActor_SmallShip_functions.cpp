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

// Function BP_FirePropagationActor_SmallShip.BP_FirePropagationActor_SmallShip_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FirePropagationActor_SmallShip_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FirePropagationActor_SmallShip.BP_FirePropagationActor_SmallShip_C.UserConstructionScript");

	ABP_FirePropagationActor_SmallShip_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
