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

// BlueprintGeneratedClass BP_CompanyOnboardingStarter.BP_CompanyOnboardingStarter_C
// 0x0000 (0x0060 - 0x0060)
class UBP_CompanyOnboardingStarter_C : public UCompanyOnboardingStarter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CompanyOnboardingStarter.BP_CompanyOnboardingStarter_C");
		return ptr;
	}


	bool HasPrerequisites();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
