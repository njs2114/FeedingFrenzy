#ifndef FRENZYWINDOW_H
#define FRENZYWINDOW_H

#include <QMainWindow>
#include "frenzy.h"

namespace Ui {
class FrenzyWindow;
}

class FrenzyWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit FrenzyWindow(QWidget *parent = 0);
    ~FrenzyWindow();
    
private slots:
    void on_exitButton_clicked();

    void on_actionExit_triggered();

private:
    Ui::FrenzyWindow *ui;
    Frenzy f;
};

#endif // FRENZYWINDOW_H
