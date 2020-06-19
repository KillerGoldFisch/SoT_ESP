#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Sessions.ECrewSessionType
enum class ECrewSessionType : uint8_t
{
	Invalid                        = 0,
	SmallShip                      = 1,
	MediumShip                     = 2,
	LargeShip                      = 3,
	ServerLarge                    = 4,
	SloopSolo                      = 5,
	Lobby                          = 6,
	ECrewSessionType_MAX           = 7
};


// Enum Sessions.ESessionVisibility
enum class ESessionVisibility : uint8_t
{
	Invalid                        = 0,
	Open                           = 1,
	Closed                         = 2,
	ESessionVisibility_MAX         = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Sessions.SessionTemplate
// 0x0018
struct FSessionTemplate
{
	struct FString                                     TemplateName;                                             // 0x0000(0x0010) (ZeroConstructor)
	TEnumAsByte<ECrewSessionType>                      SessionType;                                              // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                MaxPlayers;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Sessions.CrewSessionTemplate
// 0x0020 (0x0038 - 0x0018)
struct FCrewSessionTemplate : public FSessionTemplate
{
	struct FString                                     MatchmakingHopper;                                        // 0x0018(0x0010) (ZeroConstructor)
	class UClass*                                      ShipSize;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MaxMatchmakingPlayers;                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Sessions.SessionLostEvent
// 0x0001
struct FSessionLostEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Sessions.SessionDetailsChangedEvent
// 0x0018
struct FSessionDetailsChangedEvent
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Sessions.SessionInfoUpdateAvailableEvent
// 0x0010
struct FSessionInfoUpdateAvailableEvent
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
