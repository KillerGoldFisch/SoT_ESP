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

// Function Fire.FlammableComponent.OnRep_OnFire
// (Final, Native, Protected)

void UFlammableComponent::OnRep_OnFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fire.FlammableComponent.OnRep_OnFire");

	UFlammableComponent_OnRep_OnFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fire.FlammableComponent.Multicast_NotifyExtinguished_RPC
// (Net, Native, Event, NetMulticast, Protected, HasDefaults)
// Parameters:
// struct FVector                 InExtinguishLocationWS         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UFlammableComponent::Multicast_NotifyExtinguished_RPC(const struct FVector& InExtinguishLocationWS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fire.FlammableComponent.Multicast_NotifyExtinguished_RPC");

	UFlammableComponent_Multicast_NotifyExtinguished_RPC_Params params;
	params.InExtinguishLocationWS = InExtinguishLocationWS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fire.FlammableComponent.IncrementFireSource
// (Native, Public, BlueprintCallable)

void UFlammableComponent::IncrementFireSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fire.FlammableComponent.IncrementFireSource");

	UFlammableComponent_IncrementFireSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fire.FlammableComponent.DecrementFireSource
// (Native, Public, BlueprintCallable)

void UFlammableComponent::DecrementFireSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fire.FlammableComponent.DecrementFireSource");

	UFlammableComponent_DecrementFireSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fire.FlammableInterface.IncrementFireSource
// (Native, Public, BlueprintCallable)

void UFlammableInterface::IncrementFireSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fire.FlammableInterface.IncrementFireSource");

	UFlammableInterface_IncrementFireSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fire.FlammableInterface.DecrementFireSource
// (Native, Public, BlueprintCallable)

void UFlammableInterface::DecrementFireSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fire.FlammableInterface.DecrementFireSource");

	UFlammableInterface_DecrementFireSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fire.FirePropagationInterface.SetAllCellsState
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFireCellState>    State                          (Parm, ZeroConstructor, IsPlainOldData)

void UFirePropagationInterface::SetAllCellsState(TEnumAsByte<EFireCellState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fire.FirePropagationInterface.SetAllCellsState");

	UFirePropagationInterface_SetAllCellsState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fire.ShipFirePropagationComponent.OnRep_CellData
// (Final, Native, Private)

void UShipFirePropagationComponent::OnRep_CellData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fire.ShipFirePropagationComponent.OnRep_CellData");

	UShipFirePropagationComponent_OnRep_CellData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fire.ShipFirePropagationComponent.OnRep_CellCharringData
// (Final, Native, Private)

void UShipFirePropagationComponent::OnRep_CellCharringData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fire.ShipFirePropagationComponent.OnRep_CellCharringData");

	UShipFirePropagationComponent_OnRep_CellCharringData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
