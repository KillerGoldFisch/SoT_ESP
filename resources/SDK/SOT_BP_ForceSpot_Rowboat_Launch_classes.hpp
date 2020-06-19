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

// BlueprintGeneratedClass BP_ForceSpot_Rowboat_Launch.BP_ForceSpot_Rowboat_Launch_C
// 0x0010 (0x05B0 - 0x05A0)
class ABP_ForceSpot_Rowboat_Launch_C : public AForceSpot
{
public:
	TArray<struct FVector>                             InteractionSplinePoints;                                  // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ForceSpot_Rowboat_Launch.BP_ForceSpot_Rowboat_Launch_C");
		return ptr;
	}


	void SetupClamberSpline();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
