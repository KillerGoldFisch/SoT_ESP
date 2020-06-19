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

// BlueprintGeneratedClass BP_fod_CoconutFresh_00_a_Wieldable.BP_fod_CoconutFresh_00_a_Wieldable_C
// 0x0000 (0x0868 - 0x0868)
class ABP_fod_CoconutFresh_00_a_Wieldable_C : public ABP_StaticWieldableIngestible_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_fod_CoconutFresh_00_a_Wieldable.BP_fod_CoconutFresh_00_a_Wieldable_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
