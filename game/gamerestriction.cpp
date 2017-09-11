#include "gamerestriction.h"



Gamerestriction::Gamerestriction(): check(3, vector<bool>(3))
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			check[i][j] = 1;
	}
}


Gamerestriction::~Gamerestriction()
{
}

int Gamerestriction::mouseclickedcounttt(QMouseEvent * event)//, int & clickcount)
{
	if (event->button() == Qt::LeftButton)
	{
		click++;
	}

	return click;
	/*ui.countcheck->setText(QString::number(clickcount));*/
}

void Gamerestriction::clickview(Ui::GameClass ui,QLabel *countcheck )
{
	ui.countcheck->setText(QString::number(click));
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

