#include "fen.h"

fen::fen() : QWidget()
{
    ui.setupUi(this);
	croix.addFile(":/croix.bmp");
	rond.addFile(":/rond.bmp");
	initialize();
	connect(this, SIGNAL(aClicke()), this, SLOT(finDeTour()));
	connect(ui.bouton_debut, SIGNAL(clicked()), this, SLOT(initialize()));
	srand(time(NULL)); 
}
void fen::initialize()
{
	unsigned char i;
	joueur=1;
	tour=0;
	JH[0] = ui.J1H->isChecked();
	JH[1] = ui.J2H->isChecked();
	for(i=1;i<=9;i++)
	{
		bouton[i] = 0;
	}
	ui.pushButton->setIcon(QIcon());
	ui.pushButton_2->setIcon(QIcon());
	ui.pushButton_3->setIcon(QIcon());
	ui.pushButton_4->setIcon(QIcon());
	ui.pushButton_5->setIcon(QIcon());
	ui.pushButton_6->setIcon(QIcon());
	ui.pushButton_7->setIcon(QIcon());
	ui.pushButton_8->setIcon(QIcon());
	ui.pushButton_9->setIcon(QIcon());
	iconJoueur=&croix;
	if(!JH[0])
	{
		jouerIA();
	}
}
void fen::finDeTour()
{
	QString tempString;
	tour++;
	tempString.setNum(verifVictoire(bouton));
	if(tempString=="-1")
	{
		tempString="2";
	}
	if(tempString!="0")
	{
		emit victoire(joueur);
		QMessageBox::information(this, "Victoire !", "Le joueur "+tempString+" a gagné !");
	} else if (tour<9)
	{
		toggleTour();
		
		if(!JH[tour%2])
		{
			jouerIA();
		}
	} else
	{
		QMessageBox::information(this, "Fin", "Match nul !");
	}
}
/////// gestion des boutons
void fen::on_pushButton_clicked()
{
	if (bouton[1]==0)
	{
		ui.pushButton->setIcon(*iconJoueur);
		bouton[1]=joueur;
		emit aClicke();
	}
}
void fen::on_pushButton_2_clicked()
{
	if (bouton[2]==0)
	{
		ui.pushButton_2->setIcon(*iconJoueur);
		bouton[2]=joueur;
		emit aClicke();
	}
}
void fen::on_pushButton_3_clicked()
{
	if (bouton[3]==0)
	{
		ui.pushButton_3->setIcon(*iconJoueur);
		bouton[3]=joueur;
		emit aClicke();
	}
}
void fen::on_pushButton_4_clicked()
{
	if (bouton[4]==0)
	{
		ui.pushButton_4->setIcon(*iconJoueur);
		bouton[4]=joueur;
		emit aClicke();
	}
}
void fen::on_pushButton_5_clicked()
{
	if (bouton[5]==0)
	{
		ui.pushButton_5->setIcon(*iconJoueur);
		bouton[5]=joueur;
		emit aClicke();
	}
}
void fen::on_pushButton_6_clicked()
{
	if (bouton[6]==0)
	{
		ui.pushButton_6->setIcon(*iconJoueur);
		bouton[6]=joueur;
		emit aClicke();
	}
}
void fen::on_pushButton_7_clicked()
{
	if (bouton[7]==0)
	{
		ui.pushButton_7->setIcon(*iconJoueur);
		bouton[7]=joueur;
		emit aClicke();
	}
}
void fen::on_pushButton_8_clicked()
{
	if (bouton[8]==0)
	{
		ui.pushButton_8->setIcon(*iconJoueur);
		bouton[8]=joueur;
		emit aClicke();
	}
}
void fen::on_pushButton_9_clicked()
{
	if (bouton[9]==0)
	{
		ui.pushButton_9->setIcon(*iconJoueur);
		bouton[9]=joueur;
		emit aClicke();
	}
}
///////
void fen::toggleTour()
{
	//QString tempString, tempString2;
	if(joueur==1)
	{
		joueur=-1;
		iconJoueur=&rond;
	} else
	{
		joueur=1;
		iconJoueur=&croix;
	}
}
void fen::jouerIA()
{
	unsigned char e=0;
	char coef=0;
	e=IA(bouton, coef, joueur);
	//QMessageBox::information(this, "retour", tempString.setNum(e)+";"+tempString2.setNum(coef));
	//QMessageBox::information(this, "e", tempString.setNum(e));
	if(e==1)
	{
		ui.pushButton->click();
	} else if (e==2)
	{
		ui.pushButton_2->click();
	} else if (e==3)
	{
		ui.pushButton_3->click();
	} else if (e==4)
	{
		ui.pushButton_4->click();
	} else if (e==5)
	{
		ui.pushButton_5->click();
	} else if (e==6)
	{
		ui.pushButton_6->click();
	} else if (e==7)
	{
		ui.pushButton_7->click();
	} else if (e==8)
	{
		ui.pushButton_8->click();
	} else
	{
		ui.pushButton_9->click();
	}
}
char fen::verifVictoire(char bouton2[10])
{
	if(bouton2[1]!=0)
	{
		if((bouton2[2]==bouton2[1] && bouton2[3]==bouton2[1]) || (bouton2[4]==bouton2[1] && bouton2[7]==bouton2[1]) || (bouton2[5]==bouton2[1] && bouton2[9]==bouton2[1]))
		{
			return bouton2[1];
		}
	}
	if (bouton2[5]!=0)
	{
		if((bouton2[4]==bouton2[5] && bouton2[6]==bouton2[5]) || (bouton2[2]==bouton2[5] && bouton2[8]==bouton2[5]) || (bouton2[3]==bouton2[5] && bouton2[7]==bouton2[5]))
		{
			return bouton2[5];
		}
	}
	if(bouton2[9]!=0)
	{
		if((bouton2[3]==bouton2[9] && bouton2[6]==bouton2[9]) || (bouton2[7]==bouton2[9] && bouton2[8]==bouton2[9]))
		{
			return bouton2[9];
		}
	}
	return 0;
}
char fen::IA(const char bouton3[10], char &coef, char joueur2)
{
	char bouton2[10]={0}, possibilite[10]={0}, possibilite2[9]={0}, coef2=0;
	//QString tempString, tempString2;
	unsigned char i=0, e=0, a=0;
	for(i=1;i<=9;i++)
	{
		if(bouton3[i]==0)
		{
			e=1;
		}
	}
	if(e==1)
	{
		for(i=1;i<=9;i++)
		{
			if(bouton3[i]==0)
			{
				for(e=1;e<=9;e++)
				{
					bouton2[e]=bouton3[e];
				}
				bouton2[i]=joueur2;
				if(verifVictoire(bouton2)==joueur2)
				{
					possibilite[i]=1;
				} else
				{
					coef2=0;
					IA(bouton2, coef2, -joueur2);
					possibilite[i]=(-coef2);
				}
			} else
			{
				possibilite[i]=-100;
			}
		}
		e=1;
		for(i=2;i<=9;i++)
		{
			if(possibilite[i]>possibilite[e])
			{
				e=i;
			}
		}
		possibilite2[0]=e;
		a=0;
		for(i=1;i<9;i++)
		{
			if(possibilite[i]==possibilite[e])
			{
				a++;
				possibilite2[a]=i;
			}
		}
		if(a>0)
		{
			e = possibilite2[(rand() % (a+1))];
			//QMessageBox::information(this, "hasard", "!");
		}
		coef=possibilite[e];
		//QMessageBox::information(this, "retour", tempString.setNum(e)+";"+tempString2.setNum(coef));
		return e;
	} else
	{
		coef=0;
		return 0;
	}
}
