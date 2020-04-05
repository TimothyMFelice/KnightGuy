// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class KnightGuy : ModuleRules
{
    public KnightGuy(ReadOnlyTargetRules Target) : base(Target)
    {
        PrivatePCHHeaderFile = "Public/KnightGuy.h";

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine" });

        PrivateDependencyModuleNames.AddRange(new string[] { "GameplayAbilities", "GameplayTags", "GameplayTasks", "InputCore", "Slate", "SlateCore", });

        PrivateIncludePaths.AddRange(new string[] { "KnightGuy/Public", });

    }
}
