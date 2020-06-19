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

// BlueprintGeneratedClass BP_PromptActor_RepairShipCapstan.BP_PromptActor_RepairShipCapstan_C
// 0x0010 (0x0458 - 0x0448)
class ABP_PromptActor_RepairShipCapstan_C : public ABP_PromptActorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0448(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Prompt_RepairShipCapstan_C*              PromptCoordinator;                                        // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PromptActor_RepairShipCapstan.BP_PromptActor_RepairShipCapstan_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BP_PromptActor_RepairShipCapstan(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
