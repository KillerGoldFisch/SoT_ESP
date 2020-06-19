#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Music.MusicZoneInterface.CanPlayForPlayer
struct UMusicZoneInterface_CanPlayForPlayer_Params
{
	class AActor*                                      Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Music.MusicZoneComponent.GetEmitter
struct UMusicZoneComponent_GetEmitter_Params
{
	struct FWwiseEmitter                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Music.MusicZoneComponent.DisableZone
struct UMusicZoneComponent_DisableZone_Params
{
};

// Function Music.MusicZoneComponent.ActivateZone
struct UMusicZoneComponent_ActivateZone_Params
{
};

// Function Music.AISpawnerMusicZoneComponent.OnRep_SpawnerState
struct UAISpawnerMusicZoneComponent_OnRep_SpawnerState_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
