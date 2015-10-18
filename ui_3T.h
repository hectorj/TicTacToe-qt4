/********************************************************************************
** Form generated from reading ui file '3T.ui'
**
** Created: Sun 12. Oct 13:17:02 2008
**      by: Qt User Interface Compiler version 4.4.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_3T_H
#define UI_3T_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fen
{
public:
    QGridLayout *gridLayout;
    QCheckBox *J1H;
    QCheckBox *J2H;
    QPushButton *bouton_debut;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;

    void setupUi(QWidget *fen)
    {
    if (fen->objectName().isEmpty())
        fen->setObjectName(QString::fromUtf8("fen"));
    fen->resize(279, 128);
    gridLayout = new QGridLayout(fen);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    J1H = new QCheckBox(fen);
    J1H->setObjectName(QString::fromUtf8("J1H"));
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/croix.bmp")), QIcon::Normal, QIcon::Off);
    J1H->setIcon(icon);
    J1H->setChecked(true);

    gridLayout->addWidget(J1H, 0, 0, 1, 1);

    J2H = new QCheckBox(fen);
    J2H->setObjectName(QString::fromUtf8("J2H"));
    QIcon icon1;
    icon1.addPixmap(QPixmap(QString::fromUtf8(":/rond.bmp")), QIcon::Normal, QIcon::Off);
    J2H->setIcon(icon1);

    gridLayout->addWidget(J2H, 0, 1, 1, 1);

    bouton_debut = new QPushButton(fen);
    bouton_debut->setObjectName(QString::fromUtf8("bouton_debut"));

    gridLayout->addWidget(bouton_debut, 0, 2, 1, 1);

    pushButton = new QPushButton(fen);
    pushButton->setObjectName(QString::fromUtf8("pushButton"));
    pushButton->setCheckable(false);
    pushButton->setChecked(false);

    gridLayout->addWidget(pushButton, 1, 0, 1, 1);

    pushButton_2 = new QPushButton(fen);
    pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

    gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

    pushButton_3 = new QPushButton(fen);
    pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

    gridLayout->addWidget(pushButton_3, 1, 2, 1, 1);

    pushButton_4 = new QPushButton(fen);
    pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

    gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

    pushButton_5 = new QPushButton(fen);
    pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

    gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

    pushButton_6 = new QPushButton(fen);
    pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

    gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);

    pushButton_7 = new QPushButton(fen);
    pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

    gridLayout->addWidget(pushButton_7, 3, 0, 1, 1);

    pushButton_8 = new QPushButton(fen);
    pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

    gridLayout->addWidget(pushButton_8, 3, 1, 1, 1);

    pushButton_9 = new QPushButton(fen);
    pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

    gridLayout->addWidget(pushButton_9, 3, 2, 1, 1);


    retranslateUi(fen);

    QMetaObject::connectSlotsByName(fen);
    } // setupUi

    void retranslateUi(QWidget *fen)
    {
    fen->setWindowTitle(QApplication::translate("fen", "Tic Tac Toe", 0, QApplication::UnicodeUTF8));
    J1H->setText(QApplication::translate("fen", "Joueur 1", 0, QApplication::UnicodeUTF8));
    J2H->setText(QApplication::translate("fen", "Joueur 2", 0, QApplication::UnicodeUTF8));
    bouton_debut->setText(QApplication::translate("fen", "Go !", 0, QApplication::UnicodeUTF8));
    pushButton->setShortcut(QApplication::translate("fen", "1", 0, QApplication::UnicodeUTF8));
    pushButton_2->setShortcut(QApplication::translate("fen", "2", 0, QApplication::UnicodeUTF8));
    pushButton_3->setShortcut(QApplication::translate("fen", "3", 0, QApplication::UnicodeUTF8));
    pushButton_4->setShortcut(QApplication::translate("fen", "4", 0, QApplication::UnicodeUTF8));
    pushButton_5->setShortcut(QApplication::translate("fen", "5", 0, QApplication::UnicodeUTF8));
    pushButton_6->setShortcut(QApplication::translate("fen", "6", 0, QApplication::UnicodeUTF8));
    pushButton_7->setShortcut(QApplication::translate("fen", "7", 0, QApplication::UnicodeUTF8));
    pushButton_8->setShortcut(QApplication::translate("fen", "8", 0, QApplication::UnicodeUTF8));
    pushButton_9->setShortcut(QApplication::translate("fen", "9", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(fen);
    } // retranslateUi

};

namespace Ui {
    class fen: public Ui_fen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_3T_H
