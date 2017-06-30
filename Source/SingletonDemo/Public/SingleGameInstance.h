// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/GameInstance.h"
#include "SingletonObject.h"
#include "SingleGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class SINGLETONDEMO_API USingleGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	USingleGameInstance();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UMarsGameInstance")
		USingletonObject* Single = nullptr;
};
