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

// BlueprintGeneratedClass BP_Rowboat_Lantern_Front.BP_Rowboat_Lantern_Front_C
// 0x0000 (0x0689 - 0x0689)
class ABP_Rowboat_Lantern_Front_C : public ABP_InteractableRowboatLantern_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Rowboat_Lantern_Front.BP_Rowboat_Lantern_Front_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
