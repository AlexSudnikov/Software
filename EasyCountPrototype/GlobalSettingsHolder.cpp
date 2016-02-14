#include "GlobalSettingsHolder.h"


GlobalSettingsHolder*  GlobalSettingsHolder::instance = NULL ;

void GlobalSettingsHolder::InitializeGlobalSettingsHolder()
{
        GlobalSettingsHolder();
}

GlobalSettingsHolder* GlobalSettingsHolder::Instance()
{
    return instance;
}

GlobalSettingsHolder::GlobalSettingsHolder()
{
    instance =  new GlobalSettingsHolder() ;

    difficulty = DifficultyOptionsWidget::UNKNOWN;

    operation = OperationOptionsWidget::UNKNOWN;

}

GlobalSettingsHolder::~GlobalSettingsHolder()
{
    delete instance;
}

void GlobalSettingsHolder::SetupSelectedDifficulty(DifficultyOptionsWidget::DifficultyLevels newDifficulty )
{

    difficulty = newDifficulty;

}

void GlobalSettingsHolder::SetupSelectedOperation(OperationOptionsWidget::Operations newOperation)
{

    operation = newOperation ;

}


DifficultyOptionsWidget::DifficultyLevels GlobalSettingsHolder::SelectedDifficulty()const
{
    return difficulty;
}

OperationOptionsWidget::Operations GlobalSettingsHolder::SetupSelectedOperation()const
{
    return operation;
}


