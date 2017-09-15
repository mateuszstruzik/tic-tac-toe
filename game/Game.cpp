#include "Game.h"

Game::Game(QWidget *parent)
	: QMainWindow(parent), buttonsvector(3,vector<QPushButton*>(3))
{
	ui.setupUi(this);

	buttonsvector[0][0] = ui.pole0_0;
	buttonsvector[0][1] = ui.pole0_1;
	buttonsvector[0][2] = ui.pole0_2;
	buttonsvector[1][0] = ui.pole1_0;
	buttonsvector[1][1] = ui.pole1_1;
	buttonsvector[1][2] = ui.pole1_2;

}

void Game::on_pole0_0_clicked()
{
	//bool check = 0;
	if (gamerestriction.clickrest(0, 0)) {
		if (clickcount % 2 == 0) {
			ui.pole0_0->setText("X");
			winrule.pass_x_or_o('X', 0, 0);
		}
		else {
			ui.pole0_0->setText("O");
			winrule.pass_x_or_o('O', 0, 0);
		}

		clickcount = gamerestriction.mouseclickedcounttt(newmouseevent);
		gamerestriction.clickview(ui.countcheck);
		gamerestriction.checkchange(0, 0);
		winrule.scorerestriction(buttonsvector, this, gamerestriction, ui.xpointsview, ui.opointsview);
		//	if (winrule.res1()) {
		//		buttonsvector[0][0]->setStyleSheet("background-color: grey");
		//		buttonsvector[0][1]->setStyleSheet("background-color: grey");
		//		buttonsvector[0][2]->setStyleSheet("background-color: grey");
		//
		//		QMessageBox::StandardButton ok = QMessageBox::information(this, "Point score", "Some player score points, loser starts next party", QMessageBox::Ok);
		//		if (ok == QMessageBox::Ok) {
		//			for (int i = 0; i < 2; i++)
		//			{
		//				for (int j = 0; j < 3; j++)
		//				{
		//					if (gamerestriction.check_checl(i, j))
		//					{
		//						buttonsvector[i][j]->setText(" ");
		//						buttonsvector[i][j]->setStyleSheet("");
		//					}
		//				}
		//			}
		//			gamerestriction.check_restore();
		//			winrule.whatmark_restore();
		//		}

		//	}
		//	winrule.point_send(/*ui,*/ ui.xpointsview, ui.opointsview);
		//}
	}
}
void Game::on_pole0_1_clicked()
{
	if (gamerestriction.clickrest(0, 1)) {
		if (clickcount % 2 == 0) {
			ui.pole0_1->setText("X");
			winrule.pass_x_or_o('X', 0, 1);
		}
		else {
			ui.pole0_1->setText("O");
			winrule.pass_x_or_o('O', 0, 1);
		}
		clickcount = gamerestriction.mouseclickedcounttt(newmouseevent);
		gamerestriction.clickview(ui.countcheck);
		gamerestriction.checkchange(0, 1);
//		winrule.scorerestriction();
		winrule.point_send(ui.xpointsview, ui.opointsview);
	}
}
void Game::on_pole0_2_clicked()
{
	{
		if (gamerestriction.clickrest(0, 2)) {
			if (clickcount % 2 == 0) {
				ui.pole0_2->setText("X");
				winrule.pass_x_or_o('X', 0, 2);
			}
			else {
				ui.pole0_2->setText("O");
				winrule.pass_x_or_o('O', 0, 2);
				
			}
			clickcount = gamerestriction.mouseclickedcounttt(newmouseevent);
			gamerestriction.clickview(ui.countcheck);
			gamerestriction.checkchange(0, 2);
//			winrule.scorerestriction();
//			winrule.point_send(ui, ui.xpointsview, ui.opointsview);
		}
	}
}
void Game::on_pole1_0_clicked()
{
	if (gamerestriction.clickrest(1,0)) {
		if (clickcount % 2 == 0) {
			ui.pole1_0->setText("X");
			winrule.pass_x_or_o('X', 1, 0);
		}
		else {
			ui.pole1_0->setText("O");
			winrule.pass_x_or_o('O', 1, 0);
		}
		clickcount = gamerestriction.mouseclickedcounttt(newmouseevent);
		gamerestriction.clickview(ui.countcheck);
		gamerestriction.checkchange(1, 0);
		winrule.scorerestriction(buttonsvector, this, gamerestriction, ui.xpointsview, ui.opointsview);
		//winrule.point_send(ui.xpointsview, ui.opointsview);
	}
}
void Game::on_pole1_1_clicked()
{
	if (gamerestriction.clickrest(1, 1)) {
		if (clickcount % 2 == 0) {
			ui.pole1_1->setText("X");
			winrule.pass_x_or_o('X', 1, 1);
		}
		else {
			ui.pole1_1->setText("O");
			winrule.pass_x_or_o('O', 1, 1);
		}
		//mouseclickedcount(newmouseevent, clickcount);

		clickcount = gamerestriction.mouseclickedcounttt(newmouseevent);
		gamerestriction.clickview(ui.countcheck);
		gamerestriction.checkchange(1, 1);
//		winrule.scorerestriction();
		winrule.point_send(ui.xpointsview, ui.opointsview);
	}
}
void Game::on_pole1_2_clicked()
{
	if (gamerestriction.clickrest(1, 2)) {
		if (clickcount % 2 == 0) {
			ui.pole1_2->setText("X");
			winrule.pass_x_or_o('X', 1, 2);
		}
		else {
			ui.pole1_2->setText("O");
			winrule.pass_x_or_o('O', 1, 2);
		}
		//mouseclickedcount(newmouseevent, clickcount);

		clickcount = gamerestriction.mouseclickedcounttt(newmouseevent);
		gamerestriction.clickview(ui.countcheck);
		gamerestriction.checkchange(1, 2);
//		winrule.scorerestriction();
//		winrule.point_send(ui, ui.xpointsview, ui.opointsview);
	}
}

