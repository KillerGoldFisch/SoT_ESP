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

// Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.OnRep_HideWaterOcclusionVolume
struct ABP_CollectorsChest_Proxy_C_OnRep_HideWaterOcclusionVolume_Params
{
};

// Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.IsAttachedToShip
struct ABP_CollectorsChest_Proxy_C_IsAttachedToShip_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.GetClosestInteractionPoint
struct ABP_CollectorsChest_Proxy_C_GetClosestInteractionPoint_Params
{
	struct FVector*                                    ReferencePosition;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              OutInteractionPointRadius;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.UserConstructionScript
struct ABP_CollectorsChest_Proxy_C_UserConstructionScript_Params
{
};

// Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.ReceiveBeginPlay
struct ABP_CollectorsChest_Proxy_C_ReceiveBeginPlay_Params
{
};

// Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.ReceiveEndPlay
struct ABP_CollectorsChest_Proxy_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.ItemDropped
struct ABP_CollectorsChest_Proxy_C_ItemDropped_Params
{
	struct FEventWieldableItemDropped                  EventParam;                                               // (Parm)
};

// Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.ExecuteUbergraph_BP_CollectorsChest_Proxy
struct ABP_CollectorsChest_Proxy_C_ExecuteUbergraph_BP_CollectorsChest_Proxy_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
