#ifndef DIFFICULTY_OPTIONS_WIDGET_H
#define DIFFICULTY_OPTIONS_WIDGET_H

#include <QWidget>

class QButtonGroup ;

class DifficultyOptionsWidget : public QWidget
{
    Q_OBJECT

    Q_DISABLE_COPY(DifficultyOptionsWidget)

public:

    enum DifficultyLevels
    {
        UNKNOWN = 0,

        Easy,

        Normal ,

        Hard
    };

public:

    explicit DifficultyOptionsWidget(QWidget *parent = 0);

    ~DifficultyOptionsWidget();

private:

    QButtonGroup* const toogleButtons ;

signals:

    void OptionIsDone();
    void OptionIsCanceled();

};

#endif // QMAINWINDOW_H
