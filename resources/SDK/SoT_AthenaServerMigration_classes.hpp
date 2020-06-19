#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaServerMigration.MigrationServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UMigrationServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaServerMigration.MigrationServiceInterface");
		return ptr;
	}

};


// Class AthenaServerMigration.ServerMigrationGatherableActorInterface
// 0x0000 (0x0028 - 0x0028)
class UServerMigrationGatherableActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaServerMigration.ServerMigrationGatherableActorInterface");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
