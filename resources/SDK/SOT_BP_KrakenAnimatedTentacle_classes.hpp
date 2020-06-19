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

// BlueprintGeneratedClass BP_KrakenAnimatedTentacle.BP_KrakenAnimatedTentacle_C
// 0x0018 (0x0A98 - 0x0A80)
class ABP_KrakenAnimatedTentacle_C : public AKrakenAnimatedTentacle
{
public:
	class UKrakenTentacleItemSpawnComponent*           KrakenTentacleFoodSpawn;                                  // 0x0A80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKrakenTentacleItemSpawnComponent*           KrakenTentacleItemSpawn;                                  // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_KrakenAnimatedTentacle.BP_KrakenAnimatedTentacle_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
