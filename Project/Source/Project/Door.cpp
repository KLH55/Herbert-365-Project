// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"
#include "ProjectCharacter.h"

// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoor::Interact(AActor* InteractingActor)
{
	if (bIsOpen) return;
	
	AProjectCharacter* Player = Cast<AProjectCharacter>(InteractingActor);
	if (!Player) return;
	
	if (Player->ItemsCollected >= RequiredItems)
	{
		UE_LOG(LogTemp, Warning, TEXT("Door opening"));
		bIsOpen = true;
		
		OpenDoor();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Not enough items"));
	}
}
