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

// Function AthenaEngine.BoxCollisionExtentAdjustOverTimeComponent.SetBoxCollisionToAdjust
struct UBoxCollisionExtentAdjustOverTimeComponent_SetBoxCollisionToAdjust_Params
{
	class UBoxComponent*                               InBoxComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaEngine.BoxedRpcDispatcherComponent.Server_SendRpc
struct UBoxedRpcDispatcherComponent_Server_SendRpc_Params
{
	struct FSerialisedRpc                              Event;                                                    // (ConstParm, Parm, ReferenceParm)
};

// Function AthenaEngine.BoxedRpcDispatcherComponent.NetMulticastExcludeServer_SendRpc
struct UBoxedRpcDispatcherComponent_NetMulticastExcludeServer_SendRpc_Params
{
	struct FSerialisedRpc                              Event;                                                    // (ConstParm, Parm, ReferenceParm)
};

// Function AthenaEngine.BoxedRpcDispatcherComponent.Client_SendRpc
struct UBoxedRpcDispatcherComponent_Client_SendRpc_Params
{
	struct FSerialisedRpc                              Event;                                                    // (ConstParm, Parm, ReferenceParm)
};

// Function AthenaEngine.DynamicColourPointLightComponent.DeactivateLight
struct UDynamicColourPointLightComponent_DeactivateLight_Params
{
	bool                                               Blend;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEngine.DynamicColourPointLightComponent.ActivateLight
struct UDynamicColourPointLightComponent_ActivateLight_Params
{
	bool                                               Blend;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEngine.ForceFeedbackCondition.CanPlayForceFeedback
struct UForceFeedbackCondition_CanPlayForceFeedback_Params
{
	class AActor*                                      InOwner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaEngine.PlayModeHelpers.SetPlayModeOverride
struct UPlayModeHelpers_SetPlayModeOverride_Params
{
	TEnumAsByte<EPlayMode>                             NewPlayModeOverride;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEngine.PlayModeHelpers.GetPlayMode
struct UPlayModeHelpers_GetPlayMode_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPlayMode>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaEngine.PlayModeHelpers.ClearPlayModeOverride
struct UPlayModeHelpers_ClearPlayModeOverride_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
