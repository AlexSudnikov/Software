#include "OperationOptionsWidget.h"

#include<QButtonGroup>
#include<QRadioButton>
#include<QVBoxLayout>
#include<QPushButton>


OperationOptionsWidget::OperationOptionsWidget(QWidget *parent)
    : QWidget(parent),
      toogleButtons( new QButtonGroup(this) )
{

    QRadioButton* plusMinusButton = new QRadioButton("+ -");

    QRadioButton* multDivideButton = new QRadioButton("* /");

    QRadioButton* randomOperationButton = new QRadioButton("?");


    QPushButton* choiceIsCanceledButton = new QPushButton("Back");

    QPushButton* choiceIsDoneButton = new QPushButton("Next");


    QHBoxLayout* lowerLayout = new QHBoxLayout();

    lowerLayout->addWidget(choiceIsCanceledButton);

    lowerLayout->addWidget(choiceIsDoneButton);



    toogleButtons->addButton( plusMinusButton );

    toogleButtons->addButton( multDivideButton );

    toogleButtons->addButton( randomOperationButton );


    plusMinusButton->setChecked(true);


    QVBoxLayout* mainLayout = new QVBoxLayout(this);


    mainLayout->addWidget( plusMinusButton );

    mainLayout->addWidget( multDivideButton );

    mainLayout->addWidget( randomOperationButton );

    mainLayout->addLayout( lowerLayout );


    connect(choiceIsCanceledButton,SIGNAL(clicked()),SIGNAL(OptionIsCanceled()));

    connect(choiceIsDoneButton,SIGNAL(clicked()),SIGNAL(OptionIsDone()));


}

OperationOptionsWidget::~OperationOptionsWidget()
{

}
