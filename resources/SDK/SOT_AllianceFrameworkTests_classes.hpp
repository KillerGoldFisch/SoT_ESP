#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AllianceFrameworkTests.MockAllianceService
// 0x00A0 (0x04B0 - 0x0410)
class AMockAllianceService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0410(0x0018) MISSED OFFSET
	struct FAlliancePennantData                        PennantData;                                              // 0x0428(0x0038)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0460(0x0048) MISSED OFFSET
	class UTexture*                                    MapFlagIconToReturn;                                      // 0x04A8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AllianceFrameworkTests.MockAllianceService");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
