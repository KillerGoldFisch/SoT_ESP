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

// Class AuthenticationToken.JwtAuthenticationTokenSettings
// 0x0010 (0x0038 - 0x0028)
class UJwtAuthenticationTokenSettings : public UObject
{
public:
	struct FString                                     TokenSecretKey;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AuthenticationToken.JwtAuthenticationTokenSettings");
		return ptr;
	}

};


// Class AuthenticationToken.JwtAuthenticationTokenEditorSettings
// 0x0010 (0x0038 - 0x0028)
class UJwtAuthenticationTokenEditorSettings : public UObject
{
public:
	struct FString                                     TokenSecretKey;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AuthenticationToken.JwtAuthenticationTokenEditorSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
