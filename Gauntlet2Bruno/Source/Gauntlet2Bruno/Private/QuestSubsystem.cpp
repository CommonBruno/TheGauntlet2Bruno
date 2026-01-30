#include "QuestSubsystem.h"

void UQuestSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	
	static const TCHAR* QuestTablePath = TEXT("/Script/Engine.DataTable'/Game/Gauntlet2/Other/QuestDataTable.QuestDataTable'");
	QuestDataTable = LoadObject<UDataTable>(nullptr, QuestTablePath);
	
	if (!QuestDataTable)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load Quest DataTable"));
	}
	
	LoadFromTable();
}

void UQuestSubsystem::Deinitialize()
{
	Super::Deinitialize();

	ActiveQuests.Empty();
}

bool UQuestSubsystem::LoadFromTable()
{
	GEngine->AddOnScreenDebugMessage(
	1,       
	5.f,      
	FColor::Green,
	TEXT("Loading from table"));
	
    static const FString ContextString(TEXT("Quest Load"));
	
	TArray<FQuestData*> Rows;
	QuestDataTable->GetAllRows(ContextString, Rows);
	
	for (FQuestData* Row : Rows)
	{
		if (Row)
		{ AddQuest(*Row); }
		UE_LOG(LogTemp, Log, TEXT("Quest loaded"));
	}

	return true;
}

bool UQuestSubsystem::AddQuest(const FQuestData& NewQuest)
{
	GEngine->AddOnScreenDebugMessage(
	2,       
	5.f,     
	FColor::Green,
	TEXT("Adding quest"));
	
	ActiveQuests.Add(NewQuest.QuestID, NewQuest);
	return true;
}

FQuestData UQuestSubsystem::GetQuest(FName QuestID)
{
	if (FQuestData* Quest = ActiveQuests.Find(QuestID))
	{
		return *Quest;
	}
	return FQuestData{};
}

TSoftObjectPtr<USoundBase> UQuestSubsystem::GetQuestSFX(const FQuestData& Quest)
{	
    FString DebugMsg;
	
	if (Quest.QuestSFX.IsNull())
	{
		DebugMsg = TEXT("Sound = NULL ");
	}
	else
	{
		DebugMsg = FString::Printf(
			TEXT("Sound Path: %s | IsValid: %s"),
			*Quest.QuestSFX.ToSoftObjectPath().ToString(),
			Quest.QuestSFX.IsValid() ? TEXT("TRUE") : TEXT("FALSE")
		);
	}
	
	GEngine->AddOnScreenDebugMessage(
		-1,
		5.f,
		FColor::Green,
		DebugMsg
	);
	
	return Quest.QuestSFX;
}

TSoftObjectPtr<UNiagaraSystem> UQuestSubsystem::GetQuestVFX(const FQuestData& Quest)
{
	return Quest.QuestVFX;
}

bool UQuestSubsystem::CompleteQuest(FName QuestID)
{
	if (FQuestData* Quest = ActiveQuests.Find(QuestID))
	{
		GEngine->AddOnScreenDebugMessage(
		3,        
		5.f,       
		FColor::Green,
		TEXT("Complete quest"));
		
		Quest->bIsCompleted = true;
		Quest->CurrentProgress = Quest->TargetProgress;
		return true;
	}

	return false;
}

