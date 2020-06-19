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

// BlueprintGeneratedClass BP_SkellyShip_ShipCloud.BP_SkellyShip_ShipCloud_C
// 0x0000 (0x04B8 - 0x04B8)
class ABP_SkellyShip_ShipCloud_C : public ABP_SkellyFort_SkullCloud_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkellyShip_ShipCloud.BP_SkellyShip_ShipCloud_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
