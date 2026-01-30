// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuestSubsystem.h"

#ifdef GAUNTLET2BRUNO_QuestSubsystem_generated_h
#error "QuestSubsystem.generated.h already included, missing '#pragma once' in QuestSubsystem.h"
#endif
#define GAUNTLET2BRUNO_QuestSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UNiagaraSystem;
class USoundBase;
struct FQuestData;

// ********** Begin ScriptStruct FQuestData ********************************************************
#define FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_QuestSubsystem_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FQuestData;
// ********** End ScriptStruct FQuestData **********************************************************

// ********** Begin Class UQuestSubsystem **********************************************************
#define FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_QuestSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCompleteQuest); \
	DECLARE_FUNCTION(execGetQuestVFX); \
	DECLARE_FUNCTION(execGetQuestSFX); \
	DECLARE_FUNCTION(execGetQuest); \
	DECLARE_FUNCTION(execAddQuest); \
	DECLARE_FUNCTION(execLoadFromTable);


GAUNTLET2BRUNO_API UClass* Z_Construct_UClass_UQuestSubsystem_NoRegister();

#define FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_QuestSubsystem_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestSubsystem(); \
	friend struct Z_Construct_UClass_UQuestSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAUNTLET2BRUNO_API UClass* Z_Construct_UClass_UQuestSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UQuestSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Gauntlet2Bruno"), Z_Construct_UClass_UQuestSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UQuestSubsystem)


#define FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_QuestSubsystem_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UQuestSubsystem(UQuestSubsystem&&) = delete; \
	UQuestSubsystem(const UQuestSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestSubsystem) \
	NO_API virtual ~UQuestSubsystem();


#define FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_QuestSubsystem_h_35_PROLOG
#define FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_QuestSubsystem_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_QuestSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_QuestSubsystem_h_38_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_QuestSubsystem_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UQuestSubsystem;

// ********** End Class UQuestSubsystem ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_QuestSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
