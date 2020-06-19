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

// Class ObjectMessagingTests.MockPawnWithMessagingDispatcher
// 0x00A8 (0x0520 - 0x0478)
class AMockPawnWithMessagingDispatcher : public APawn
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0478(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ObjectMessagingTests.MockPawnWithMessagingDispatcher");
		return ptr;
	}

};


// Class ObjectMessagingTests.ObjectMessagingDispatcherTestObject
// 0x00A8 (0x04B8 - 0x0410)
class AObjectMessagingDispatcherTestObject : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0410(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ObjectMessagingTests.ObjectMessagingDispatcherTestObject");
		return ptr;
	}

};


// Class ObjectMessagingTests.ObjectMessagingListenerTestObject
// 0x0018 (0x0040 - 0x0028)
class UObjectMessagingListenerTestObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ObjectMessagingTests.ObjectMessagingListenerTestObject");
		return ptr;
	}


	void TestFunctionWithEventData(struct FObjectMessagingEventTestData* InEventData);
	void TestFunction(int Data);
	int InvalidEventFunctionWithReturn(struct FObjectMessagingEventTestData* InEventData);
	void InvalidEventFunctionWithNoArguments();
	void InvalidEventFunctionWithIncorrectArgument(int Value);
};


// Class ObjectMessagingTests.TestGameStateWithObjectMessagingDispatcher
// 0x00A8 (0x0510 - 0x0468)
class ATestGameStateWithObjectMessagingDispatcher : public AGameState
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0468(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ObjectMessagingTests.TestGameStateWithObjectMessagingDispatcher");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
