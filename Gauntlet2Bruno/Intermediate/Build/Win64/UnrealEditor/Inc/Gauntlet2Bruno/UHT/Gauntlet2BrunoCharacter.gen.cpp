// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gauntlet2BrunoCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGauntlet2BrunoCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAUNTLET2BRUNO_API UClass* Z_Construct_UClass_AGauntlet2BrunoCharacter();
GAUNTLET2BRUNO_API UClass* Z_Construct_UClass_AGauntlet2BrunoCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Gauntlet2Bruno();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGauntlet2BrunoCharacter Function DoJumpEnd ******************************
struct Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoJumpEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump pressed inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "Gauntlet2BrunoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump pressed inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoJumpEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGauntlet2BrunoCharacter, nullptr, "DoJumpEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoJumpEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoJumpEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoJumpEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoJumpEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGauntlet2BrunoCharacter::execDoJumpEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpEnd();
	P_NATIVE_END;
}
// ********** End Class AGauntlet2BrunoCharacter Function DoJumpEnd ********************************

// ********** Begin Class AGauntlet2BrunoCharacter Function DoJumpStart ****************************
struct Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoJumpStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump pressed inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "Gauntlet2BrunoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump pressed inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoJumpStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGauntlet2BrunoCharacter, nullptr, "DoJumpStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoJumpStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoJumpStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoJumpStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoJumpStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGauntlet2BrunoCharacter::execDoJumpStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpStart();
	P_NATIVE_END;
}
// ********** End Class AGauntlet2BrunoCharacter Function DoJumpStart ******************************

