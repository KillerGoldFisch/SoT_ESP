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

// Enum ServiceHttp.EServiceHttpMetricsLevel
enum class EServiceHttpMetricsLevel : uint8_t
{
	None                           = 0,
	Failed                         = 1,
	All                            = 2,
	EServiceHttpMetricsLevel_MAX   = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
