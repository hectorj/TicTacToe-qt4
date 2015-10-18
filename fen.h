#include <QtGui>
#include "ui_3T.h"
#include <time.h>
#include <stdlib.h>

class fen : public QWidget
{
    Q_OBJECT
    public:
        fen();
	public slots:
		void on_pushButton_clicked();
		void on_pushButton_2_clicked();
		void on_pushButton_3_clicked();
		void on_pushButton_4_clicked();
		void on_pushButton_5_clicked();
		void on_pushButton_6_clicked();
		void on_pushButton_7_clicked();
		void on_pushButton_8_clicked();
		void on_pushButton_9_clicked();
		void finDeTour();
		void initialize();
	signals:
		void aClicke();
		void victoire(char joueur);
	private:
		void jouerIA();
		char verifVictoire(char* bouton2);
		char IA(const char bouton3[10], char &coef, char joueur2);
		void toggleTour();
		/////
        Ui::fen ui;
		char bouton[10];
		QIcon croix, rond;
		QIcon* iconJoueur;
		char joueur;
		unsigned char tour;
		bool JH[2];
};
