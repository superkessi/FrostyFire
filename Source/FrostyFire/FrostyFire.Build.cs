// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FrostyFire : ModuleRules
{
	public FrostyFire(ReadOnlyTargetRules Target) : base(Target)
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
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"FrostyFire",
			"FrostyFire/Variant_Horror",
			"FrostyFire/Variant_Horror/UI",
			"FrostyFire/Variant_Shooter",
			"FrostyFire/Variant_Shooter/AI",
			"FrostyFire/Variant_Shooter/UI",
			"FrostyFire/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
