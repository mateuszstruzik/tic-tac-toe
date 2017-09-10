#pragma once

#include <QMouseEvent>
#include "qlabel.h"

#include "ui_Game.h"
class Gamerestriction
{
public:
	Gamerestriction();
	~Gamerestriction();

	void mouseclickedcounttt(QMouseEvent *event);//, int &clickcount);
	void clickview(Ui::GameClass ui, QLabel *countcheck);

private:
	int click = 0;

};

