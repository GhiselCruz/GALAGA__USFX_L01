// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NodrizaActorBuilder.h"
#include "InterfaceBuilderNodriza.generated.h"
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInterfaceBuilderNodriza : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA__USFX_L01_API IInterfaceBuilderNodriza
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void builArmamento() = 0;   //disparos que lanzara la nave
	virtual void builProteccion() = 0;   //para activar un escudo cuando detecte balas a una distancia determinada
	virtual void builApariencia() = 0;  //forma de la nave nodriza
	virtual void builMovimiento() = 0;  //movimiento que tendran las naves derivadas de la nave nodriza

	virtual ANodrizaActorBuilder* GetNodrizaActorBuilder() = 0;
};
