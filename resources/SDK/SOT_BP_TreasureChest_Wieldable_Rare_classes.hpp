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

// BlueprintGeneratedClass BP_TreasureChest_Wieldable_Rare.BP_TreasureChest_Wieldable_Rare_C
// 0x0000 (0x0860 - 0x0860)
class ABP_TreasureChest_Wieldable_Rare_C : public ABP_TreasureChest_GoldHoarderLocked_Base_Wieldable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TreasureChest_Wieldable_Rare.BP_TreasureChest_Wieldable_Rare_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
