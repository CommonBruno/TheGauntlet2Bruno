#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "NiagaraSystem.h"
#include "Sound/SoundBase.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "QuestSubsystem.generated.h"

USTRUCT(BlueprintType)
struct GAUNTLET2BRUNO_API FQuestData : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Effects")
	TSoftObjectPtr<UNiagaraSystem> QuestVFX;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Effects")
	TSoftObjectPtr<USoundBase> QuestSFX;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName QuestID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsCompleted = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentProgress = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TargetProgress;
};

UCLASS()
class GAUNTLET2BRUNO_API UQuestSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	
	UPROPERTY(EditDefaultsOnly, Category="Quests")
	UDataTable* QuestDataTable;
	
	UFUNCTION(BlueprintCallable, Category="Quests")
	bool LoadFromTable();
	
	UFUNCTION(BlueprintCallable, Category="Quests")
	bool AddQuest(const FQuestData& NewQuest);
	
	UFUNCTION(BlueprintCallable, Category="Quests")
	FQuestData GetQuest(FName QuestID);
	
	UFUNCTION(BlueprintCallable, Category="Quests")
	TSoftObjectPtr<USoundBase> GetQuestSFX(const FQuestData& Quest);
	
	UFUNCTION(BlueprintCallable, Category="Quests")
	TSoftObjectPtr<UNiagaraSystem> GetQuestVFX(const FQuestData& Quest);

	UFUNCTION(BlueprintCallable, Category="Quests")
	bool CompleteQuest(FName QuestID);

private:
	UPROPERTY()
	TMap<FName, FQuestData> ActiveQuests;
};