// ********** Begin Class AGauntlet2BrunoCharacter Function DoLook *********************************
struct Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoLook_Statics
{
	struct Gauntlet2BrunoCharacter_eventDoLook_Parms
	{
		float Yaw;
		float Pitch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles look inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "Gauntlet2BrunoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles look inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoLook_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Gauntlet2BrunoCharacter_eventDoLook_Parms, Yaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoLook_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Gauntlet2BrunoCharacter_eventDoLook_Parms, Pitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoLook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoLook_Statics::NewProp_Yaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoLook_Statics::NewProp_Pitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoLook_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoLook_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGauntlet2BrunoCharacter, nullptr, "DoLook", Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoLook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoLook_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoLook_Statics::Gauntlet2BrunoCharacter_eventDoLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoLook_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoLook_Statics::Gauntlet2BrunoCharacter_eventDoLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoLook()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoLook_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGauntlet2BrunoCharacter::execDoLook)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoLook(Z_Param_Yaw,Z_Param_Pitch);
	P_NATIVE_END;
}
// ********** End Class AGauntlet2BrunoCharacter Function DoLook ***********************************

// ********** Begin Class AGauntlet2BrunoCharacter Function DoMove *********************************
struct Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoMove_Statics
{
	struct Gauntlet2BrunoCharacter_eventDoMove_Parms
	{
		float Right;
		float Forward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles move inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "Gauntlet2BrunoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles move inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoMove_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Gauntlet2BrunoCharacter_eventDoMove_Parms, Right), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoMove_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Gauntlet2BrunoCharacter_eventDoMove_Parms, Forward), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoMove_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoMove_Statics::NewProp_Forward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGauntlet2BrunoCharacter, nullptr, "DoMove", Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoMove_Statics::Gauntlet2BrunoCharacter_eventDoMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoMove_Statics::Gauntlet2BrunoCharacter_eventDoMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGauntlet2BrunoCharacter::execDoMove)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Right);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Forward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoMove(Z_Param_Right,Z_Param_Forward);
	P_NATIVE_END;
}
// ********** End Class AGauntlet2BrunoCharacter Function DoMove ***********************************

// ********** Begin Class AGauntlet2BrunoCharacter *************************************************
void AGauntlet2BrunoCharacter::StaticRegisterNativesAGauntlet2BrunoCharacter()
{
	UClass* Class = AGauntlet2BrunoCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoJumpEnd", &AGauntlet2BrunoCharacter::execDoJumpEnd },
		{ "DoJumpStart", &AGauntlet2BrunoCharacter::execDoJumpStart },
		{ "DoLook", &AGauntlet2BrunoCharacter::execDoLook },
		{ "DoMove", &AGauntlet2BrunoCharacter::execDoMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGauntlet2BrunoCharacter;
UClass* AGauntlet2BrunoCharacter::GetPrivateStaticClass()
{
	using TClass = AGauntlet2BrunoCharacter;
	if (!Z_Registration_Info_UClass_AGauntlet2BrunoCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Gauntlet2BrunoCharacter"),
			Z_Registration_Info_UClass_AGauntlet2BrunoCharacter.InnerSingleton,
			StaticRegisterNativesAGauntlet2BrunoCharacter,
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
	return Z_Registration_Info_UClass_AGauntlet2BrunoCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AGauntlet2BrunoCharacter_NoRegister()
{
	return AGauntlet2BrunoCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGauntlet2BrunoCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A simple player-controllable third person character\n *  Implements a controllable orbiting camera\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Gauntlet2BrunoCharacter.h" },
		{ "ModuleRelativePath", "Gauntlet2BrunoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simple player-controllable third person character\nImplements a controllable orbiting camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gauntlet2BrunoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gauntlet2BrunoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Gauntlet2BrunoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "Gauntlet2BrunoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Gauntlet2BrunoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseLookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mouse Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Gauntlet2BrunoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mouse Look Input Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseLookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoJumpEnd, "DoJumpEnd" }, // 3139812126
		{ &Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoJumpStart, "DoJumpStart" }, // 4276594112
		{ &Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoLook, "DoLook" }, // 3735341159
		{ &Z_Construct_UFunction_AGauntlet2BrunoCharacter_DoMove, "DoMove" }, // 3926276911
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGauntlet2BrunoCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGauntlet2BrunoCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGauntlet2BrunoCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGauntlet2BrunoCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGauntlet2BrunoCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGauntlet2BrunoCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGauntlet2BrunoCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGauntlet2BrunoCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGauntlet2BrunoCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGauntlet2BrunoCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGauntlet2BrunoCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGauntlet2BrunoCharacter_Statics::NewProp_MouseLookAction = { "MouseLookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGauntlet2BrunoCharacter, MouseLookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseLookAction_MetaData), NewProp_MouseLookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGauntlet2BrunoCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGauntlet2BrunoCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGauntlet2BrunoCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGauntlet2BrunoCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGauntlet2BrunoCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGauntlet2BrunoCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGauntlet2BrunoCharacter_Statics::NewProp_MouseLookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGauntlet2BrunoCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGauntlet2BrunoCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Gauntlet2Bruno,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGauntlet2BrunoCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGauntlet2BrunoCharacter_Statics::ClassParams = {
	&AGauntlet2BrunoCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGauntlet2BrunoCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGauntlet2BrunoCharacter_Statics::PropPointers),
	0,
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGauntlet2BrunoCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGauntlet2BrunoCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGauntlet2BrunoCharacter()
{
	if (!Z_Registration_Info_UClass_AGauntlet2BrunoCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGauntlet2BrunoCharacter.OuterSingleton, Z_Construct_UClass_AGauntlet2BrunoCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGauntlet2BrunoCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGauntlet2BrunoCharacter);
AGauntlet2BrunoCharacter::~AGauntlet2BrunoCharacter() {}
// ********** End Class AGauntlet2BrunoCharacter ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Gauntlet2BrunoCharacter_h__Script_Gauntlet2Bruno_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGauntlet2BrunoCharacter, AGauntlet2BrunoCharacter::StaticClass, TEXT("AGauntlet2BrunoCharacter"), &Z_Registration_Info_UClass_AGauntlet2BrunoCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGauntlet2BrunoCharacter), 3530327021U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Gauntlet2BrunoCharacter_h__Script_Gauntlet2Bruno_4243771266(TEXT("/Script/Gauntlet2Bruno"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Gauntlet2BrunoCharacter_h__Script_Gauntlet2Bruno_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_Fork_TheGauntlet2Bruno_Gauntlet2Bruno_Source_Gauntlet2Bruno_Gauntlet2BrunoCharacter_h__Script_Gauntlet2Bruno_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
