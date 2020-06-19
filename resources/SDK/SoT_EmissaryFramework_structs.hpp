#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum EmissaryFramework.EEmisaryCompanyActionType
enum class EEmisaryCompanyActionType : uint8_t
{
	CompleteRiddleStep             = 0,
	CompleteRiddleQuest            = 1,
	CompleteXMarksTheSpotQuest     = 2,
	DefeatNamedSkeleton            = 3,
	CompleteBountyQuest            = 4,
	CompleteCargoRunStep           = 5,
	CompleteCargoRunQuest          = 6,
	CompleteMerchantStep           = 7,
	CompleteMerchantQuest          = 8,
	EEmisaryCompanyActionType_MAX  = 9
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmissaryFramework.EmissaryCompanyChangedEvent
// 0x0010
struct FEmissaryCompanyChangedEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
