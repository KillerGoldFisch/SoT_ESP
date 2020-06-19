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

// Enum Music.EAISpawnerMusicZoneState
enum class EAISpawnerMusicZoneState : uint8_t
{
	Passive                        = 0,
	InCombat                       = 1,
	BattleWon                      = 2,
	EAISpawnerMusicZoneState_MAX   = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Music.MusicZoneDestroyedEvent
// 0x0010
struct FMusicZoneDestroyedEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Music.MusicZoneSpawnedEvent
// 0x0010
struct FMusicZoneSpawnedEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
