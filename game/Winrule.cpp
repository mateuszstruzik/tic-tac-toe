#include "Winrule.h"



Winrule::Winrule():whatmark(3, vector<char>(3)),buckup_whatmark(3,vector<char>(3)), clicked(3,vector<bool>(3))
{
	int c = 10;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			whatmark[i][j] = c;
			c = c + 15;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			buckup_whatmark[i][j] = whatmark[i][j];
	}
}


Winrule::~Winrule()
{
}

void Winrule::scorerestriction(vector<vector<QPushButton *>> buttons, QWidget *pa, Gamerestriction &a, QLabel *pointview1, QLabel *pointview2/*, vector<vector<bool>> check*/)
{
	char x = 'X';
	char o = 'O';
	if (allrules())
	{
		if (lastpoint == x)
		{
			points[0] = points[0] + 1;
			//lastpoint = x;
			
		}
		else
		{
			points[1] = points[1] + 1;
			//lastpoint = o;
		}
		//whatmark_restore();
		//pushbutton_reset(button);

		buttons[par[0]][par[1]]->setStyleSheet("background-color: grey");
		buttons[par[2]][par[3]]->setStyleSheet("background-color: grey");
		buttons[par[4]][par[5]]->setStyleSheet("background-color: grey");

		QMessageBox::StandardButton ok = QMessageBox::information(pa, "Point score", "Some player score points, loser starts next party", QMessageBox::Ok);
		if (ok == QMessageBox::Ok) {
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (a.check_checl(i, j))
					{
						buttons[i][j]->setText(" ");
						buttons[i][j]->setStyleSheet("");
					}
				}
			}
			a.check_restore();
			whatmark_restore();
		}
		point_send(pointview1, pointview2);
	}
	else if (res9(a)) {
		QMessageBox::StandardButton ok = QMessageBox::information(pa, "DRAW", "NO points for player , last player play second", QMessageBox::Ok);
		if (ok == QMessageBox::Ok) {
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (a.check_checl(i, j))
					{
						buttons[i][j]->setText(" ");
						buttons[i][j]->setStyleSheet("");
					}
				}
			}
			a.check_restore();
			whatmark_restore();
		}
	}
}

void Winrule::pass_x_or_o(char mark, int x, int y)
{
	whatmark[x][y] = mark;
	lastpoint = whatmark[x][y];
}

void Winrule::point_send(/*Ui::GameClass ui,*/ QLabel *pointview1, QLabel *pointview2)
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

int Winrule::allrules()
{
	if (res1() || res2() || res3() || res4() || res5() || res6() || res7() || res8())
		return 1;
}

int Winrule::res1()
{
	if (whatmark[0][0] == whatmark[0][1] && whatmark[0][1] == whatmark[0][2])
	{
		par[0] = 0; par[1] = 0; par[2] = 0; par[3] = 1; par[4] = 0; par[5] = 2;
		return 1;
		
	}
	else 
		return 0;
	
}

int Winrule::res2()
{
	if ((whatmark[1][0] == whatmark[1][1] && whatmark[1][1] == whatmark[1][2]))
	{
		par[0] = 1; par[1] = 0; par[2] = 1; par[3] = 1; par[4] = 1; par[5] = 2;
		return 1;
	}
	else
		return 0;
}

int Winrule::res3()
{
	if ((whatmark[2][0] == whatmark[2][1] && whatmark[2][1] == whatmark[2][2]))
	{
		par[0] = 2; par[1] = 0; par[2] = 2; par[3] = 1; par[4] = 2; par[5] = 2;
		return 1;
	}
	else
		return 0;
}

int Winrule::res4()
{
	if ((whatmark[0][0] == whatmark[1][0] && whatmark[1][0] == whatmark[2][0]))
	{
		par[0] = 0; par[1] = 0; par[2] = 1; par[3] = 0; par[4] = 2; par[5] = 0;
		return 1;
	}
	else
		return 0;
}

int Winrule::res5()
{
	if ((whatmark[0][1] == whatmark[1][1] && whatmark[1][1] == whatmark[2][1]))
	{
		par[0] = 0; par[1] = 1; par[2] = 1; par[3] = 1; par[4] = 2; par[5] = 1;
		return 1;
	}
	else
		return 0;
}

int Winrule::res6()
{
	if ((whatmark[0][2] == whatmark[1][2] && whatmark[1][2] == whatmark[2][2]))
	{
		par[0] = 0; par[1] = 2; par[2] = 1; par[3] = 2; par[4] = 2; par[5] = 2;
		return 1;
	}
	else
		return 0;
}

int Winrule::res7()
{
	if ((whatmark[0][0] == whatmark[1][1] && whatmark[1][1] == whatmark[2][2]))
	{
		par[0] = 0; par[1] = 0; par[2] = 1; par[3] = 1; par[4] = 2; par[5] = 2;
		return 1;
	}
	else
		return 0;
}

int Winrule::res8()
{
	if ((whatmark[0][2] == whatmark[1][1] && whatmark[1][1] == whatmark[2][0]))
	{
		par[0] = 0; par[1] = 2; par[2] = 1; par[3] = 1; par[4] = 2; par[5] = 0;
		return 1;
	}
	else
		return 0;
}

int Winrule::res9(Gamerestriction &a)
{
	int watch=0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {

			if (a.check_checl(i, j)==1)
				watch++;
		}
	}
	
	if (watch == 9) {
		return 1;
	}
	else
		return 0; 
}