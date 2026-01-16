#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UQuestSubsystem.generated.h"

// Forward declarations
class UNiagaraSystem;
class USoundBase;

UCLASS()
class GAUNTLET2BRUNO_API UQuestSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void LoadQuestVFXAndSFX(TSoftObjectPtr<UNiagaraSystem> VFX, TSoftObjectPtr<USoundWave> SFX);
};