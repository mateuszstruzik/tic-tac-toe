#include "gamerestriction.h"



Gamerestriction::Gamerestriction(): check(3, vector<bool>(3)), buckup_check(3,vector<bool>(3))//, butttt(2)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			check[i][j] = 1;
			buckup_check[i][j] = check[i][j];
		}
	}

	
}


Gamerestriction::~Gamerestriction()
{
}

int Gamerestriction::mouseclickedcounttt(QMouseEvent * event)
{
	if (event->button() == Qt::LeftButton)
	{
		click++;
	}

	return click;
	
}

void Gamerestriction::clickview(QLabel *countcheck1 )//Ui::GameClass ui,
{
	//ui.
		countcheck1->setText(QString::number(click));
}

bool Gamerestriction::clickrest(int x , int y)
{
	if (check[x][y]) {
		return true;
	}
	else
	{
		return false;
	}
	
}

void Gamerestriction::checkchange(int x, int y)
{
	check[x][y] = 0;
}

void Gamerestriction::check_restore()
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			check[i][j] = buckup_check[i][j];
	}
}

bool Gamerestriction::check_checl(int x, int y)
{
	if (check[x][y] == 0)
		return true;
	else
		return false;
}

