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

// Enum Occlusion.EOcclusionTypes
enum class EOcclusionTypes : uint8_t
{
	Visible                        = 0,
	Occluded                       = 1,
	Unknown                        = 2,
	MAX                            = 3,
	EOcclusionTypes_MAX            = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
