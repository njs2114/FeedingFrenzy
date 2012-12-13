#include "frenzywindow.h"
#include "ui_frenzywindow.h"

FrenzyWindow::FrenzyWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FrenzyWindow)
{
    ui->setupUi(this);
}

FrenzyWindow::~FrenzyWindow()
{
    delete ui;
}

void FrenzyWindow::on_exitButton_clicked()
{
    FrenzyWindow::on_actionExit_triggered();
}

void FrenzyWindow::on_actionExit_triggered()
{
    exit(0);
}

void FrenzyWindow::on_resetButton_clicked()
{
    FrenzyWindow::on_actionNew_triggered();
}

void FrenzyWindow::on_actionNew_triggered()
{
    // start new game
}
