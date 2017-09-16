#pragma once

#include <iostream>
#include <vector>

#include "gamerestriction.h"

#include "ui_Game.h"
#include "qlabel.h"
#include "qpushbutton.h"
#include "qmessagebox.h"

using namespace std;

class Winrule
{
public:
	Winrule();
	~Winrule();

	void scorerestriction(vector<vector<QPushButton *>> buttons, QWidget *pa, Gamerestriction &a, QLabel *pointview1, QLabel *pointview2/*vector<vector<bool>> check*/);
	void pass_x_or_o(char mark, int x, int y);
	void point_send(/*Ui::GameClass ui, */QLabel *pointview1, QLabel *pointview2);
	void whatmark_restore();
	void pushbutton_reset(QPushButton *button);
	int allrules();

	int res1();
	int res2();
	int res3();
	int res4();
	int res5();
	int res6();
	int res7();
	int res8();
	int res9(Gamerestriction &a);

private:
	int par[6];
	int points[2] = { 0,0 };
	char lastpoint;
	vector<vector<char>> whatmark;
	vector<vector<char>> buckup_whatmark;
	vector<vector<bool>> clicked;
};

