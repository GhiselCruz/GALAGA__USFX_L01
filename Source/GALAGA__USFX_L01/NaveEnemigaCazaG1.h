// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaG1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA__USFX_L01_API ANaveEnemigaCazaG1 : public ANaveEnemigaCaza
{
	GENERATED_BODY()
private:
	int danoEspecial;

public:
	ANaveEnemigaCazaG1();
	FORCEINLINE int GetDanoEspecial() const { return danoEspecial; }
	FORCEINLINE void SetDanoEspecial(int _danoEspecial) { danoEspecial = _danoEspecial; }

protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();

};
