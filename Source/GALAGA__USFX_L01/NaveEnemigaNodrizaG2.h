// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaNodrizaG2.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA__USFX_L01_API ANaveEnemigaNodrizaG2 : public ANaveEnemigaNodriza
{
	GENERATED_BODY()
private:
	int resistenciax6;
	ANaveEnemigaNodrizaG2();
	FORCEINLINE int GettripleResistenciax6() const { return resistenciax6; }
	FORCEINLINE void SetInvisibilidadTemp(int _resistenciax6) { resistenciax6 = _resistenciax6; }

protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
};
