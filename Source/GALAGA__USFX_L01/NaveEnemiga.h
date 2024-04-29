// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActorComponentMovimiento.h"
#include "NaveEnemiga.generated.h"

UCLASS(abstract)
class GALAGA__USFX_L01_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Proyectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaNaveEnemiga;

protected:
	float resistencia; //Numero de disparos que puede recibir antes de ser destuido
	float velocidad;
	float danoProducido; //Potencia de cada proyectil que dispara la nave
	FString nombre;
	int trayectoria; //Cada valor numerico representa a una funcion que la nave debe asumir para moverse
	int capacidadPasajeros; //Numero de naves que puede transportar
	int capacidadMunicion; //Numero de disparos que puede realizar antes de recargar
	int tipoNave; //Cada valor numerico representa a un tipo de nave enemiga
	float experiencia;
	float energia;
	float peso;
	float volumen;


public:
	FORCEINLINE float GetResistencia() const { return resistencia; }
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetDanoProducido() const { return danoProducido; }
	FORCEINLINE FString GetNombre() const { return nombre; }
	FORCEINLINE int GetTrayectoria() const { return trayectoria; }
	FORCEINLINE int GetCapacidadPasajeros() const { return capacidadPasajeros; }
	FORCEINLINE int GetCapacidadMunicion() const { return capacidadMunicion; }
	FORCEINLINE int GetTipoNave() const { return tipoNave; }
	FORCEINLINE int GetExperiencia() const { return experiencia; }
	FORCEINLINE int GetEnergia() const { return energia; }
	FORCEINLINE int GetPeso() const { return peso; }
	FORCEINLINE int GetVolumen() const { return volumen; }


	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }
	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetDanoProducido(float _danoProducido) { danoProducido = _danoProducido; }
	FORCEINLINE void SetNombre(FString _nombre) { nombre = _nombre; }
	FORCEINLINE void SetTrayectoria(int _trayectoria) { trayectoria = _trayectoria; }
	FORCEINLINE void SetCapacidadPasajeros(int _capacidadPasajeros) { capacidadPasajeros = _capacidadPasajeros; }
	FORCEINLINE void SetCapacidadMunicion(int _capacidadMunicion) { capacidadMunicion = _capacidadMunicion; }
	FORCEINLINE void SetTipoNave(int _tipoNave) { tipoNave = _tipoNave; }
	FORCEINLINE void SetExperiencia(int _experiencia) { experiencia = _experiencia; }
	FORCEINLINE void SetEnergia(int _energia) { energia = _energia; }
	FORCEINLINE void SetPeso(int _peso) { peso = _peso; }
	FORCEINLINE void SetVolumen(int _volumen) { volumen = _volumen; }



public:
	// Sets default values for this actor's properties
	ANaveEnemiga();
	//UMyActorComponentMovimiento* Componente;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
    UMyActorComponentMovimiento* ComponenteMovimiento;
};