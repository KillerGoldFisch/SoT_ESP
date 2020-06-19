#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MerchantContracts.MerchantContractsBlueprintLibrary.GetDateFromTimeLimit
struct UMerchantContractsBlueprintLibrary_GetDateFromTimeLimit_Params
{
	TScriptInterface<class UGameServiceProviderInterface> ServiceProviderInterface;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeLimit;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
