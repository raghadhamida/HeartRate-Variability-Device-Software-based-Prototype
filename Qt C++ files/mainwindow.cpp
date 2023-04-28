#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    currentTimerCount = -1;
    powerStatus = false;
    changePower();
    connect(ui->powerButton, &QPushButton::released, this, &MainWindow::powerChange);
    connect(ui->menuButton, &QPushButton::released, this, &MainWindow::menu);
    //activeQListWidget = ui->mainMenuList;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::changePower(){
    ui->screen->setVisible(powerStatus);
    ui->screenOff->setVisible(!powerStatus);
    ui->HRcontact->setVisible(powerStatus);
    ui->ach_Num->setVisible(powerStatus);
    ui->achievement->setVisible(powerStatus);
    ui->batteryLevel->setVisible(powerStatus);
    ui->coh_Num->setVisible(powerStatus);
    ui->coherence->setVisible(powerStatus);
    ui->breathPacer->setVisible(powerStatus);
    ui->len_Num->setVisible(powerStatus);
    ui->length->setVisible(powerStatus);
    ui->upButton->setEnabled(powerStatus);
    ui->downButton->setEnabled(powerStatus);
    ui->leftButton->setEnabled(powerStatus);
    ui->rightButton->setEnabled(powerStatus);
    //ui->menuButton->setEnabled(powerStatus);
    ui->okButton->setEnabled(powerStatus);
    ui->backButton->setEnabled(powerStatus);
}

void MainWindow::powerChange(){
    powerStatus = !powerStatus;
    changePower();
}

void MainWindow::menu(){

    ui->mainMenuList->setVisible(true);
    ui->mainMenuList->addItems({"Start Session", "Settings", "Show History", "Reset"});
    ui->mainMenuList->setCurrentRow(0);
}
