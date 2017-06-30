// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Object.h"
#include "SingletonObject.generated.h"

/**
 * 
 */
UCLASS()
class SINGLETONDEMO_API USingletonObject : public UObject
{
	GENERATED_BODY()
private:
	USingletonObject();
	static USingletonObject* SingleInstance;
public:
	static USingletonObject* GetSingleInstance() {
		if (SingleInstance == 0)
			SingleInstance = NewObject<USingletonObject>();
		return SingleInstance;
	};
	UFUNCTION(BlueprintCallable, Category = "UNetworkUtility")
	void printstr(FString str);
};
