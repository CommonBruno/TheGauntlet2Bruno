// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGauntlet2Bruno_init() {}
	GAUNTLET2BRUNO_API UFunction* Z_Construct_UDelegateFunction_Gauntlet2Bruno_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Gauntlet2Bruno;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Gauntlet2Bruno()
	{
		if (!Z_Registration_Info_UPackage__Script_Gauntlet2Bruno.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Gauntlet2Bruno_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Gauntlet2Bruno",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC0560145,
				0x75D2ABFB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Gauntlet2Bruno.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Gauntlet2Bruno.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Gauntlet2Bruno(Z_Construct_UPackage__Script_Gauntlet2Bruno, TEXT("/Script/Gauntlet2Bruno"), Z_Registration_Info_UPackage__Script_Gauntlet2Bruno, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC0560145, 0x75D2ABFB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
