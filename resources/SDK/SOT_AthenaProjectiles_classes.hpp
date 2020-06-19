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

// Class AthenaProjectiles.AthenaProjectilesThrottledTickCollectionAsset
// 0x0010 (0x0038 - 0x0028)
class UAthenaProjectilesThrottledTickCollectionAsset : public UDataAsset
{
public:
	TArray<struct FThrottledProjectileTickPool>        ProjectileTickPools;                                      // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaProjectiles.AthenaProjectilesThrottledTickCollectionAsset");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
