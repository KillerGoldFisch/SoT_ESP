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

// Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.StopReaction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_LocalWindGenerator_C::StopReaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.StopReaction");

	ABP_LocalWindGenerator_C_StopReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.ApplyDisturbanceAtCurrentTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTme                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LocalWindGenerator_C::ApplyDisturbanceAtCurrentTime(float DeltaTme)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.ApplyDisturbanceAtCurrentTime");

	ABP_LocalWindGenerator_C_ApplyDisturbanceAtCurrentTime_Params params;
	params.DeltaTme = DeltaTme;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.StartReaction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_LocalWindGenerator_C::StartReaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.StartReaction");

	ABP_LocalWindGenerator_C_StartReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LocalWindGenerator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.UserConstructionScript");

	ABP_LocalWindGenerator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LocalWindGenerator_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.ReceiveTick");

	ABP_LocalWindGenerator_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.ExecuteUbergraph_BP_LocalWindGenerator
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LocalWindGenerator_C::ExecuteUbergraph_BP_LocalWindGenerator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.ExecuteUbergraph_BP_LocalWindGenerator");

	ABP_LocalWindGenerator_C_ExecuteUbergraph_BP_LocalWindGenerator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
