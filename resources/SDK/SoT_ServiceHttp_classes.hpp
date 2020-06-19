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

// Class ServiceHttp.ServiceHttpSettings
// 0x0018 (0x0040 - 0x0028)
class UServiceHttpSettings : public UObject
{
public:
	struct FString                                     DiscoveryServiceUrl;                                      // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	TEnumAsByte<EServiceHttpMetricsLevel>              MetricsLevel;                                             // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServiceHttp.ServiceHttpSettings");
		return ptr;
	}

};


// Class ServiceHttp.DevelopmentAuthenticationSettings
// 0x0050 (0x0078 - 0x0028)
class UDevelopmentAuthenticationSettings : public UObject
{
public:
	struct FString                                     SandboxId;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     TokenServiceUrl;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     ClientId;                                                 // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     ClientSecret;                                             // 0x0058(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     LivePrivileges;                                           // 0x0068(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServiceHttp.DevelopmentAuthenticationSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
