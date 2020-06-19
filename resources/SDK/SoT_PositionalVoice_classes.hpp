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

// Class PositionalVoice.VoiceChatRendererInterface
// 0x0000 (0x0028 - 0x0028)
class UVoiceChatRendererInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PositionalVoice.VoiceChatRendererInterface");
		return ptr;
	}

};


// Class PositionalVoice.MockVoiceChatRenderer
// 0x0018 (0x0040 - 0x0028)
class UMockVoiceChatRenderer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PositionalVoice.MockVoiceChatRenderer");
		return ptr;
	}

};


// Class PositionalVoice.VoiceChatRendererRetreivalInterface
// 0x0000 (0x0028 - 0x0028)
class UVoiceChatRendererRetreivalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PositionalVoice.VoiceChatRendererRetreivalInterface");
		return ptr;
	}

};


// Class PositionalVoice.MockVoiceChatRendererRetriever
// 0x0010 (0x0038 - 0x0028)
class UMockVoiceChatRendererRetriever : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PositionalVoice.MockVoiceChatRendererRetriever");
		return ptr;
	}

};


// Class PositionalVoice.VoiceChatRenderer
// 0x00F8 (0x0120 - 0x0028)
class UVoiceChatRenderer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	class UWwiseEvent*                                 AttenuatedVoiceEvent;                                     // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 AttenuatedAndSpatialisedVoiceEvent;                       // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 UnattenuatedVoiceEvent;                                   // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PreBufferInMilliseconds;                                  // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                ChatRoutingListenerIndex;                                 // 0x0054(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              EmitterHoldInSeconds;                                     // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC4];                                      // 0x005C(0x00C4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PositionalVoice.VoiceChatRenderer");
		return ptr;
	}

};


// Class PositionalVoice.PositionalVoiceTestFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UPositionalVoiceTestFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PositionalVoice.PositionalVoiceTestFunctionLibrary");
		return ptr;
	}


	int STATIC_GetNumberOfUnmutedRemotePlayers(class APlayerController* CurrentPlayer);
	int STATIC_GetNumberOfRegisteredChatEmitters(class UObject* WorldContextObject, class UClass* VoiceChatRendererClass);
	int STATIC_GetMaxNumberOfAudibleChatEmitters();
};


// Class PositionalVoice.VoiceChatEmitterInterface
// 0x0000 (0x0028 - 0x0028)
class UVoiceChatEmitterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PositionalVoice.VoiceChatEmitterInterface");
		return ptr;
	}


	struct FVector GetVoiceLocation();
	void GetVoiceAudioEmitterProxy(struct FWwiseEmitter* EmitterProxy);
	float GetVoiceAttenuationScaler(const TScriptInterface<class UVoiceChatEmitterInterface>& RelativeToThisEmitter);
};


// Class PositionalVoice.TestVoiceChatEmitter
// 0x0038 (0x0448 - 0x0410)
class ATestVoiceChatEmitter : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0410(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PositionalVoice.TestVoiceChatEmitter");
		return ptr;
	}


	struct FVector GetVoiceLocation();
	void GetVoiceAudioEmitterProxy(struct FWwiseEmitter* EmitterProxy);
	float GetVoiceAttenuationScaler(const TScriptInterface<class UVoiceChatEmitterInterface>& RelativeToThisEmitter);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
