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

// Function LiquidContainer.LiquidContainerInterface.SetLiquidLevel
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Level                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULiquidContainerInterface::SetLiquidLevel(float Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerInterface.SetLiquidLevel");

	ULiquidContainerInterface_SetLiquidLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LiquidContainer.LiquidContainerInterface.GetWantedLiquidLevel
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULiquidContainerInterface::GetWantedLiquidLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerInterface.GetWantedLiquidLevel");

	ULiquidContainerInterface_GetWantedLiquidLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiquidContainer.LiquidContainerInterface.GetMaxLiquidCollectionAmount
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULiquidContainerInterface::GetMaxLiquidCollectionAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerInterface.GetMaxLiquidCollectionAmount");

	ULiquidContainerInterface_GetMaxLiquidCollectionAmount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiquidContainer.LiquidContainerInterface.GetLiquidLevel
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULiquidContainerInterface::GetLiquidLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerInterface.GetLiquidLevel");

	ULiquidContainerInterface_GetLiquidLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiquidContainer.LiquidContainerInterface.CollectLiquidAmount
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          DesiredAmount                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULiquidContainerInterface::CollectLiquidAmount(float DesiredAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerInterface.CollectLiquidAmount");

	ULiquidContainerInterface_CollectLiquidAmount_Params params;
	params.DesiredAmount = DesiredAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiquidContainer.LiquidContainerComponent.SetLiquidType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ELiquidType>       LiquidType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULiquidContainerComponent::SetLiquidType(TEnumAsByte<ELiquidType> LiquidType)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerComponent.SetLiquidType");

	ULiquidContainerComponent_SetLiquidType_Params params;
	params.LiquidType = LiquidType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LiquidContainer.LiquidContainerComponent.SetLiquidLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Level                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULiquidContainerComponent::SetLiquidLevel(float Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerComponent.SetLiquidLevel");

	ULiquidContainerComponent_SetLiquidLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LiquidContainer.LiquidContainerComponent.GetLiquidLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULiquidContainerComponent::GetLiquidLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerComponent.GetLiquidLevel");

	ULiquidContainerComponent_GetLiquidLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiquidContainer.LiquidContainerComponent.CollectLiquidMaterials
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMeshComponent*          MeshComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULiquidContainerComponent::CollectLiquidMaterials(class UMeshComponent* MeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerComponent.CollectLiquidMaterials");

	ULiquidContainerComponent_CollectLiquidMaterials_Params params;
	params.MeshComponent = MeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
