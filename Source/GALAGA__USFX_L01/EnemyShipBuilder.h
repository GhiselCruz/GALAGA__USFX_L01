// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EnemyShipBuilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEnemyShipBuilder : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA__USFX_L01_API IEnemyShipBuilder
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
	virtual void builtVelocidad() = 0;
	virtual void builtVelocidadX2() = 0; 
	virtual void builtMovimiento() = 0;
	virtual void builtDisparo() = 0;
	virtual void builtDisparoDoble() = 0;

	virtual class EnemyShip* GetEnemyShip() = 0;

public:

};
