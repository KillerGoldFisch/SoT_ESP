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

// BlueprintGeneratedClass BP_SkeletonAIController.BP_SkeletonAIController_C
// 0x0018 (0x0B60 - 0x0B48)
class ABP_SkeletonAIController_C : public AAthenaAICharacterController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B48(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaAIAbilityHandlerComponent*            AthenaAIAbilityHandler;                                   // 0x0B50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AWieldableItem*                              Item;                                                     // 0x0B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkeletonAIController.BP_SkeletonAIController_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnPossess(class APawn** PossessedPawn);
	void ExecuteUbergraph_BP_SkeletonAIController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
