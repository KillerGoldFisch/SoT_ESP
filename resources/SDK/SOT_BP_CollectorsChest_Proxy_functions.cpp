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

// Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.OnRep_HideWaterOcclusionVolume
// (BlueprintCallable, BlueprintEvent)

void ABP_CollectorsChest_Proxy_C::OnRep_HideWaterOcclusionVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.OnRep_HideWaterOcclusionVolume");

	ABP_CollectorsChest_Proxy_C_OnRep_HideWaterOcclusionVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.IsAttachedToShip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CollectorsChest_Proxy_C::IsAttachedToShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.IsAttachedToShip");

	ABP_CollectorsChest_Proxy_C_IsAttachedToShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.GetClosestInteractionPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_CollectorsChest_Proxy_C::GetClosestInteractionPoint(struct FVector* ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.GetClosestInteractionPoint");

	ABP_CollectorsChest_Proxy_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;

	return params.ReturnValue;
}


// Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CollectorsChest_Proxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.UserConstructionScript");

	ABP_CollectorsChest_Proxy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_CollectorsChest_Proxy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.ReceiveBeginPlay");

	ABP_CollectorsChest_Proxy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CollectorsChest_Proxy_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.ReceiveEndPlay");

	ABP_CollectorsChest_Proxy_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.ItemDropped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventWieldableItemDropped EventParam                     (Parm)

void ABP_CollectorsChest_Proxy_C::ItemDropped(const struct FEventWieldableItemDropped& EventParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.ItemDropped");

	ABP_CollectorsChest_Proxy_C_ItemDropped_Params params;
	params.EventParam = EventParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.ExecuteUbergraph_BP_CollectorsChest_Proxy
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CollectorsChest_Proxy_C::ExecuteUbergraph_BP_CollectorsChest_Proxy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.ExecuteUbergraph_BP_CollectorsChest_Proxy");

	ABP_CollectorsChest_Proxy_C_ExecuteUbergraph_BP_CollectorsChest_Proxy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
