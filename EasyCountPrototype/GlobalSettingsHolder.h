#ifndef GLOBAL_SETTINGS_HOLDER_H
#define GLOBAL_SETTINGS_HOLDER_H

#include "DifficultyOptionsWidget.h"

#include "OperationOptionsWidget.h"


class GlobalSettingsHolder
{

public:

    static void InitializeGlobalSettingsHolder();

    static GlobalSettingsHolder* Instance();

private:

    explicit GlobalSettingsHolder();

public:

    ~GlobalSettingsHolder();

private:

    static GlobalSettingsHolder*  instance ;

    DifficultyOptionsWidget::DifficultyLevels difficulty;

    OperationOptionsWidget::Operations operation ;


public:

    void SetupSelectedDifficulty( DifficultyOptionsWidget::DifficultyLevels  );

    void SetupSelectedOperation( OperationOptionsWidget::Operations );


     DifficultyOptionsWidget::DifficultyLevels SelectedDifficulty( )const;

     OperationOptionsWidget::Operations  SetupSelectedOperation()const;



};

#endif // QMAINWINDOW_H
