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

// Enum ItemQuality.EEmissaryQualityLevel
enum class EEmissaryQualityLevel : uint8_t
{
	Invalid                        = 0,
	Level1                         = 1,
	Level2                         = 2,
	Level3                         = 3,
	Level4                         = 4,
	Level5                         = 5,
	Level6                         = 6,
	Level7                         = 7,
	Level8                         = 8,
	MAX                            = 9,
	EEmissaryQualityLevel_MAX      = 10
};


// Enum ItemQuality.EHealthIndex
enum class EHealthIndex : uint8_t
{
	DontCare                       = 0,
	Level1                         = 1,
	Level2                         = 2,
	Level3                         = 3,
	Level4                         = 4,
	Level5                         = 5,
	Level6                         = 6,
	Level7                         = 7,
	MAX                            = 8,
	EHealthIndex_MAX               = 9
};


// Enum ItemQuality.EStatusType
enum class EStatusType : uint8_t
{
	DontCare                       = 0,
	Yes                            = 1,
	No                             = 2,
	EStatusType_MAX                = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ItemQuality.PerComanyItemQualityEntry
// 0x0010
struct FPerComanyItemQualityEntry
{
	class UClass*                                      Company;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEmissaryQualityLevel>                 Quality;                                                  // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct ItemQuality.ComplexItemQualityEntry
// 0x0010
struct FComplexItemQualityEntry
{
	TEnumAsByte<EStatusType>                           OnTime;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EHealthIndex>                          HealthLevel;                                              // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EStatusType>                           IsComissioned;                                            // 0x0002(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EStatusType>                           IsStolen;                                                 // 0x0003(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEmissaryQualityLevel>                 QualityLevel;                                             // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FName                                       Rarity;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ItemQuality.PerComanyComplexItemQualityEntry
// 0x0018
struct FPerComanyComplexItemQualityEntry
{
	class UClass*                                      Company;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FComplexItemQualityEntry>            QualityData;                                              // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
