// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeQuestSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAUNTLET2BRUNO_API UClass* Z_Construct_UClass_UQuestSubsystem();
GAUNTLET2BRUNO_API UClass* Z_Construct_UClass_UQuestSubsystem_NoRegister();
GAUNTLET2BRUNO_API UScriptStruct* Z_Construct_UScriptStruct_FQuestData();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Gauntlet2Bruno();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FQuestData ********************************************************
static_assert(std::is_polymorphic<FQuestData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FQuestData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FQuestData;
class UScriptStruct* FQuestData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FQuestData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FQuestData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestData, (UObject*)Z_Construct_UPackage__Script_Gauntlet2Bruno(), TEXT("QuestData"));
	}
	return Z_Registration_Info_UScriptStruct_FQuestData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FQuestData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestVFX_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/QuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestSFX_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/QuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Public/QuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCompleted_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Public/QuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProgress_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Public/QuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetProgress_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Public/QuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_QuestVFX;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_QuestSFX;
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestID;
	static void NewProp_bIsCompleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCompleted;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestVFX = { "QuestVFX", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, QuestVFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestVFX_MetaData), NewProp_QuestVFX_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestSFX = { "QuestSFX", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, QuestSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestSFX_MetaData), NewProp_QuestSFX_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, QuestID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestID_MetaData), NewProp_QuestID_MetaData) };
void Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_bIsCompleted_SetBit(void* Obj)
{
	((FQuestData*)Obj)->bIsCompleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_bIsCompleted = { "bIsCompleted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuestData), &Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_bIsCompleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCompleted_MetaData), NewProp_bIsCompleted_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, CurrentProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentProgress_MetaData), NewProp_CurrentProgress_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_TargetProgress = { "TargetProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, TargetProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetProgress_MetaData), NewProp_TargetProgress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestSFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_bIsCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_CurrentProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_TargetProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Gauntlet2Bruno,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"QuestData",
	Z_Construct_UScriptStruct_FQuestData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestData_Statics::PropPointers),
	sizeof(FQuestData),
	alignof(FQuestData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuestData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuestData()
{
	if (!Z_Registration_Info_UScriptStruct_FQuestData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FQuestData.InnerSingleton, Z_Construct_UScriptStruct_FQuestData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FQuestData.InnerSingleton;
}
// ********** End ScriptStruct FQuestData **********************************************************

// ********** Begin Class UQuestSubsystem Function AddQuest ****************************************
struct Z_Construct_UFunction_UQuestSubsystem_AddQuest_Statics
{
	struct QuestSubsystem_eventAddQuest_Parms
	{
		FQuestData NewQuest;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/QuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewQuest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewQuest;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestSubsystem_AddQuest_Statics::NewProp_NewQuest = { "NewQuest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestSubsystem_eventAddQuest_Parms, NewQuest), Z_Construct_UScriptStruct_FQuestData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewQuest_MetaData), NewProp_NewQuest_MetaData) }; // 3215515568
void Z_Construct_UFunction_UQuestSubsystem_AddQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((QuestSubsystem_eventAddQuest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestSubsystem_AddQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuestSubsystem_eventAddQuest_Parms), &Z_Construct_UFunction_UQuestSubsystem_AddQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestSubsystem_AddQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSubsystem_AddQuest_Statics::NewProp_NewQuest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSubsystem_AddQuest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubsystem_AddQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestSubsystem_AddQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestSubsystem, nullptr, "AddQuest", Z_Construct_UFunction_UQuestSubsystem_AddQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubsystem_AddQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestSubsystem_AddQuest_Statics::QuestSubsystem_eventAddQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubsystem_AddQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestSubsystem_AddQuest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestSubsystem_AddQuest_Statics::QuestSubsystem_eventAddQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestSubsystem_AddQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestSubsystem_AddQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestSubsystem::execAddQuest)
{
	P_GET_STRUCT_REF(FQuestData,Z_Param_Out_NewQuest);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddQuest(Z_Param_Out_NewQuest);
	P_NATIVE_END;
}
// ********** End Class UQuestSubsystem Function AddQuest ******************************************

// ********** Begin Class UQuestSubsystem Function CompleteQuest ***********************************
struct Z_Construct_UFunction_UQuestSubsystem_CompleteQuest_Statics
{
	struct QuestSubsystem_eventCompleteQuest_Parms
	{
		FName QuestID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/QuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuestSubsystem_CompleteQuest_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestSubsystem_eventCompleteQuest_Parms, QuestID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UQuestSubsystem_CompleteQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((QuestSubsystem_eventCompleteQuest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestSubsystem_CompleteQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuestSubsystem_eventCompleteQuest_Parms), &Z_Construct_UFunction_UQuestSubsystem_CompleteQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestSubsystem_CompleteQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSubsystem_CompleteQuest_Statics::NewProp_QuestID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSubsystem_CompleteQuest_Statics::NewProp_ReturnValue,
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
	P_GET_PROPERTY(FNameProperty,Z_Param_QuestID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CompleteQuest(Z_Param_QuestID);
	P_NATIVE_END;
}
// ********** End Class UQuestSubsystem Function CompleteQuest *************************************

// ********** Begin Class UQuestSubsystem Function GetQuest ****************************************
struct Z_Construct_UFunction_UQuestSubsystem_GetQuest_Statics
{
	struct QuestSubsystem_eventGetQuest_Parms
	{
		FName QuestID;
		FQuestData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/QuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuestSubsystem_GetQuest_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestSubsystem_eventGetQuest_Parms, QuestID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestSubsystem_GetQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestSubsystem_eventGetQuest_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuestData, METADATA_PARAMS(0, nullptr) }; // 3215515568
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestSubsystem_GetQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSubsystem_GetQuest_Statics::NewProp_QuestID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSubsystem_GetQuest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubsystem_GetQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestSubsystem_GetQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestSubsystem, nullptr, "GetQuest", Z_Construct_UFunction_UQuestSubsystem_GetQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubsystem_GetQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestSubsystem_GetQuest_Statics::QuestSubsystem_eventGetQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubsystem_GetQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestSubsystem_GetQuest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestSubsystem_GetQuest_Statics::QuestSubsystem_eventGetQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestSubsystem_GetQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestSubsystem_GetQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestSubsystem::execGetQuest)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_QuestID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQuestData*)Z_Param__Result=P_THIS->GetQuest(Z_Param_QuestID);
	P_NATIVE_END;
}
// ********** End Class UQuestSubsystem Function GetQuest ******************************************

// ********** Begin Class UQuestSubsystem Function GetQuestSFX *************************************
struct Z_Construct_UFunction_UQuestSubsystem_GetQuestSFX_Statics
{
	struct QuestSubsystem_eventGetQuestSFX_Parms
	{
		FQuestData Quest;
		TSoftObjectPtr<USoundBase> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/QuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestSubsystem_GetQuestSFX_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestSubsystem_eventGetQuestSFX_Parms, Quest), Z_Construct_UScriptStruct_FQuestData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) }; // 3215515568
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestSubsystem_GetQuestSFX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestSubsystem_eventGetQuestSFX_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestSubsystem_GetQuestSFX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSubsystem_GetQuestSFX_Statics::NewProp_Quest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSubsystem_GetQuestSFX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubsystem_GetQuestSFX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestSubsystem_GetQuestSFX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestSubsystem, nullptr, "GetQuestSFX", Z_Construct_UFunction_UQuestSubsystem_GetQuestSFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubsystem_GetQuestSFX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestSubsystem_GetQuestSFX_Statics::QuestSubsystem_eventGetQuestSFX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubsystem_GetQuestSFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestSubsystem_GetQuestSFX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestSubsystem_GetQuestSFX_Statics::QuestSubsystem_eventGetQuestSFX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestSubsystem_GetQuestSFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestSubsystem_GetQuestSFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestSubsystem::execGetQuestSFX)
{
	P_GET_STRUCT_REF(FQuestData,Z_Param_Out_Quest);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftObjectPtr<USoundBase>*)Z_Param__Result=P_THIS->GetQuestSFX(Z_Param_Out_Quest);
	P_NATIVE_END;
}
// ********** End Class UQuestSubsystem Function GetQuestSFX ***************************************

// ********** Begin Class UQuestSubsystem Function GetQuestVFX *************************************
struct Z_Construct_UFunction_UQuestSubsystem_GetQuestVFX_Statics
{
	struct QuestSubsystem_eventGetQuestVFX_Parms
	{
		FQuestData Quest;
		TSoftObjectPtr<UNiagaraSystem> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/QuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestSubsystem_GetQuestVFX_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestSubsystem_eventGetQuestVFX_Parms, Quest), Z_Construct_UScriptStruct_FQuestData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) }; // 3215515568
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestSubsystem_GetQuestVFX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestSubsystem_eventGetQuestVFX_Parms, ReturnValue), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestSubsystem_GetQuestVFX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSubsystem_GetQuestVFX_Statics::NewProp_Quest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSubsystem_GetQuestVFX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubsystem_GetQuestVFX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestSubsystem_GetQuestVFX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestSubsystem, nullptr, "GetQuestVFX", Z_Construct_UFunction_UQuestSubsystem_GetQuestVFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubsystem_GetQuestVFX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestSubsystem_GetQuestVFX_Statics::QuestSubsystem_eventGetQuestVFX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubsystem_GetQuestVFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestSubsystem_GetQuestVFX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestSubsystem_GetQuestVFX_Statics::QuestSubsystem_eventGetQuestVFX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestSubsystem_GetQuestVFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestSubsystem_GetQuestVFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestSubsystem::execGetQuestVFX)
{
	P_GET_STRUCT_REF(FQuestData,Z_Param_Out_Quest);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftObjectPtr<UNiagaraSystem>*)Z_Param__Result=P_THIS->GetQuestVFX(Z_Param_Out_Quest);
	P_NATIVE_END;
}
// ********** End Class UQuestSubsystem Function GetQuestVFX ***************************************

