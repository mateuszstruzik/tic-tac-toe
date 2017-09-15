#pragma once

#include <vector>
#include <iostream>
#include <QMouseEvent>
#include "qlabel.h"

#include "ui_Game.h"

using namespace std;
class Gamerestriction
{
public:
	Gamerestriction();
	~Gamerestriction();

	int mouseclickedcounttt(QMouseEvent *event);//, int &clickcount);
	void clickview( QLabel *countcheck);// Ui::GameClass ui,
	bool clickrest( int x, int y);
	void checkchange(int x, int y);
	void check_restore();
	
	bool check_checl(int x, int y);
	//vector<QPushButton*> butttt;

private:
	int click = 0;
	vector<vector<bool>> check;
	vector<vector<bool>> buckup_check;
	
};

