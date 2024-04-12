// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"

// Sets default values
ANaveEnemiga::ANaveEnemiga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	// Create the mesh component
	mallaNave = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNave->SetStaticMesh(malla.Object);
	mallaNave->SetupAttachment(RootComponent);
    velocidadY = -350.0f; // define la direccion de la nave y la velocidad
}

// Called when the game starts or when spawned
void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    MoverNave(DeltaTime);
}

void ANaveEnemiga::MoverNave(float DeltaTime)
{
    //Obtenemos la posición actual del actor o naves
    FVector PosicionNaveActual = GetActorLocation(); // Get para acceder a la posición del actor

    // Generamos una nueva coordenada en X 
    float NuevaX = 0.0f; // No se mueve en el eje X

    // Calculamos la nueva posición en el eje Y
    float NuevaPosicionNaveY = PosicionNaveActual.Y + (velocidadY * DeltaTime); // para que la nave se mueva horizontalmente

    // Verificamos si la nave ha alcanzado el límite superior o inferior
   if (NuevaPosicionNaveY <= -1890.0f)
   {
       velocidadY *= -1.0f; // para que vaya de izquierda a derecha
   }

   else if (NuevaPosicionNaveY >= 1890.0f)
   {
	   velocidadY *= -1.0f; // para que vaya de derecha a izquierda
   }

    // Establecemos o modificamos valores para la nueva posición del actor
    SetActorLocation(FVector(PosicionNaveActual.X + NuevaX, NuevaPosicionNaveY, PosicionNaveActual.Z)); // para que la nave se mueva horizontalmente
}

