// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AZSource01 : ModuleRules
{
	public AZSource01(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		OptimizeCode = CodeOptimization.Never;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}