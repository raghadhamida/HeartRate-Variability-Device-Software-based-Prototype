#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include "session.h"

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
    //QListWidget *activeQListWidget;
    Session* currentSession;
    void changePower();
    void menu();
    void powerChange();

};
#endif // MAINWINDOW_H
