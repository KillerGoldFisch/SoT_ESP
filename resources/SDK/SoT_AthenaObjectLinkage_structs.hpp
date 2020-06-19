#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AthenaObjectLinkage.EAddLinkResult
enum class EAddLinkResult : uint8_t
{
	Success_Set                    = 0,
	Success_Pending                = 1,
	Failed_SourceEndpointIdInvalid = 2,
	Failed_TargetEndpointIdInvalid = 3,
	Failed_CoincidentEndpointIds   = 4,
	Failed_Duplicate               = 5,
	EAddLinkResult_MAX             = 6
};


// Enum AthenaObjectLinkage.EAddEndpointResult
enum class EAddEndpointResult : uint8_t
{
	Success                        = 0,
	Failed_InvalidInstance         = 1,
	Failed_InvalidId               = 2,
	Failed_DuplicateId             = 3,
	Failed_DoesntImplementEndpointInterface = 4,
	EAddEndpointResult_MAX         = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaObjectLinkage.LinkEndpointId
// 0x0008
struct FLinkEndpointId
{
	struct FName                                       Raw;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
