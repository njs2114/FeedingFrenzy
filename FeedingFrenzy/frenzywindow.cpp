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
