// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EstrellaV0_01 : ModuleRules
{
	public EstrellaV0_01(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule" });
    }
}
