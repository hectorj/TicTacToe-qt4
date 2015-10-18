#include <QApplication>
#include "ui_3T.h"
#include "fen.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *fenetre = new fen;
    fenetre->show();

    return app.exec();
}
