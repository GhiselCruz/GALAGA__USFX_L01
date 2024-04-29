// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MyInterfaceBuilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UMyInterfaceBuilder : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA__USFX_L01_API IMyInterfaceBuilder
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void SetVelocidad(float velocidad) = 0;
	virtual void SetVelocidadX2(float velocidad) = 0;
	virtual void SetMovimiento(FVector movimiento) = 0;
	virtual void SetDisparo(bool disparo) = 0;
	virtual void SetDisparoDoble(bool disparoDoble) = 0;

};
