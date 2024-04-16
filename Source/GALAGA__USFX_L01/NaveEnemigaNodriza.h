// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaNodriza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA__USFX_L01_API ANaveEnemigaNodriza : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	int nivelSpawm;

public:
	ANaveEnemigaNodriza();
	FORCEINLINE int GetNivelSpawm() const { return nivelSpawm; }
	FORCEINLINE void SetNivelSpawm(int _nivelSpawn) { nivelSpawm = _nivelSpawn; }

protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();

public:
	virtual void Tick(float DeltaTime) override;
};
