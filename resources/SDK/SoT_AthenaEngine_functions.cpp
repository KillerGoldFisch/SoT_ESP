// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaEngine.BoxCollisionExtentAdjustOverTimeComponent.SetBoxCollisionToAdjust
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBoxComponent*           InBoxComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBoxCollisionExtentAdjustOverTimeComponent::SetBoxCollisionToAdjust(class UBoxComponent* InBoxComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.BoxCollisionExtentAdjustOverTimeComponent.SetBoxCollisionToAdjust");

	UBoxCollisionExtentAdjustOverTimeComponent_SetBoxCollisionToAdjust_Params params;
	params.InBoxComponent = InBoxComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEngine.BoxedRpcDispatcherComponent.Server_SendRpc
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FSerialisedRpc          Event                          (ConstParm, Parm, ReferenceParm)

void UBoxedRpcDispatcherComponent::Server_SendRpc(const struct FSerialisedRpc& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.BoxedRpcDispatcherComponent.Server_SendRpc");

	UBoxedRpcDispatcherComponent_Server_SendRpc_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEngine.BoxedRpcDispatcherComponent.NetMulticastExcludeServer_SendRpc
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FSerialisedRpc          Event                          (ConstParm, Parm, ReferenceParm)

void UBoxedRpcDispatcherComponent::NetMulticastExcludeServer_SendRpc(const struct FSerialisedRpc& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.BoxedRpcDispatcherComponent.NetMulticastExcludeServer_SendRpc");

	UBoxedRpcDispatcherComponent_NetMulticastExcludeServer_SendRpc_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEngine.BoxedRpcDispatcherComponent.Client_SendRpc
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FSerialisedRpc          Event                          (ConstParm, Parm, ReferenceParm)

void UBoxedRpcDispatcherComponent::Client_SendRpc(const struct FSerialisedRpc& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.BoxedRpcDispatcherComponent.Client_SendRpc");

	UBoxedRpcDispatcherComponent_Client_SendRpc_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEngine.DynamicColourPointLightComponent.DeactivateLight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Blend                          (Parm, ZeroConstructor, IsPlainOldData)

void UDynamicColourPointLightComponent::DeactivateLight(bool Blend)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.DynamicColourPointLightComponent.DeactivateLight");

	UDynamicColourPointLightComponent_DeactivateLight_Params params;
	params.Blend = Blend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEngine.DynamicColourPointLightComponent.ActivateLight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Blend                          (Parm, ZeroConstructor, IsPlainOldData)

void UDynamicColourPointLightComponent::ActivateLight(bool Blend)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.DynamicColourPointLightComponent.ActivateLight");

	UDynamicColourPointLightComponent_ActivateLight_Params params;
	params.Blend = Blend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEngine.ForceFeedbackCondition.CanPlayForceFeedback
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  InOwner                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UForceFeedbackCondition::CanPlayForceFeedback(class AActor* InOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.ForceFeedbackCondition.CanPlayForceFeedback");

	UForceFeedbackCondition_CanPlayForceFeedback_Params params;
	params.InOwner = InOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaEngine.PlayModeHelpers.SetPlayModeOverride
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EPlayMode>         NewPlayModeOverride            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPlayModeHelpers::STATIC_SetPlayModeOverride(TEnumAsByte<EPlayMode> NewPlayModeOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.PlayModeHelpers.SetPlayModeOverride");

	UPlayModeHelpers_SetPlayModeOverride_Params params;
	params.NewPlayModeOverride = NewPlayModeOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEngine.PlayModeHelpers.GetPlayMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPlayMode>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EPlayMode> UPlayModeHelpers::STATIC_GetPlayMode(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.PlayModeHelpers.GetPlayMode");

	UPlayModeHelpers_GetPlayMode_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaEngine.PlayModeHelpers.ClearPlayModeOverride
// (Final, Native, Static, Public, BlueprintCallable)

void UPlayModeHelpers::STATIC_ClearPlayModeOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.PlayModeHelpers.ClearPlayModeOverride");

	UPlayModeHelpers_ClearPlayModeOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
