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

// Function PlayerGenderInterface.PlayerGenderInterface_C.CheckIsFemale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFemale                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerGenderInterface_C::CheckIsFemale(bool* IsFemale)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerGenderInterface.PlayerGenderInterface_C.CheckIsFemale");

	UPlayerGenderInterface_C_CheckIsFemale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFemale != nullptr)
		*IsFemale = params.IsFemale;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
