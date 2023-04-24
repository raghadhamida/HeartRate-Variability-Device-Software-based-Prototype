#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "session.h"
#include "history.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    bool powerStatus;
    int currentTimerCount;
    Session* currentSession;
    void changePower();
};
#endif // MAINWINDOW_H
