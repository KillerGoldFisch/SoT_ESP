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

// Function BP_Anim_PocketWatch.BP_Anim_PocketWatch_C.ExecuteUbergraph_BP_Anim_PocketWatch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_PocketWatch_C::ExecuteUbergraph_BP_Anim_PocketWatch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_PocketWatch.BP_Anim_PocketWatch_C.ExecuteUbergraph_BP_Anim_PocketWatch");

	UBP_Anim_PocketWatch_C_ExecuteUbergraph_BP_Anim_PocketWatch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
