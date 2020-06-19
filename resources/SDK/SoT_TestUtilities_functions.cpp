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

// Function TestUtilities.DelegateTester.Callback
// (Final, RequiredAPI, Native, Public)

void UDelegateTester::Callback()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestUtilities.DelegateTester.Callback");

	UDelegateTester_Callback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TestUtilities.TestPrimitiveComponent.GetCollisionObjectType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECollisionChannel> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECollisionChannel> UTestPrimitiveComponent::GetCollisionObjectType()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestUtilities.TestPrimitiveComponent.GetCollisionObjectType");

	UTestPrimitiveComponent_GetCollisionObjectType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TestUtilities.TestStaticMeshComponent.AddForce
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Force                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)

void UTestStaticMeshComponent::AddForce(const struct FVector& Force, const struct FName& BoneName, bool bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestUtilities.TestStaticMeshComponent.AddForce");

	UTestStaticMeshComponent_AddForce_Params params;
	params.Force = Force;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
