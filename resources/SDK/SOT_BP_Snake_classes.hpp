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

// BlueprintGeneratedClass BP_Snake.BP_Snake_C
// 0x0020 (0x0B80 - 0x0B60)
class ABP_Snake_C : public ABP_Fauna_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B60(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAIItemSpawnComponent*                       AIItemSpawn;                                              // 0x0B68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVenomComponent*                             Venom;                                                    // 0x0B70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SnakeSkeletalMesh;                                        // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Snake.BP_Snake_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnAgitatedDirected(const struct FVector& SourceLocation, const struct FVector& Direction, class AActor* Crate);
	void ExecuteUbergraph_BP_Snake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
