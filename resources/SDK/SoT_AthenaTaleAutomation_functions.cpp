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

// Function AthenaTaleAutomation.TaleQuestAutomationService.GetPuppet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AAthenaPlayerCharacter*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AAthenaPlayerCharacter* UTaleQuestAutomationService::GetPuppet()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTaleAutomation.TaleQuestAutomationService.GetPuppet");

	UTaleQuestAutomationService_GetPuppet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
