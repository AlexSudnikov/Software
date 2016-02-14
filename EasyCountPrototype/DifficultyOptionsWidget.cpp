#include "DifficultyOptionsWidget.h"

#include<QButtonGroup>
#include<QRadioButton>
#include<QVBoxLayout>
#include<QPushButton>


DifficultyOptionsWidget::DifficultyOptionsWidget(QWidget *parent)
    : QWidget(parent),
      toogleButtons( new QButtonGroup(this) )
{

    QRadioButton* easyDifficultyButton = new QRadioButton("Easy");

    QRadioButton* normalDifficultyButton = new QRadioButton("Normal");

    QRadioButton* hardDifficultyButton = new QRadioButton("Hard");

    QPushButton* choiceIsDoneButton = new QPushButton("Next");



    toogleButtons->addButton( easyDifficultyButton );

    toogleButtons->addButton( normalDifficultyButton );

    toogleButtons->addButton( hardDifficultyButton );


    easyDifficultyButton->setChecked(true);



    QVBoxLayout* mainLayout = new QVBoxLayout(this);


    mainLayout->addWidget( easyDifficultyButton );

    mainLayout->addWidget( normalDifficultyButton );

    mainLayout->addWidget( hardDifficultyButton );

    mainLayout->addSpacing(1);

    mainLayout->addWidget( choiceIsDoneButton );


    connect(choiceIsDoneButton,SIGNAL(clicked()),SIGNAL(OptionIsDone()));

}

DifficultyOptionsWidget::~DifficultyOptionsWidget()
{

}
