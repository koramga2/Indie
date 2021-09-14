// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "Engine.h"

/**
 * 
 */

DECLARE_LOG_CATEGORY_EXTERN(UE8, Log, All)
#define LOG_CALLINFO		(FString(__FUNCTION__) + TEXT("{") + FString::FromInt(__LINE__) + TEXT("}"))
#define LOG(Format, ...)	UE_LOG(UE8, Warning, TEXT("%s : %s"), *LOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__))

void PrintViewport(float Duration, const FColor& Color, const FString& strText);

UENUM(BlueprintType)
enum class EPawnCharacterAnimType : uint8
{
	Idle,
	Walk,
	Run,
	Death,
};

UENUM(BlueprintType)
enum class EToggleWalkAndRun : uint8
{
	Walk,
	Run
};

UENUM(BlueprintType)
enum class EPlayerWeaponType : uint8
{
	None,
	Lance,
};