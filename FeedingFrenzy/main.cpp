#include <QtGui/QApplication>
#include "frenzywindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FrenzyWindow w;
    w.show();
    
    return a.exec();
}
