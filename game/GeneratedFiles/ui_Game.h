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
    QPushButton *pole1_1;
    QPushButton *pole2_1;
    QPushButton *pole3_1;
    QPushButton *pole1_2;
    QPushButton *pole2_2;
    QPushButton *pole3_2;
    QPushButton *pole1_3;
    QPushButton *pole2_3;
    QPushButton *pole3_3;
    QLabel *countcheck;
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
        pole1_1 = new QPushButton(centralWidget);
        pole1_1->setObjectName(QStringLiteral("pole1_1"));
        pole1_1->setGeometry(QRect(130, 70, 75, 75));
        pole2_1 = new QPushButton(centralWidget);
        pole2_1->setObjectName(QStringLiteral("pole2_1"));
        pole2_1->setGeometry(QRect(205, 70, 75, 75));
        pole3_1 = new QPushButton(centralWidget);
        pole3_1->setObjectName(QStringLiteral("pole3_1"));
        pole3_1->setGeometry(QRect(280, 70, 75, 75));
        pole1_2 = new QPushButton(centralWidget);
        pole1_2->setObjectName(QStringLiteral("pole1_2"));
        pole1_2->setGeometry(QRect(130, 145, 75, 75));
        pole2_2 = new QPushButton(centralWidget);
        pole2_2->setObjectName(QStringLiteral("pole2_2"));
        pole2_2->setGeometry(QRect(205, 145, 75, 75));
        pole3_2 = new QPushButton(centralWidget);
        pole3_2->setObjectName(QStringLiteral("pole3_2"));
        pole3_2->setGeometry(QRect(280, 145, 75, 75));
        pole1_3 = new QPushButton(centralWidget);
        pole1_3->setObjectName(QStringLiteral("pole1_3"));
        pole1_3->setGeometry(QRect(130, 215, 75, 75));
        pole2_3 = new QPushButton(centralWidget);
        pole2_3->setObjectName(QStringLiteral("pole2_3"));
        pole2_3->setGeometry(QRect(205, 215, 75, 75));
        pole3_3 = new QPushButton(centralWidget);
        pole3_3->setObjectName(QStringLiteral("pole3_3"));
        pole3_3->setGeometry(QRect(280, 215, 75, 75));
        countcheck = new QLabel(centralWidget);
        countcheck->setObjectName(QStringLiteral("countcheck"));
        countcheck->setGeometry(QRect(400, 70, 121, 21));
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
        pole1_1->setText(QString());
        pole2_1->setText(QString());
        pole3_1->setText(QString());
        pole1_2->setText(QString());
        pole2_2->setText(QString());
        pole3_2->setText(QString());
        pole1_3->setText(QString());
        pole2_3->setText(QString());
        pole3_3->setText(QString());
        countcheck->setText(QApplication::translate("GameClass", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GameClass: public Ui_GameClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
