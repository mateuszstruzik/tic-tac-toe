#pragma once

#include <vector>

#include "gamerestriction.h"
#include "Winrule.h"

#include <QtWidgets/QMainWindow>
#include <QMouseEvent>
#include "ui_Game.h"

using namespace std;

class Game : public QMainWindow
{
	Q_OBJECT

public:
	Game(QWidget *parent = Q_NULLPTR);

	private slots :

	void on_pole0_0_clicked();
	void on_pole0_1_clicked();
	void on_pole0_2_clicked();
	void on_pole1_0_clicked();
	void on_pole1_1_clicked();
	void on_pole1_2_clicked();
	void on_pole2_0_clicked();
	void on_pole2_1_clicked();
	void on_pole2_2_clicked();
	
public:
	void mouseclickedcount(QMouseEvent *event, int &clickcount);


private:
	Ui::GameClass ui;
	int clickcount=0;
	const QPointF mouseb;
	QMouseEvent *newmouseevent = new QMouseEvent(QEvent::MouseButtonPress,mouseb, Qt::LeftButton, Qt::LeftButton, Qt::NoModifier);
	Gamerestriction gamerestriction;
	Winrule winrule;

	//vector<bool> check = {0,0,0};
};
