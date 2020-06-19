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

// Function BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseLockableCollectorsChest_Proxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C.UserConstructionScript");

	ABP_BaseLockableCollectorsChest_Proxy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_BaseLockableCollectorsChest_Proxy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C.ReceiveBeginPlay");

	ABP_BaseLockableCollectorsChest_Proxy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C.BndEvt__Lock_K2Node_ComponentBoundEvent_12_OnLockOpenedDelegate__DelegateSignature
// (BlueprintEvent)

void ABP_BaseLockableCollectorsChest_Proxy_C::BndEvt__Lock_K2Node_ComponentBoundEvent_12_OnLockOpenedDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C.BndEvt__Lock_K2Node_ComponentBoundEvent_12_OnLockOpenedDelegate__DelegateSignature");

	ABP_BaseLockableCollectorsChest_Proxy_C_BndEvt__Lock_K2Node_ComponentBoundEvent_12_OnLockOpenedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C.ExecuteUbergraph_BP_BaseLockableCollectorsChest_Proxy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseLockableCollectorsChest_Proxy_C::ExecuteUbergraph_BP_BaseLockableCollectorsChest_Proxy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C.ExecuteUbergraph_BP_BaseLockableCollectorsChest_Proxy");

	ABP_BaseLockableCollectorsChest_Proxy_C_ExecuteUbergraph_BP_BaseLockableCollectorsChest_Proxy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
