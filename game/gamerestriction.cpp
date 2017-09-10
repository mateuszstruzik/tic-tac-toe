#include "gamerestriction.h"



Gamerestriction::Gamerestriction()
{
}


Gamerestriction::~Gamerestriction()
{
}

void Gamerestriction::mouseclickedcounttt(QMouseEvent * event)//, int & clickcount)
{
	if (event->button() == Qt::LeftButton)
	{
		click++;
	}

	/*ui.countcheck->setText(QString::number(clickcount));*/
}

void Gamerestriction::clickview(Ui::GameClass ui,QLabel *countcheck )
{
	ui.countcheck->setText(QString::number(click));
}
