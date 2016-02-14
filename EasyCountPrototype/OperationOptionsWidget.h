#ifndef OPERATION_OPTIONS_WIDGET_H
#define OPERATION_OPTIONS_WIDGET_H

#include <QWidget>

class QButtonGroup ;

class OperationOptionsWidget : public QWidget
{
    Q_OBJECT

    Q_DISABLE_COPY(OperationOptionsWidget)

public:

    enum Operations
    {
        UNKNOWN = 0,

        AdditionSubtraction  ,

        MultiplicationDivision,

        Random

    };

public:

    explicit OperationOptionsWidget(QWidget *parent = 0);

    ~OperationOptionsWidget();

private:

    QButtonGroup* const toogleButtons ;

signals:

    void OptionIsDone();
    void OptionIsCanceled();

};

#endif // QMAINWINDOW_H
