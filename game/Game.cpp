#include "Game.h"

Game::Game(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void Game::on_pole0_0_clicked()
{
	//bool check = 0;
	if (gamerestriction.clickrest(0,0)) {
		if (clickcount % 2 == 0) {
			ui.pole0_0->setText("X");
		}
		else {
			ui.pole0_0->setText("O");
		}

		clickcount = gamerestriction.mouseclickedcounttt(newmouseevent);
		gamerestriction.clickview(ui, ui.countcheck);
		gamerestriction.checkchange(0, 0);
		//check[0] = 1;
	}
}
void Game::on_pole0_1_clicked()
{
	if (gamerestriction.clickrest(0, 1)) {
		if (clickcount % 2 == 0) {
			ui.pole0_1->setText("X");
		}
		else {
			ui.pole0_1->setText("O");
		}
		clickcount = gamerestriction.mouseclickedcounttt(newmouseevent);
		gamerestriction.clickview(ui, ui.countcheck);
		gamerestriction.checkchange(0, 1);
	}
}
void Game::on_pole0_2_clicked()
{
	{
		if (gamerestriction.clickrest(0, 2)) {
			if (clickcount % 2 == 0) {
				ui.pole0_2->setText("X");
			}
			else {
				ui.pole0_2->setText("O");
			}
			clickcount = gamerestriction.mouseclickedcounttt(newmouseevent);
			gamerestriction.clickview(ui, ui.countcheck);
			gamerestriction.checkchange(0, 2);
		}
	}
}
void Game::on_pole1_0_clicked()
{
	if (gamerestriction.clickrest(1,0)) {
		if (clickcount % 2 == 0) {
			ui.pole1_0->setText("X");
		}
		else {
			ui.pole1_0->setText("O");
		}
		clickcount = gamerestriction.mouseclickedcounttt(newmouseevent);
		gamerestriction.clickview(ui, ui.countcheck);
		gamerestriction.checkchange(1, 0);
	}
}
void Game::on_pole1_1_clicked()
{
	if (gamerestriction.clickrest(1, 1)) {
		if (clickcount % 2 == 0) {
			ui.pole1_1->setText("X");
		}
		else {
			ui.pole1_1->setText("O");
		}
		//mouseclickedcount(newmouseevent, clickcount);

		clickcount = gamerestriction.mouseclickedcounttt(newmouseevent);
		gamerestriction.clickview(ui, ui.countcheck);
		gamerestriction.checkchange(1, 1);
	}
}
void Game::on_pole1_2_clicked()
{
	if (gamerestriction.clickrest(1, 2)) {
		if (clickcount % 2 == 0) {
			ui.pole1_2->setText("X");
		}
		else {
			ui.pole1_2->setText("O");
		}
		//mouseclickedcount(newmouseevent, clickcount);

		clickcount = gamerestriction.mouseclickedcounttt(newmouseevent);
		gamerestriction.clickview(ui, ui.countcheck);
		gamerestriction.checkchange(1, 2);
	}
}

void Game::on_pole2_0_clicked()
{
	if (gamerestriction.clickrest(2, 0)) {
		if (clickcount % 2 == 0) {
			ui.pole2_0->setText("X");
		}
		else {
			ui.pole2_0->setText("O");
		}
		//mouseclickedcount(newmouseevent, clickcount);

		clickcount = gamerestriction.mouseclickedcounttt(newmouseevent);
		gamerestriction.clickview(ui, ui.countcheck);
		gamerestriction.checkchange(2, 0);
	}
}

void Game::on_pole2_1_clicked()
{
	if (gamerestriction.clickrest(2, 1)) {
		if (clickcount % 2 == 0) {
			ui.pole2_1->setText("X");
		}
		else {
			ui.pole2_1->setText("O");
		}
		//mouseclickedcount(newmouseevent, clickcount);

		clickcount = gamerestriction.mouseclickedcounttt(newmouseevent);
		gamerestriction.clickview(ui, ui.countcheck);
		gamerestriction.checkchange(2, 1);
	}
}

void Game::on_pole2_2_clicked()
{
	if (gamerestriction.clickrest(2, 2)) {
		if (clickcount % 2 == 0) {
			ui.pole2_2->setText("X");
		}
		else {
			ui.pole2_2->setText("O");
		}
		//mouseclickedcount(newmouseevent, clickcount);

		clickcount = gamerestriction.mouseclickedcounttt(newmouseevent);
		gamerestriction.clickview(ui, ui.countcheck);
		gamerestriction.checkchange(2, 2);
	}
}

void Game::mouseclickedcount(QMouseEvent * event, int & clickcount)
{
	if (event->button() == Qt::LeftButton)
	{
		clickcount++;
	}

	ui.countcheck->setText(QString::number(clickcount));
}
