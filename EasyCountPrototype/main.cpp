#include "MainWindow.h"

#include "GlobalSettingsHolder.h"

#include <QApplication>


#include <QDebug>


int main(int argc, char *argv[])
{


    QApplication a(argc, argv);





    MainWindow w;

    w.setWindowFlags(Qt::FramelessWindowHint);

    w.resize( 600,300);

    w.show();

    GlobalSettingsHolder::InitializeGlobalSettingsHolder();

    qDebug()<<GlobalSettingsHolder::Instance();


    return a.exec();
}
