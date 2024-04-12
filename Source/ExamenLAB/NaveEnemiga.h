// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

class UstaticMeshComponent;

UCLASS()
class EXAMENLAB_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaNave; // malla de la nave

private:
	FVector posicion;
	FString nombre; 
	float velocidad;

public:
	// getters 
	FORCEINLINE FVector getPosicion() const { return posicion; }
	FORCEINLINE FString getNombre() const { return nombre; }
	FORCEINLINE float getVelocidad() const { return velocidad; }

	// setters
	FORCEINLINE void setPosicion(FVector pos) { posicion = pos; }
	FORCEINLINE void setNombre(FString nom) { nombre = nom; }
	FORCEINLINE void setVelocidad(float vel) { velocidad = vel; }

public:	
	// Sets default values for this actor's properties
	ANaveEnemiga();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

// funcion para que la nave se mueva
public:
	void MoverNave(float DeltaTime); // función para mover la nave

protected:
	UPROPERTY(EditAnywhere, Category = "Movimiento") // EditAnywhere para que se pueda modificar desde el editor
	float velocidadY; // velocidad de la nave en el eje Y
};
