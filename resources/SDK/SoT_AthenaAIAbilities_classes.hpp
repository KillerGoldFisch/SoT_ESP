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

// Class AthenaAIAbilities.AshenFireStatus
// 0x0000 (0x0028 - 0x0028)
class UAshenFireStatus : public UStatusBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.AshenFireStatus");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
