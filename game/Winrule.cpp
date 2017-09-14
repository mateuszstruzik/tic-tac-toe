#include "Winrule.h"



Winrule::Winrule():whatmark(3, vector<char>(3)),buckup_whatmark(3,vector<char>(3)), clicked(3,vector<bool>(3))
{
	whatmark[0][0] = '/';
	whatmark[1][1] = '/';
	whatmark[2][2] = '/';
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			buckup_whatmark[i][j] = whatmark[i][j];
	}
}


Winrule::~Winrule()
{
}

void Winrule::scorerestriction(/*QPushButton *button, vector<vector<bool>> check*/)
{
	char x = 'X';
	char o = 'O';
	if (int a = res1())
	{
		if (whatmark[0][0] == x)
		{
			points[0] = points[0] + 1;
			lastpoint = x;
			
		}
		else
		{
			points[1] = points[1] + 1;
			lastpoint = o;
		}
		//whatmark_restore();
		//pushbutton_reset(button);
	}
}

void Winrule::pass_x_or_o(char mark, int x, int y)
{
	whatmark[x][y] = mark;
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

void Winrule::whatmark_restore()
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			whatmark[i][j] = buckup_whatmark[i][j];
	}
}

void Winrule::pushbutton_reset(QPushButton * button)
{
	button->setText("");
}

int Winrule::res1()
{
	if (whatmark[0][0] == whatmark[0][1] && whatmark[0][1] == whatmark[0][2])
	{
		return 1;
	}
	else 
		return 0;
	
}
