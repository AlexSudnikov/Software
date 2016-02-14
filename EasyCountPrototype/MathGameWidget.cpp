#include "MathGameWidget.h"

#include "GlobalSettingsHolder.h"


#include<QLabel>
#include<QTimer>
#include<QRadioButton>
#include<QVBoxLayout>
#include<QPushButton>


MathGameWidget::MathGameWidget(QWidget *parent)
    : QWidget(parent)
{

    GlobalSettingsHolder* globalSettingsHolder = GlobalSettingsHolder::Instance();

    DifficultyOptionsWidget::DifficultyLevels difficulty = globalSettingsHolder->SelectedDifficulty();

    initialTimeForSolving = ( difficulty == DifficultyOptionsWidget::Easy ) ? 15.0f :
                            ( difficulty == DifficultyOptionsWidget::Normal ) ? 10.0f : 5.0f;




    timeLeftLabel = new QLabel( QString::number(initialTimeForSolving) ,this);

    timeLeftLabel->setAlignment(Qt::AlignHCenter);

    {

        qsrand(0);

        int randNumer = qrand();

        int operandsRange = ( difficulty == DifficultyOptionsWidget::Easy ) ? 100 :
                                ( difficulty == DifficultyOptionsWidget::Normal ) ? 1000 : 100000;

        int operandAValue = randNumer%operandsRange;

        operandA = new QLabel( QString::number(operandAValue) , this);

    }

        operation = new QLabel( "+" , this);

    {

        qsrand(1);

        int randNumer = qrand();

        int operandsRange = ( difficulty == DifficultyOptionsWidget::Easy ) ? 100 :
                                ( difficulty == DifficultyOptionsWidget::Normal ) ? 1000 : 100000;

        int operandAValue = randNumer%operandsRange;

        operandB = new QLabel( QString::number(operandAValue) , this);

    }



    QVBoxLayout* mainLayout = new QVBoxLayout(this);

    mainLayout->addWidget( timeLeftLabel );

        QHBoxLayout* middleLayout = new QHBoxLayout( );

        middleLayout->addWidget( operandA );

        middleLayout->addWidget( operation );

        middleLayout->addWidget( operandB);

    mainLayout->addLayout( middleLayout );


    //initialTimeForSolving

    //QTimer* timeLeftTimer = new QTimer(this);

    //timeLeftTimer->setInterval(1000*0.1f);

    //connect(timeLeftTimer,SIGNAL(timeout()),SLOT(UpdateTimeLabel());)

    //connect(choiceIsCanceledButton,SIGNAL(clicked()),SIGNAL(OptionIsCanceled()));

   // connect(choiceIsDoneButton,SIGNAL(clicked()),SIGNAL(OptionIsDone()));


}

MathGameWidget::~MathGameWidget()
{

}
