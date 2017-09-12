/********************************************************************************
** Form generated from reading UI file 'Game.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameClass
{
public:
    QWidget *centralWidget;
    QPushButton *pole0_0;
    QPushButton *pole0_1;
    QPushButton *pole0_2;
    QPushButton *pole1_0;
    QPushButton *pole1_1;
    QPushButton *pole1_2;
    QPushButton *pole2_0;
    QPushButton *pole2_1;
    QPushButton *pole2_2;
    QLabel *countcheck;
    QLabel *xpoints;
    QLabel *opoints;
    QLabel *xpointsview;
    QLabel *opointsview;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GameClass)
    {
        if (GameClass->objectName().isEmpty())
            GameClass->setObjectName(QStringLiteral("GameClass"));
        GameClass->resize(680, 500);
        centralWidget = new QWidget(GameClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pole0_0 = new QPushButton(centralWidget);
        pole0_0->setObjectName(QStringLiteral("pole0_0"));
        pole0_0->setGeometry(QRect(130, 70, 75, 75));
        pole0_1 = new QPushButton(centralWidget);
        pole0_1->setObjectName(QStringLiteral("pole0_1"));
        pole0_1->setGeometry(QRect(205, 70, 75, 75));
        pole0_2 = new QPushButton(centralWidget);
        pole0_2->setObjectName(QStringLiteral("pole0_2"));
        pole0_2->setGeometry(QRect(280, 70, 75, 75));
        pole1_0 = new QPushButton(centralWidget);
        pole1_0->setObjectName(QStringLiteral("pole1_0"));
        pole1_0->setGeometry(QRect(130, 145, 75, 75));
        pole1_1 = new QPushButton(centralWidget);
        pole1_1->setObjectName(QStringLiteral("pole1_1"));
        pole1_1->setGeometry(QRect(205, 145, 75, 75));
        pole1_2 = new QPushButton(centralWidget);
        pole1_2->setObjectName(QStringLiteral("pole1_2"));
        pole1_2->setGeometry(QRect(280, 145, 75, 75));
        pole2_0 = new QPushButton(centralWidget);
        pole2_0->setObjectName(QStringLiteral("pole2_0"));
        pole2_0->setGeometry(QRect(130, 215, 75, 75));
        pole2_1 = new QPushButton(centralWidget);
        pole2_1->setObjectName(QStringLiteral("pole2_1"));
        pole2_1->setGeometry(QRect(205, 215, 75, 75));
        pole2_2 = new QPushButton(centralWidget);
        pole2_2->setObjectName(QStringLiteral("pole2_2"));
        pole2_2->setGeometry(QRect(280, 215, 75, 75));
        countcheck = new QLabel(centralWidget);
        countcheck->setObjectName(QStringLiteral("countcheck"));
        countcheck->setGeometry(QRect(400, 70, 121, 21));
        xpoints = new QLabel(centralWidget);
        xpoints->setObjectName(QStringLiteral("xpoints"));
        xpoints->setGeometry(QRect(400, 120, 50, 20));
        xpoints->setFrameShape(QFrame::Box);
        xpoints->setFrameShadow(QFrame::Plain);
        opoints = new QLabel(centralWidget);
        opoints->setObjectName(QStringLiteral("opoints"));
        opoints->setGeometry(QRect(400, 160, 50, 20));
        opoints->setFrameShape(QFrame::Box);
        opoints->setFrameShadow(QFrame::Plain);
        xpointsview = new QLabel(centralWidget);
        xpointsview->setObjectName(QStringLiteral("xpointsview"));
        xpointsview->setGeometry(QRect(465, 120, 140, 20));
        xpointsview->setFrameShape(QFrame::WinPanel);
        opointsview = new QLabel(centralWidget);
        opointsview->setObjectName(QStringLiteral("opointsview"));
        opointsview->setGeometry(QRect(465, 160, 140, 20));
        opointsview->setFrameShape(QFrame::WinPanel);
        GameClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GameClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 680, 21));
        GameClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GameClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GameClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GameClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GameClass->setStatusBar(statusBar);

        retranslateUi(GameClass);

        QMetaObject::connectSlotsByName(GameClass);
    } // setupUi

    void retranslateUi(QMainWindow *GameClass)
    {
        GameClass->setWindowTitle(QApplication::translate("GameClass", "Game", Q_NULLPTR));
        pole0_0->setText(QString());
        pole0_1->setText(QString());
        pole0_2->setText(QString());
        pole1_0->setText(QString());
        pole1_1->setText(QString());
        pole1_2->setText(QString());
        pole2_0->setText(QString());
        pole2_1->setText(QString());
        pole2_2->setText(QString());
        countcheck->setText(QApplication::translate("GameClass", "moves", Q_NULLPTR));
        xpoints->setText(QApplication::translate("GameClass", "X points", Q_NULLPTR));
        opoints->setText(QApplication::translate("GameClass", "Y points", Q_NULLPTR));
        xpointsview->setText(QString());
        opointsview->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameClass: public Ui_GameClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
