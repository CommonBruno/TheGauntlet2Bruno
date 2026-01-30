// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Gauntlet2Bruno : ModuleRules
{
	public Gauntlet2Bruno(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate", "Niagara", "Niagara"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"Gauntlet2Bruno",
			"Gauntlet2Bruno/Variant_Platforming",
			"Gauntlet2Bruno/Variant_Platforming/Animation",
			"Gauntlet2Bruno/Variant_Combat",
			"Gauntlet2Bruno/Variant_Combat/AI",
			"Gauntlet2Bruno/Variant_Combat/Animation",
			"Gauntlet2Bruno/Variant_Combat/Gameplay",
			"Gauntlet2Bruno/Variant_Combat/Interfaces",
			"Gauntlet2Bruno/Variant_Combat/UI",
			"Gauntlet2Bruno/Variant_SideScrolling",
			"Gauntlet2Bruno/Variant_SideScrolling/AI",
			"Gauntlet2Bruno/Variant_SideScrolling/Gameplay",
			"Gauntlet2Bruno/Variant_SideScrolling/Interfaces",
			"Gauntlet2Bruno/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
