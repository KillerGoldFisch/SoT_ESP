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

// BlueprintGeneratedClass BP_DamageZoneInterface.BP_DamageZoneInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_DamageZoneInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DamageZoneInterface.BP_DamageZoneInterface_C");
		return ptr;
	}


	void GetNumExternalHits(int* NumExternalHits);
	void ClearDecalFlags();
	void AddExternalHit(const struct FHullDamageHit& Hit_Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