void Game::on_pole2_0_clicked()
{
	if (gamerestriction.clickrest(2, 0)) {
		if (clickcount % 2 == 0) {
			ui.pole2_0->setText("X");
			winrule.pass_x_or_o('X', 2, 0);
		}
		else {
			ui.pole2_0->setText("O");
			winrule.pass_x_or_o('X', 2, 0);
		}
		//mouseclickedcount(newmouseevent, clickcount);

		clickcount = gamerestriction.mouseclickedcounttt(newmouseevent);
		gamerestriction.clickview(ui.countcheck);
		gamerestriction.checkchange(2, 0);
//		winrule.scorerestriction();
//		winrule.point_send(ui, ui.xpointsview, ui.opointsview);
	}
}

void Game::on_pole2_1_clicked()
{
	if (gamerestriction.clickrest(2, 1)) {
		if (clickcount % 2 == 0) {
			ui.pole2_1->setText("X");
			winrule.pass_x_or_o('X', 2, 1);
		}
		else {
			ui.pole2_1->setText("O");
			winrule.pass_x_or_o('O', 2, 1);
		}
		//mouseclickedcount(newmouseevent, clickcount);

		clickcount = gamerestriction.mouseclickedcounttt(newmouseevent);
		gamerestriction.clickview(ui.countcheck);
		gamerestriction.checkchange(2, 1);
//		winrule.scorerestriction();
//		winrule.point_send(ui, ui.xpointsview, ui.opointsview);
	}
}

void Game::on_pole2_2_clicked()
{
	if (gamerestriction.clickrest(2, 2)) {
		if (clickcount % 2 == 0) {
			ui.pole2_2->setText("X");
			winrule.pass_x_or_o('X', 2, 2);
		}
		else {
			ui.pole2_2->setText("O");
			winrule.pass_x_or_o('O', 2, 2);
		}
		//mouseclickedcount(newmouseevent, clickcount);

		clickcount = gamerestriction.mouseclickedcounttt(newmouseevent);
		gamerestriction.clickview(ui.countcheck);
		gamerestriction.checkchange(2, 2);
//		winrule.scorerestriction();
//		winrule.point_send(ui, ui.xpointsview, ui.opointsview);
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
