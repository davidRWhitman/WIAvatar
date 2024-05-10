// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class WIAvatar : ModuleRules
{
	public WIAvatar(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
