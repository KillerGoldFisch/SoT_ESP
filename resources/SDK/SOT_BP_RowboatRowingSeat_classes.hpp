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

// BlueprintGeneratedClass BP_RowboatRowingSeat.BP_RowboatRowingSeat_C
// 0x0008 (0x07E8 - 0x07E0)
class ABP_RowboatRowingSeat_C : public ARowingSeat
{
public:
	class UWwiseEmitterComponent*                      RowboatEmitter;                                           // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RowboatRowingSeat.BP_RowboatRowingSeat_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
