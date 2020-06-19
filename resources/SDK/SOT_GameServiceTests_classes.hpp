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

// Class GameServiceTests.GameModeWithServiceProviderGameState
// 0x0000 (0x0508 - 0x0508)
class AGameModeWithServiceProviderGameState : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameServiceTests.GameModeWithServiceProviderGameState");
		return ptr;
	}

};


// Class GameServiceTests.TestGameServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UTestGameServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameServiceTests.TestGameServiceInterface");
		return ptr;
	}

};


// Class GameServiceTests.TestGameService
// 0x0018 (0x0040 - 0x0028)
class UTestGameService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameServiceTests.TestGameService");
		return ptr;
	}

};


// Class GameServiceTests.TestGameServiceRequiringUninitialisation
// 0x0010 (0x0038 - 0x0028)
class UTestGameServiceRequiringUninitialisation : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameServiceTests.TestGameServiceRequiringUninitialisation");
		return ptr;
	}

};


// Class GameServiceTests.TestGameServiceActorInterface
// 0x0000 (0x0028 - 0x0028)
class UTestGameServiceActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameServiceTests.TestGameServiceActorInterface");
		return ptr;
	}

};


// Class GameServiceTests.TestGameServiceActor
// 0x0008 (0x0418 - 0x0410)
class ATestGameServiceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0410(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameServiceTests.TestGameServiceActor");
		return ptr;
	}

};


// Class GameServiceTests.TestGameServiceProvider
// 0x0078 (0x00A0 - 0x0028)
class UTestGameServiceProvider : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameServiceTests.TestGameServiceProvider");
		return ptr;
	}

};


// Class GameServiceTests.TestGameStateWithCollection
// 0x0060 (0x04C8 - 0x0468)
class ATestGameStateWithCollection : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0468(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameServiceTests.TestGameStateWithCollection");
		return ptr;
	}

};


// Class GameServiceTests.TestGameStateWithObjectMessagingServiceProvider
// 0x00D8 (0x05E8 - 0x0510)
class ATestGameStateWithObjectMessagingServiceProvider : public ATestGameStateWithObjectMessagingDispatcher
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0510(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameServiceTests.TestGameStateWithObjectMessagingServiceProvider");
		return ptr;
	}

};


// Class GameServiceTests.TestServiceProviderGameInstance
// 0x0018 (0x00A0 - 0x0088)
class UTestServiceProviderGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET
	class UObject*                                     ServiceToReturn;                                          // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameServiceTests.TestServiceProviderGameInstance");
		return ptr;
	}

};


// Class GameServiceTests.TestServiceProviderGameState
// 0x0018 (0x0480 - 0x0468)
class ATestServiceProviderGameState : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0468(0x0010) MISSED OFFSET
	class UObject*                                     ServiceToReturn;                                          // 0x0478(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameServiceTests.TestServiceProviderGameState");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
