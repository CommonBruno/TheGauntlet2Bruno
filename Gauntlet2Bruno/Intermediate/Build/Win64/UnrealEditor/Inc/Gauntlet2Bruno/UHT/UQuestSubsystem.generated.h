// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UQuestSubsystem.h"

#ifdef GAUNTLET2BRUNO_UQuestSubsystem_generated_h
#error "UQuestSubsystem.generated.h already included, missing '#pragma once' in UQuestSubsystem.h"
#endif
#define GAUNTLET2BRUNO_UQuestSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UQuestSubsystem **********************************************************
#define FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_UQuestSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCompleteQuest); \
	DECLARE_FUNCTION(execLoadQuest);


GAUNTLET2BRUNO_API UClass* Z_Construct_UClass_UQuestSubsystem_NoRegister();

#define FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_UQuestSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestSubsystem(); \
	friend struct Z_Construct_UClass_UQuestSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAUNTLET2BRUNO_API UClass* Z_Construct_UClass_UQuestSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UQuestSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Gauntlet2Bruno"), Z_Construct_UClass_UQuestSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UQuestSubsystem)


#define FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_UQuestSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UQuestSubsystem(UQuestSubsystem&&) = delete; \
	UQuestSubsystem(const UQuestSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestSubsystem) \
	NO_API virtual ~UQuestSubsystem();


#define FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_UQuestSubsystem_h_12_PROLOG
#define FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_UQuestSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_UQuestSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_UQuestSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_UQuestSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UQuestSubsystem;

// ********** End Class UQuestSubsystem ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Public_UQuestSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
