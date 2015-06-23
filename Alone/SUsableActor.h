// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/StaticMeshActor.h"
#include "SUsableActor.generated.h"

/**
 * 
 */
UCLASS()
class ALONE_API ASUsableActor : public AStaticMeshActor
{
	GENERATED_BODY()
public:	
	ASUsableActor();
	UFUNCTION(BlueprintImplementableEvent)
		bool OnUsed(ACharacter* character);

	UFUNCTION(BlueprintImplementableEvent)
		bool StartFocusItem();

	UFUNCTION(BlueprintImplementableEvent)
		bool EndFocusItem();
	
	
};
