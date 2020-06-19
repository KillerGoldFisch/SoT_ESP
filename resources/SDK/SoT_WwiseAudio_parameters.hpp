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

// Function WwiseAudio.WwiseEvent.IsAudible
struct UWwiseEvent_IsAudible_Params
{
	struct FVector                                     SoundPosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ListenerPos;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WwiseAudio.WwiseEvent.GetMaxAttenuation
struct UWwiseEvent_GetMaxAttenuation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WwiseAudio.WwiseEvent.GetDurationType
struct UWwiseEvent_GetDurationType_Params
{
	TEnumAsByte<EWwiseEventDurationType>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WwiseAudio.WwiseEvent.GetDurationMin
struct UWwiseEvent_GetDurationMin_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WwiseAudio.WwiseEvent.GetDurationMax
struct UWwiseEvent_GetDurationMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
