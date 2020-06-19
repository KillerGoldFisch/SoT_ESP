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

// Class Damage.ExtentEstimationInterface
// 0x0000 (0x0028 - 0x0028)
class UExtentEstimationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Damage.ExtentEstimationInterface");
		return ptr;
	}

};


// Class Damage.HitNotificationTargetInterface
// 0x0000 (0x0028 - 0x0028)
class UHitNotificationTargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Damage.HitNotificationTargetInterface");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
