#include "Game.h"

Game::Game(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void Game::on_pole1_1_clicked()
{
	//bool check = 0;
	if (check[0] == 0) {
		if (clickcount % 2 == 0) {
			ui.pole1_1->setText("X");
		}
		else {
			ui.pole1_1->setText("O");
		}

		mouseclickedcount(newmouseevent, clickcount);
		check[0] = 1;
	}
}
void Game::on_pole1_2_clicked()
{
	if (check[1] == 0) {
		if (clickcount % 2 == 0) {
			ui.pole1_2->setText("X");
		}
		else {
			ui.pole1_2->setText("O");
		}
		mouseclickedcount(newmouseevent, clickcount);
		check[1] = 1;
	}
}
void Game::on_pole1_3_clicked()
{
	
		if (clickcount % 2 == 0) {
			ui.pole1_3->setText("X");
		}
		else {
			ui.pole1_3->setText("O");
		}
		//mouseclickedcount(newmouseevent, clickcount);
	
		gamerestriction.mouseclickedcounttt(newmouseevent);
		gamerestriction.clickview(ui, ui.countcheck);
}

void Game::mouseclickedcount(QMouseEvent * event, int & clickcount)
{
	if (event->button() == Qt::LeftButton)
	{
		clickcount++;
	}

	ui.countcheck->setText(QString::number(clickcount));
}
