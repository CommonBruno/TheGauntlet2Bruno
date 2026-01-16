#include "UQuestSubsystem.h"
#include "Sound/SoundBase.h"
#include "Engine/AssetManager.h"
// Make sure this matches the name of your struct
#include "SQuestDetails.h"

void UQuestSubsystem::LoadQuest(FName QuestRowName)
{
	if (!QuestDataTable)
	{
		UE_LOG(LogTemp, Warning, TEXT("QuestDataTable not assigned!"));
		return;
	}

	// Find the quest row in the DataTable
	FQuestDetailsRow* Quest = QuestDataTable->FindRow<FQuestDetailsRow>(QuestRowName, TEXT("LoadQuest"));
	if (!Quest)
	{
		UE_LOG(LogTemp, Warning, TEXT("Quest row not found: %s"), *QuestRowName.ToString());
		return;
	}

	FStreamableManager& Streamable = UAssetManager::GetStreamableManager();

	// Load VFX asynchronously
	if (Quest->CompletionVFX.IsValid())
	{
		Streamable.RequestAsyncLoad(
			Quest->CompletionVFX.ToSoftObjectPath(),
			FStreamableDelegate::CreateLambda([Quest]()
			{
				UNiagaraSystem* LoadedVFX = Quest->CompletionVFX.Get();
				if (LoadedVFX)
				{
					UE_LOG(LogTemp, Log, TEXT("VFX Loaded: %s"), *LoadedVFX->GetName());
					// TODO: spawn Niagara system here
				}
			})
		);
	}

	// Load SFX asynchronously
	if (Quest->CompletionSFX.IsValid())
	{
		Streamable.RequestAsyncLoad(
			Quest->CompletionSFX.ToSoftObjectPath(),
			FStreamableDelegate::CreateLambda([Quest]()
			{
				USoundBase* LoadedSFX = Quest->CompletionSFX.Get();
				if (LoadedSFX)
				{
					UE_LOG(LogTemp, Log, TEXT("SFX Loaded: %s"), *LoadedSFX->GetName());
					// TODO: play sound here
				}
			})
		);
	}
}