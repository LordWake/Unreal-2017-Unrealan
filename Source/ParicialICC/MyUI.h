// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "MyUserWidget.h"
#include "GameFramework/PlayerController.h"
#include "MyUI.generated.h"

/**
 * 
 */
UCLASS()
class PARICIALICC_API AMyUI : public APlayerController
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
		TSubclassOf<class UMyUserWidget> prefabCanvas;

	UMyUserWidget* canvas;

	bool isDead;
	bool playerWin;
	bool playerWinTwo;
	bool playerWinThree;
	bool resetFirstLevel;
	bool resetSecondLevel;
	bool resetThirdLevel;
	float timer;

	void virtual BeginPlay() override;
	void virtual Tick(float DeltaSeconds) override;
	void UpdatePlayerLife(float life);
	void UpdatePlayerWeapons(float weaponsValue);
	void CheckIfPlayerIsDead();
	void CheckIfPlayerWin(int levelWin);
	void ResetTheLevel();
		
};
