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

// Function BP_Snake.BP_Snake_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Snake_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Snake.BP_Snake_C.UserConstructionScript");

	ABP_Snake_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Snake.BP_Snake_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Snake_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Snake.BP_Snake_C.ReceiveBeginPlay");

	ABP_Snake_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Snake.BP_Snake_C.OnAgitatedDirected
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 SourceLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Direction                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  Crate                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Snake_C::OnAgitatedDirected(const struct FVector& SourceLocation, const struct FVector& Direction, class AActor* Crate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Snake.BP_Snake_C.OnAgitatedDirected");

	ABP_Snake_C_OnAgitatedDirected_Params params;
	params.SourceLocation = SourceLocation;
	params.Direction = Direction;
	params.Crate = Crate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Snake.BP_Snake_C.ExecuteUbergraph_BP_Snake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Snake_C::ExecuteUbergraph_BP_Snake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Snake.BP_Snake_C.ExecuteUbergraph_BP_Snake");

	ABP_Snake_C_ExecuteUbergraph_BP_Snake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
