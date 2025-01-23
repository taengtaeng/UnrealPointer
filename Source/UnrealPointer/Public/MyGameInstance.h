// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class UNREALPOINTER_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	void Init() override;
	void Swap(int32* A, int32* B);
	void ChangeValue(int32* A);
	void ChangeValueRef(int32& A);


private:


};
