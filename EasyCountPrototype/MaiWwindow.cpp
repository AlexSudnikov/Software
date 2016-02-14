#include "MainWindow.h"

#include "DifficultyOptionsWidget.h"
#include "OperationOptionsWidget.h"


#include<QStackedWidget>
#include<QHBoxLayout>


MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent),
      primaryWidget( new QStackedWidget(this) )
{
    QHBoxLayout* mainLayout = new QHBoxLayout(this);

        DifficultyOptionsWidget* difficultyOptionsWidget = new DifficultyOptionsWidget(this);

        OperationOptionsWidget* operationOptionsWidget = new OperationOptionsWidget(this);


    primaryWidget->addWidget(difficultyOptionsWidget);

    primaryWidget->addWidget(operationOptionsWidget);


    mainLayout->addStretch(1);

    mainLayout->addWidget(primaryWidget);

    mainLayout->addStretch(1);



    connect(difficultyOptionsWidget,SIGNAL(OptionIsDone()),SLOT(OnOptionIsDone()));


    connect(operationOptionsWidget,SIGNAL(OptionIsDone()),SLOT(OnOptionIsDone()));

    connect(operationOptionsWidget,SIGNAL(OptionIsCanceled()),SLOT(OnOptionIsCanceled()));


}

MainWindow::~MainWindow()
{

}

void MainWindow::OnOptionIsDone()
{

    int currentIndex = primaryWidget->currentIndex();

    primaryWidget->setCurrentIndex(++currentIndex);

}

void MainWindow::OnOptionIsCanceled()
{

    int currentIndex = primaryWidget->currentIndex();

    primaryWidget->setCurrentIndex(--currentIndex);

}
