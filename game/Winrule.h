#pragma once

#include <iostream>
#include <vector>

#include "ui_Game.h"
#include "qlabel.h"
#include "qpushbutton.h"

using namespace std;

class Winrule
{
public:
	Winrule();
	~Winrule();

	void scorerestriction(/*QPushButton *button, vector<vector<bool>> check*/);
	void pass_x_or_o(char mark, int x, int y);
	void point_send(Ui::GameClass ui, QLabel *pointview1, QLabel *pointview2);
	void whatmark_restore();
	void pushbutton_reset(QPushButton *button);

	int res1();

private:
	int points[2];
	char lastpoint;
	vector<vector<char>> whatmark;
	vector<vector<char>> buckup_whatmark;
	vector<vector<bool>> clicked;
};

