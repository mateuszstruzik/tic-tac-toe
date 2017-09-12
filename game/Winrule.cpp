#include "Winrule.h"



Winrule::Winrule():score(3, vector<char>(3)), clicked(3,vector<bool>(3))
{
	score[0][0] = '/';
	score[1][1] = '/';
	score[2][2] = '/';
}


Winrule::~Winrule()
{
}

void Winrule::scorerestriction()
{
	char x = 'X';
	char o = 'O';
	if (int a = res1())
	{
		if (score[0][0] == x)
		{
			points[0] = points[0] + 1;
			lastpoint = x;
		}
		else
		{
			points[1] = points[1] + 1;
			lastpoint = o;
		}
	}
}

void Winrule::pass_x_or_o(char mark, int x, int y)
{
	score[x][y] = mark;
}

void Winrule::point_send(Ui::GameClass ui, QLabel *pointview1, QLabel *pointview2)
{
	if (lastpoint == 'X') {
		pointview1->setText(QString::number(points[0]));
	}
	else if(lastpoint=='O')
	{
		pointview2->setText(QString::number(points[1]));
	}
}

int Winrule::res1()
{
	if (score[0][0] == score[0][1] && score[0][1] == score[0][2])
	{
		return 1;
	}
	else 
		return 0;
	
}
