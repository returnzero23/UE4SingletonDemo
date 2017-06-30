// Fill out your copyright notice in the Description page of Project Settings.

#include "SingletonDemo.h"
#include "SingleGameInstance.h"


USingletonObject *USingletonObject::SingleInstance = nullptr;

USingleGameInstance::USingleGameInstance() {
	Single = USingletonObject::GetSingleInstance();
}


