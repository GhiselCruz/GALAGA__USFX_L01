// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaG2.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA__USFX_L01_API ANaveEnemigaCazaG2 : public ANaveEnemigaCaza
{
	GENERATED_BODY()
private:
	int resistenciaDoble;
	ANaveEnemigaCazaG2();
	FORCEINLINE int GetResistenciaDoble() const { return resistenciaDoble; }
	FORCEINLINE void SetResistenciaDoble(int _resistenciaDoble) { resistenciaDoble = _resistenciaDoble; }

protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	
};
