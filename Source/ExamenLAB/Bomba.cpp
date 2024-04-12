// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomba.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"


// Constructor por defecto
ABomba::ABomba()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaBomba(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	// Create the mesh component
	MallaBomba = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	MallaBomba->SetStaticMesh(mallaBomba.Object);
	MallaBomba->SetupAttachment(RootComponent);

	velocidadBombaX = -200.0f; // define la direccion de la bomba
}

// Called when the game starts or when spawned
void ABomba::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABomba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoverBomba(DeltaTime); // Llamamos a la función para mover la bomba
}

void ABomba::MoverBomba(float DeltaTime) 
{
	//Obtenemos la posición actual del actor o naves
	FVector PosicionBombaActual = GetActorLocation(); // Get para acceder a la posición del actor

	// Generamos una nueva coordenada en X 
	float NuevaY = 0.0f; // No se mueve en el eje X

	// Calculamos la nueva posición en el eje Y
	float NuevaPosicionBombaX = PosicionBombaActual.X + (velocidadBombaX * DeltaTime); 

	// Verificamos si la bomba ha alcanzado el límite superior o inferior
	if (NuevaPosicionBombaX <= -1090.0f)
	{
		Destroy(); // Destruimos la bomba cuando llegue al límite -1090.0f
	}
	// Establecemos o modificamos valores para la nueva posición del actor
	SetActorLocation(FVector(NuevaPosicionBombaX, PosicionBombaActual.Y + NuevaY, PosicionBombaActual.Z)); // para que la nave se mueva horizontalmente

}