// ********** Begin Class UQuestSubsystem Function LoadFromTable ***********************************
struct Z_Construct_UFunction_UQuestSubsystem_LoadFromTable_Statics
{
	struct QuestSubsystem_eventLoadFromTable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/QuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UQuestSubsystem_LoadFromTable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((QuestSubsystem_eventLoadFromTable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestSubsystem_LoadFromTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuestSubsystem_eventLoadFromTable_Parms), &Z_Construct_UFunction_UQuestSubsystem_LoadFromTable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestSubsystem_LoadFromTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSubsystem_LoadFromTable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubsystem_LoadFromTable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestSubsystem_LoadFromTable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestSubsystem, nullptr, "LoadFromTable", Z_Construct_UFunction_UQuestSubsystem_LoadFromTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubsystem_LoadFromTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestSubsystem_LoadFromTable_Statics::QuestSubsystem_eventLoadFromTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubsystem_LoadFromTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestSubsystem_LoadFromTable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestSubsystem_LoadFromTable_Statics::QuestSubsystem_eventLoadFromTable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestSubsystem_LoadFromTable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestSubsystem_LoadFromTable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestSubsystem::execLoadFromTable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadFromTable();
	P_NATIVE_END;
}
// ********** End Class UQuestSubsystem Function LoadFromTable *************************************

// ********** Begin Class UQuestSubsystem **********************************************************
void UQuestSubsystem::StaticRegisterNativesUQuestSubsystem()
{
	UClass* Class = UQuestSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddQuest", &UQuestSubsystem::execAddQuest },
		{ "CompleteQuest", &UQuestSubsystem::execCompleteQuest },
		{ "GetQuest", &UQuestSubsystem::execGetQuest },
		{ "GetQuestSFX", &UQuestSubsystem::execGetQuestSFX },
		{ "GetQuestVFX", &UQuestSubsystem::execGetQuestVFX },
		{ "LoadFromTable", &UQuestSubsystem::execLoadFromTable },
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
		{ "IncludePath", "QuestSubsystem.h" },
		{ "ModuleRelativePath", "Public/QuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestDataTable_MetaData[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/QuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveQuests_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestDataTable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveQuests_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActiveQuests_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ActiveQuests;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestSubsystem_AddQuest, "AddQuest" }, // 4144166728
		{ &Z_Construct_UFunction_UQuestSubsystem_CompleteQuest, "CompleteQuest" }, // 3485232905
		{ &Z_Construct_UFunction_UQuestSubsystem_GetQuest, "GetQuest" }, // 516165262
		{ &Z_Construct_UFunction_UQuestSubsystem_GetQuestSFX, "GetQuestSFX" }, // 1905422779
		{ &Z_Construct_UFunction_UQuestSubsystem_GetQuestVFX, "GetQuestVFX" }, // 3160392802
		{ &Z_Construct_UFunction_UQuestSubsystem_LoadFromTable, "LoadFromTable" }, // 3443174685
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestSubsystem_Statics::NewProp_QuestDataTable = { "QuestDataTable", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestSubsystem, QuestDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDataTable_MetaData), NewProp_QuestDataTable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestSubsystem_Statics::NewProp_ActiveQuests_ValueProp = { "ActiveQuests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FQuestData, METADATA_PARAMS(0, nullptr) }; // 3215515568
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UQuestSubsystem_Statics::NewProp_ActiveQuests_Key_KeyProp = { "ActiveQuests_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UQuestSubsystem_Statics::NewProp_ActiveQuests = { "ActiveQuests", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestSubsystem, ActiveQuests), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveQuests_MetaData), NewProp_ActiveQuests_MetaData) }; // 3215515568
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSubsystem_Statics::NewProp_QuestDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSubsystem_Statics::NewProp_ActiveQuests_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSubsystem_Statics::NewProp_ActiveQuests_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSubsystem_Statics::NewProp_ActiveQuests,
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
struct Z_CompiledInDeferFile_FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_QuestSubsystem_h__Script_Gauntlet2Bruno_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FQuestData::StaticStruct, Z_Construct_UScriptStruct_FQuestData_Statics::NewStructOps, TEXT("QuestData"), &Z_Registration_Info_UScriptStruct_FQuestData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestData), 3215515568U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestSubsystem, UQuestSubsystem::StaticClass, TEXT("UQuestSubsystem"), &Z_Registration_Info_UClass_UQuestSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestSubsystem), 214168990U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_QuestSubsystem_h__Script_Gauntlet2Bruno_73710413(TEXT("/Script/Gauntlet2Bruno"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_QuestSubsystem_h__Script_Gauntlet2Bruno_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_QuestSubsystem_h__Script_Gauntlet2Bruno_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_QuestSubsystem_h__Script_Gauntlet2Bruno_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_QuestSubsystem_h__Script_Gauntlet2Bruno_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
