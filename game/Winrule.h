#pragma once

#include <iostream>
#include <vector>

#include "ui_Game.h"
#include "qlabel.h"

using namespace std;

class Winrule
{
public:
	Winrule();
	~Winrule();

	void scorerestriction();
	void pass_x_or_o(char mark, int x, int y);
	void point_send(Ui::GameClass ui, QLabel *pointview1, QLabel *pointview2);

	int res1();

private:
	int points[2];
	char lastpoint;
	vector<vector<char>> score;
	vector<vector<bool>> clicked;
};

