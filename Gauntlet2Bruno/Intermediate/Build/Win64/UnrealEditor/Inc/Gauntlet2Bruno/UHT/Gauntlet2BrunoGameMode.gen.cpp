// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gauntlet2BrunoGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGauntlet2BrunoGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GAUNTLET2BRUNO_API UClass* Z_Construct_UClass_AGauntlet2BrunoGameMode();
GAUNTLET2BRUNO_API UClass* Z_Construct_UClass_AGauntlet2BrunoGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Gauntlet2Bruno();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGauntlet2BrunoGameMode **************************************************
void AGauntlet2BrunoGameMode::StaticRegisterNativesAGauntlet2BrunoGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGauntlet2BrunoGameMode;
UClass* AGauntlet2BrunoGameMode::GetPrivateStaticClass()
{
	using TClass = AGauntlet2BrunoGameMode;
	if (!Z_Registration_Info_UClass_AGauntlet2BrunoGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Gauntlet2BrunoGameMode"),
			Z_Registration_Info_UClass_AGauntlet2BrunoGameMode.InnerSingleton,
			StaticRegisterNativesAGauntlet2BrunoGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AGauntlet2BrunoGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AGauntlet2BrunoGameMode_NoRegister()
{
	return AGauntlet2BrunoGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGauntlet2BrunoGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Gauntlet2BrunoGameMode.h" },
		{ "ModuleRelativePath", "Gauntlet2BrunoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGauntlet2BrunoGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGauntlet2BrunoGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Gauntlet2Bruno,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGauntlet2BrunoGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGauntlet2BrunoGameMode_Statics::ClassParams = {
	&AGauntlet2BrunoGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGauntlet2BrunoGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGauntlet2BrunoGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGauntlet2BrunoGameMode()
{
	if (!Z_Registration_Info_UClass_AGauntlet2BrunoGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGauntlet2BrunoGameMode.OuterSingleton, Z_Construct_UClass_AGauntlet2BrunoGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGauntlet2BrunoGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGauntlet2BrunoGameMode);
AGauntlet2BrunoGameMode::~AGauntlet2BrunoGameMode() {}
// ********** End Class AGauntlet2BrunoGameMode ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Gauntlet2BrunoGameMode_h__Script_Gauntlet2Bruno_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGauntlet2BrunoGameMode, AGauntlet2BrunoGameMode::StaticClass, TEXT("AGauntlet2BrunoGameMode"), &Z_Registration_Info_UClass_AGauntlet2BrunoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGauntlet2BrunoGameMode), 1105279127U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Gauntlet2BrunoGameMode_h__Script_Gauntlet2Bruno_2080082181(TEXT("/Script/Gauntlet2Bruno"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Gauntlet2BrunoGameMode_h__Script_Gauntlet2Bruno_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Gauntlet2BrunoGameMode_h__Script_Gauntlet2Bruno_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
