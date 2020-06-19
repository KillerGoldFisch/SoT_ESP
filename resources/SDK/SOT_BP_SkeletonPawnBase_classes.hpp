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

// BlueprintGeneratedClass BP_SkeletonPawnBase.BP_SkeletonPawnBase_C
// 0x0038 (0x1138 - 0x1100)
class ABP_SkeletonPawnBase_C : public AAthenaAICharacter
{
public:
	class UWaterInteractionComponent*                  WaterInteractionClientOnly;                               // 0x1100(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x1108(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAINameplateComponent*                       AINameplate;                                              // 0x1110(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SkeletonAudioComponent_C*                BP_SkeletonAudioComponent;                                // 0x1118(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNoiseMakerComponent*                        NoiseMaker;                                               // 0x1120(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_EnemyVFXComponent_C*                     BP_EnemyVFXComponent;                                     // 0x1128(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterFootImpactComponent*               CharacterFootImpact;                                      // 0x1130(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkeletonPawnBase.BP_SkeletonPawnBase_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
