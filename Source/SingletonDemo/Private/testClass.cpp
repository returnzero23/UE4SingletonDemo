// Fill out your copyright notice in the Description page of Project Settings.

#include "SingletonDemo.h"
#include "testClass.h"
#include "SingletonObject.h"

UtestClass::UtestClass() {
	USingletonObject* Pinstacne = USingletonObject::GetSingleInstance();
}


