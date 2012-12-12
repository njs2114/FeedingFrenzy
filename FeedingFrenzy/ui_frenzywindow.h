/********************************************************************************
** Form generated from reading UI file 'frenzywindow.ui'
**
** Created: Wed Dec 12 18:24:53 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRENZYWINDOW_H
#define UI_FRENZYWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrenzyWindow
{
public:
    QAction *actionNew;
    QAction *actionPause;
    QAction *actionExit;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FrenzyWindow)
    {
        if (FrenzyWindow->objectName().isEmpty())
            FrenzyWindow->setObjectName(QString::fromUtf8("FrenzyWindow"));
        FrenzyWindow->resize(427, 345);
        actionNew = new QAction(FrenzyWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionPause = new QAction(FrenzyWindow);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        actionExit = new QAction(FrenzyWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(FrenzyWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_4);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_3->addWidget(pushButton_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 1);

        FrenzyWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FrenzyWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 427, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        FrenzyWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FrenzyWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        FrenzyWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FrenzyWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        FrenzyWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionPause);
        menuFile->addAction(actionExit);

        retranslateUi(FrenzyWindow);
        QObject::connect(actionExit, SIGNAL(activated()), FrenzyWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(FrenzyWindow);
    } // setupUi

    void retranslateUi(QMainWindow *FrenzyWindow)
    {
        FrenzyWindow->setWindowTitle(QApplication::translate("FrenzyWindow", "FrenzyWindow", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("FrenzyWindow", "New", 0, QApplication::UnicodeUTF8));
        actionPause->setText(QApplication::translate("FrenzyWindow", "Pause", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("FrenzyWindow", "Exit", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FrenzyWindow", "Consumption", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FrenzyWindow", "0", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FrenzyWindow", "Game Status", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FrenzyWindow", "Frenzy ate", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("FrenzyWindow", "++", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("FrenzyWindow", "--", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("FrenzyWindow", "Reset", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("FrenzyWindow", "Quit", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("FrenzyWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FrenzyWindow: public Ui_FrenzyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRENZYWINDOW_H
