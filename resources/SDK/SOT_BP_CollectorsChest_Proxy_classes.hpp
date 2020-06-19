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

// BlueprintGeneratedClass BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C
// 0x00C9 (0x0939 - 0x0870)
class ABP_CollectorsChest_Proxy_C : public ACollectorsChestItemProxyStatic
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0870(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        WaterOcclusionVolume;                                     // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialAnimatorComponent*                  MaterialAnimator;                                         // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UOpenableItemMeshAnimationReactionComponent* OpenableItemMeshAnimationReaction;                        // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMeshAnimatorComponent*                      MeshAnimator;                                             // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UOpenableItemMaterialAnimationReactionComponent* OpenableItemMaterialAnimationReaction;                    // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UItemProxyShipTrackerComponent*              ItemProxyShipTracker;                                     // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGlintComponent*                             Glint;                                                    // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UQuestBookPagesInContainerComponent*         QuestBookPagesInContainer;                                // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGoldInContainerComponent*                   GoldInContainer;                                          // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x08C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCollectorsChestItemSlotInteractable*        ItemSlotInteractbale_3;                                   // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCollectorsChestItemSlotInteractable*        ItemSlotInteractable_2;                                   // 0x08D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCollectorsChestItemSlotInteractable*        ItemSlotInteractable_1;                                   // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FObjectMessagingHandle                      OnDroppedHandle;                                          // 0x08F0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HideWaterOcclusionVolume;                                 // 0x0938(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C");
		return ptr;
	}


	void OnRep_HideWaterOcclusionVolume();
	bool IsAttachedToShip();
	struct FVector GetClosestInteractionPoint(struct FVector* ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ItemDropped(const struct FEventWieldableItemDropped& EventParam);
	void ExecuteUbergraph_BP_CollectorsChest_Proxy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
