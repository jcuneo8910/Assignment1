// Fill out your copyright notice in the Description page of Project Settings.


#include "HiddenObject.h"

// Sets default values
AHiddenObject::AHiddenObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = mesh;
}

// Called when the game starts or when spawned
void AHiddenObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHiddenObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

