// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UQuestSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUQuestSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
GAUNTLET2BRUNO_API UClass* Z_Construct_UClass_UQuestSubsystem();
GAUNTLET2BRUNO_API UClass* Z_Construct_UClass_UQuestSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Gauntlet2Bruno();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UQuestSubsystem Function CompleteQuest ***********************************
struct Z_Construct_UFunction_UQuestSubsystem_CompleteQuest_Statics
{
	struct QuestSubsystem_eventCompleteQuest_Parms
	{
		FName QuestRowName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UQuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestRowName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuestSubsystem_CompleteQuest_Statics::NewProp_QuestRowName = { "QuestRowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestSubsystem_eventCompleteQuest_Parms, QuestRowName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestSubsystem_CompleteQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSubsystem_CompleteQuest_Statics::NewProp_QuestRowName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubsystem_CompleteQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestSubsystem_CompleteQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestSubsystem, nullptr, "CompleteQuest", Z_Construct_UFunction_UQuestSubsystem_CompleteQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubsystem_CompleteQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestSubsystem_CompleteQuest_Statics::QuestSubsystem_eventCompleteQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubsystem_CompleteQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestSubsystem_CompleteQuest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestSubsystem_CompleteQuest_Statics::QuestSubsystem_eventCompleteQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestSubsystem_CompleteQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestSubsystem_CompleteQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestSubsystem::execCompleteQuest)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_QuestRowName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CompleteQuest(Z_Param_QuestRowName);
	P_NATIVE_END;
}
// ********** End Class UQuestSubsystem Function CompleteQuest *************************************

// ********** Begin Class UQuestSubsystem Function LoadQuest ***************************************
struct Z_Construct_UFunction_UQuestSubsystem_LoadQuest_Statics
{
	struct QuestSubsystem_eventLoadQuest_Parms
	{
		FName QuestRowName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UQuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestRowName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuestSubsystem_LoadQuest_Statics::NewProp_QuestRowName = { "QuestRowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestSubsystem_eventLoadQuest_Parms, QuestRowName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestSubsystem_LoadQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSubsystem_LoadQuest_Statics::NewProp_QuestRowName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubsystem_LoadQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestSubsystem_LoadQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestSubsystem, nullptr, "LoadQuest", Z_Construct_UFunction_UQuestSubsystem_LoadQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubsystem_LoadQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestSubsystem_LoadQuest_Statics::QuestSubsystem_eventLoadQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubsystem_LoadQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestSubsystem_LoadQuest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestSubsystem_LoadQuest_Statics::QuestSubsystem_eventLoadQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestSubsystem_LoadQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestSubsystem_LoadQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestSubsystem::execLoadQuest)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_QuestRowName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadQuest(Z_Param_QuestRowName);
	P_NATIVE_END;
}
// ********** End Class UQuestSubsystem Function LoadQuest *****************************************

// ********** Begin Class UQuestSubsystem **********************************************************
void UQuestSubsystem::StaticRegisterNativesUQuestSubsystem()
{
	UClass* Class = UQuestSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CompleteQuest", &UQuestSubsystem::execCompleteQuest },
		{ "LoadQuest", &UQuestSubsystem::execLoadQuest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UQuestSubsystem;
UClass* UQuestSubsystem::GetPrivateStaticClass()
{
	using TClass = UQuestSubsystem;
	if (!Z_Registration_Info_UClass_UQuestSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("QuestSubsystem"),
			Z_Registration_Info_UClass_UQuestSubsystem.InnerSingleton,
			StaticRegisterNativesUQuestSubsystem,
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
	return Z_Registration_Info_UClass_UQuestSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UQuestSubsystem_NoRegister()
{
	return UQuestSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UQuestSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UQuestSubsystem.h" },
		{ "ModuleRelativePath", "Public/UQuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestDataTable_MetaData[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/UQuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestDataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestSubsystem_CompleteQuest, "CompleteQuest" }, // 3960672442
		{ &Z_Construct_UFunction_UQuestSubsystem_LoadQuest, "LoadQuest" }, // 3258202495
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestSubsystem_Statics::NewProp_QuestDataTable = { "QuestDataTable", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestSubsystem, QuestDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDataTable_MetaData), NewProp_QuestDataTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSubsystem_Statics::NewProp_QuestDataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Gauntlet2Bruno,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestSubsystem_Statics::ClassParams = {
	&UQuestSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UQuestSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestSubsystem()
{
	if (!Z_Registration_Info_UClass_UQuestSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestSubsystem.OuterSingleton, Z_Construct_UClass_UQuestSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestSubsystem.OuterSingleton;
}
UQuestSubsystem::UQuestSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestSubsystem);
UQuestSubsystem::~UQuestSubsystem() {}
// ********** End Class UQuestSubsystem ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_UQuestSubsystem_h__Script_Gauntlet2Bruno_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestSubsystem, UQuestSubsystem::StaticClass, TEXT("UQuestSubsystem"), &Z_Registration_Info_UClass_UQuestSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestSubsystem), 1114735274U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_UQuestSubsystem_h__Script_Gauntlet2Bruno_233081470(TEXT("/Script/Gauntlet2Bruno"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_UQuestSubsystem_h__Script_Gauntlet2Bruno_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_UQuestSubsystem_h__Script_Gauntlet2Bruno_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
