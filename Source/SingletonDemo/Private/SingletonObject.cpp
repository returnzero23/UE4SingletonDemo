// Fill out your copyright notice in the Description page of Project Settings.

#include "SingletonDemo.h"
#include "SingletonObject.h"

USingletonObject::USingletonObject() {
	
}

void USingletonObject::printstr(FString str)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("print string = %s"),*str));
}
