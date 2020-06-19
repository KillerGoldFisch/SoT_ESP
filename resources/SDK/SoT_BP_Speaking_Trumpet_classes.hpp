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

// BlueprintGeneratedClass BP_Speaking_Trumpet.BP_Speaking_Trumpet_C
// 0x0000 (0x07E0 - 0x07E0)
class ABP_Speaking_Trumpet_C : public ASpeakingTrumpet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Speaking_Trumpet.BP_Speaking_Trumpet_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
