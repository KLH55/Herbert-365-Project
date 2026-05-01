// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Door.generated.h"

UCLASS()
class PROJECT_API ADoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoor();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door")
	int32 RequiredItems = 1;
	
	UPROPERTY(BlueprintReadOnly)
	bool bIsOpen = false;
	
	UFUNCTION(BlueprintCallable)
	void Interact(AActor* InteractingActor);
	
	UFUNCTION(BlueprintImplementableEvent)
	void OpenDoor();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
