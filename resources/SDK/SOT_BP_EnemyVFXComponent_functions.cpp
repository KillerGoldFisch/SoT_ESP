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

// Function BP_EnemyVFXComponent.BP_EnemyVFXComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_EnemyVFXComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemyVFXComponent.BP_EnemyVFXComponent_C.ReceiveBeginPlay");

	UBP_EnemyVFXComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnemyVFXComponent.BP_EnemyVFXComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void UBP_EnemyVFXComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemyVFXComponent.BP_EnemyVFXComponent_C.ReceiveEndPlay");

	UBP_EnemyVFXComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnemyVFXComponent.BP_EnemyVFXComponent_C.ExecuteUbergraph_BP_EnemyVFXComponent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_EnemyVFXComponent_C::ExecuteUbergraph_BP_EnemyVFXComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemyVFXComponent.BP_EnemyVFXComponent_C.ExecuteUbergraph_BP_EnemyVFXComponent");

	UBP_EnemyVFXComponent_C_ExecuteUbergraph_BP_EnemyVFXComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
