#ifndef MATH_GAME_WIDGET_H
#define MATH_GAME_WIDGET_H

#include <QWidget>

class QLabel;

class MathGameWidget : public QWidget
{
    Q_OBJECT

    Q_DISABLE_COPY(MathGameWidget)

public:

    explicit MathGameWidget(QWidget *parent = 0);

    ~MathGameWidget();

private:

    float initialTimeForSolving;

    float timeLeft ;

private:

    QLabel* timeLeftLabel;
    QLabel* operandA;
    QLabel* operation;
    QLabel* operandB;

signals:

    void OptionIsDone();
    void OptionIsCanceled();

};

#endif // QMAINWINDOW_H
