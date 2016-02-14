#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

class QStackedWidget;

class MainWindow : public QWidget
{
    Q_OBJECT
    Q_DISABLE_COPY(MainWindow)

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:

    QStackedWidget* const primaryWidget ;

private slots:

    void OnOptionIsDone();

    void OnOptionIsCanceled();


};

#endif // MAINWINDOW_H
