/********************************************************************************
** Form generated from reading UI file 'keyboard.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYBOARD_H
#define UI_KEYBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Keyboard
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *backButton;
    QPushButton *clear;
    QGridLayout *gridLayout;
    QPushButton *Buttonz;
    QPushButton *Buttonx;
    QPushButton *Buttonv;
    QPushButton *Buttonb;
    QPushButton *Buttonn;
    QPushButton *Buttonm;
    QPushButton *char_2;
    QPushButton *space;
    QPushButton *Buttonq;
    QPushButton *Buttonw;
    QPushButton *Buttone;
    QPushButton *Buttons;
    QPushButton *Buttond;
    QPushButton *Buttonf;
    QPushButton *Buttong;
    QPushButton *Buttonh;
    QPushButton *Buttonj;
    QPushButton *Buttonl;
    QPushButton *Buttonp;
    QPushButton *enterButton;
    QPushButton *Buttona;
    QPushButton *shift;
    QPushButton *Buttonc;
    QPushButton *Buttonk;
    QPushButton *Buttonr;
    QPushButton *Buttont;
    QPushButton *Buttony;
    QPushButton *Buttonu;
    QPushButton *Buttoni;
    QPushButton *Buttono;

    void setupUi(QWidget *Keyboard)
    {
        if (Keyboard->objectName().isEmpty())
            Keyboard->setObjectName(QStringLiteral("Keyboard"));
        Keyboard->setWindowModality(Qt::NonModal);
        Keyboard->resize(600, 315);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Keyboard->sizePolicy().hasHeightForWidth());
        Keyboard->setSizePolicy(sizePolicy);
        Keyboard->setWindowTitle(QStringLiteral("Keyboard"));
        Keyboard->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(Keyboard);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit = new QLineEdit(Keyboard);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(lineEdit);

        backButton = new QPushButton(Keyboard);
        backButton->setObjectName(QStringLiteral("backButton"));

        horizontalLayout->addWidget(backButton);

        clear = new QPushButton(Keyboard);
        clear->setObjectName(QStringLiteral("clear"));

        horizontalLayout->addWidget(clear);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Buttonz = new QPushButton(Keyboard);
        Buttonz->setObjectName(QStringLiteral("Buttonz"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Buttonz->sizePolicy().hasHeightForWidth());
        Buttonz->setSizePolicy(sizePolicy1);
        Buttonz->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttonz, 3, 1, 1, 1);

        Buttonx = new QPushButton(Keyboard);
        Buttonx->setObjectName(QStringLiteral("Buttonx"));
        sizePolicy1.setHeightForWidth(Buttonx->sizePolicy().hasHeightForWidth());
        Buttonx->setSizePolicy(sizePolicy1);
        Buttonx->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttonx, 3, 2, 1, 1);

        Buttonv = new QPushButton(Keyboard);
        Buttonv->setObjectName(QStringLiteral("Buttonv"));
        sizePolicy1.setHeightForWidth(Buttonv->sizePolicy().hasHeightForWidth());
        Buttonv->setSizePolicy(sizePolicy1);
        Buttonv->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttonv, 3, 4, 1, 1);

        Buttonb = new QPushButton(Keyboard);
        Buttonb->setObjectName(QStringLiteral("Buttonb"));
        sizePolicy1.setHeightForWidth(Buttonb->sizePolicy().hasHeightForWidth());
        Buttonb->setSizePolicy(sizePolicy1);
        Buttonb->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttonb, 3, 5, 1, 1);

        Buttonn = new QPushButton(Keyboard);
        Buttonn->setObjectName(QStringLiteral("Buttonn"));
        sizePolicy1.setHeightForWidth(Buttonn->sizePolicy().hasHeightForWidth());
        Buttonn->setSizePolicy(sizePolicy1);
        Buttonn->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttonn, 3, 6, 1, 1);

        Buttonm = new QPushButton(Keyboard);
        Buttonm->setObjectName(QStringLiteral("Buttonm"));
        sizePolicy1.setHeightForWidth(Buttonm->sizePolicy().hasHeightForWidth());
        Buttonm->setSizePolicy(sizePolicy1);
        Buttonm->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttonm, 3, 7, 1, 1);

        char_2 = new QPushButton(Keyboard);
        char_2->setObjectName(QStringLiteral("char_2"));
        sizePolicy1.setHeightForWidth(char_2->sizePolicy().hasHeightForWidth());
        char_2->setSizePolicy(sizePolicy1);
        char_2->setMinimumSize(QSize(20, 0));
        char_2->setCheckable(true);
        char_2->setChecked(false);

        gridLayout->addWidget(char_2, 3, 8, 2, 1);

        space = new QPushButton(Keyboard);
        space->setObjectName(QStringLiteral("space"));
        space->setMinimumSize(QSize(20, 50));

        gridLayout->addWidget(space, 4, 1, 1, 7);

        Buttonq = new QPushButton(Keyboard);
        Buttonq->setObjectName(QStringLiteral("Buttonq"));
        sizePolicy1.setHeightForWidth(Buttonq->sizePolicy().hasHeightForWidth());
        Buttonq->setSizePolicy(sizePolicy1);
        Buttonq->setMinimumSize(QSize(20, 0));
        Buttonq->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(Buttonq, 0, 0, 1, 1);

        Buttonw = new QPushButton(Keyboard);
        Buttonw->setObjectName(QStringLiteral("Buttonw"));
        sizePolicy1.setHeightForWidth(Buttonw->sizePolicy().hasHeightForWidth());
        Buttonw->setSizePolicy(sizePolicy1);
        Buttonw->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttonw, 0, 1, 1, 1);

        Buttone = new QPushButton(Keyboard);
        Buttone->setObjectName(QStringLiteral("Buttone"));
        sizePolicy1.setHeightForWidth(Buttone->sizePolicy().hasHeightForWidth());
        Buttone->setSizePolicy(sizePolicy1);
        Buttone->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttone, 0, 2, 1, 1);

        Buttons = new QPushButton(Keyboard);
        Buttons->setObjectName(QStringLiteral("Buttons"));
        sizePolicy1.setHeightForWidth(Buttons->sizePolicy().hasHeightForWidth());
        Buttons->setSizePolicy(sizePolicy1);
        Buttons->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttons, 2, 1, 1, 1);

        Buttond = new QPushButton(Keyboard);
        Buttond->setObjectName(QStringLiteral("Buttond"));
        sizePolicy1.setHeightForWidth(Buttond->sizePolicy().hasHeightForWidth());
        Buttond->setSizePolicy(sizePolicy1);
        Buttond->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttond, 2, 2, 1, 1);

        Buttonf = new QPushButton(Keyboard);
        Buttonf->setObjectName(QStringLiteral("Buttonf"));
        sizePolicy1.setHeightForWidth(Buttonf->sizePolicy().hasHeightForWidth());
        Buttonf->setSizePolicy(sizePolicy1);
        Buttonf->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttonf, 2, 3, 1, 1);

        Buttong = new QPushButton(Keyboard);
        Buttong->setObjectName(QStringLiteral("Buttong"));
        sizePolicy1.setHeightForWidth(Buttong->sizePolicy().hasHeightForWidth());
        Buttong->setSizePolicy(sizePolicy1);
        Buttong->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttong, 2, 4, 1, 1);

        Buttonh = new QPushButton(Keyboard);
        Buttonh->setObjectName(QStringLiteral("Buttonh"));
        sizePolicy1.setHeightForWidth(Buttonh->sizePolicy().hasHeightForWidth());
        Buttonh->setSizePolicy(sizePolicy1);
        Buttonh->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttonh, 2, 5, 1, 1);

        Buttonj = new QPushButton(Keyboard);
        Buttonj->setObjectName(QStringLiteral("Buttonj"));
        sizePolicy1.setHeightForWidth(Buttonj->sizePolicy().hasHeightForWidth());
        Buttonj->setSizePolicy(sizePolicy1);
        Buttonj->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttonj, 2, 6, 1, 1);

        Buttonl = new QPushButton(Keyboard);
        Buttonl->setObjectName(QStringLiteral("Buttonl"));
        sizePolicy1.setHeightForWidth(Buttonl->sizePolicy().hasHeightForWidth());
        Buttonl->setSizePolicy(sizePolicy1);
        Buttonl->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttonl, 2, 8, 1, 1);

        Buttonp = new QPushButton(Keyboard);
        Buttonp->setObjectName(QStringLiteral("Buttonp"));
        sizePolicy1.setHeightForWidth(Buttonp->sizePolicy().hasHeightForWidth());
        Buttonp->setSizePolicy(sizePolicy1);
        Buttonp->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttonp, 0, 9, 1, 1);

        enterButton = new QPushButton(Keyboard);
        enterButton->setObjectName(QStringLiteral("enterButton"));
        sizePolicy1.setHeightForWidth(enterButton->sizePolicy().hasHeightForWidth());
        enterButton->setSizePolicy(sizePolicy1);
        enterButton->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(enterButton, 2, 9, 3, 1);

        Buttona = new QPushButton(Keyboard);
        Buttona->setObjectName(QStringLiteral("Buttona"));
        sizePolicy1.setHeightForWidth(Buttona->sizePolicy().hasHeightForWidth());
        Buttona->setSizePolicy(sizePolicy1);
        Buttona->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttona, 2, 0, 1, 1);

        shift = new QPushButton(Keyboard);
        shift->setObjectName(QStringLiteral("shift"));
        sizePolicy1.setHeightForWidth(shift->sizePolicy().hasHeightForWidth());
        shift->setSizePolicy(sizePolicy1);
        shift->setMinimumSize(QSize(20, 0));
        shift->setStyleSheet(QStringLiteral(""));
        shift->setCheckable(false);

        gridLayout->addWidget(shift, 3, 0, 2, 1);

        Buttonc = new QPushButton(Keyboard);
        Buttonc->setObjectName(QStringLiteral("Buttonc"));
        sizePolicy1.setHeightForWidth(Buttonc->sizePolicy().hasHeightForWidth());
        Buttonc->setSizePolicy(sizePolicy1);
        Buttonc->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttonc, 3, 3, 1, 1);

        Buttonk = new QPushButton(Keyboard);
        Buttonk->setObjectName(QStringLiteral("Buttonk"));
        sizePolicy1.setHeightForWidth(Buttonk->sizePolicy().hasHeightForWidth());
        Buttonk->setSizePolicy(sizePolicy1);
        Buttonk->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttonk, 2, 7, 1, 1);

        Buttonr = new QPushButton(Keyboard);
        Buttonr->setObjectName(QStringLiteral("Buttonr"));
        sizePolicy1.setHeightForWidth(Buttonr->sizePolicy().hasHeightForWidth());
        Buttonr->setSizePolicy(sizePolicy1);
        Buttonr->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttonr, 0, 3, 1, 1);

        Buttont = new QPushButton(Keyboard);
        Buttont->setObjectName(QStringLiteral("Buttont"));
        sizePolicy1.setHeightForWidth(Buttont->sizePolicy().hasHeightForWidth());
        Buttont->setSizePolicy(sizePolicy1);
        Buttont->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttont, 0, 4, 1, 1);

        Buttony = new QPushButton(Keyboard);
        Buttony->setObjectName(QStringLiteral("Buttony"));
        sizePolicy1.setHeightForWidth(Buttony->sizePolicy().hasHeightForWidth());
        Buttony->setSizePolicy(sizePolicy1);
        Buttony->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttony, 0, 5, 1, 1);

        Buttonu = new QPushButton(Keyboard);
        Buttonu->setObjectName(QStringLiteral("Buttonu"));
        sizePolicy1.setHeightForWidth(Buttonu->sizePolicy().hasHeightForWidth());
        Buttonu->setSizePolicy(sizePolicy1);
        Buttonu->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttonu, 0, 6, 1, 1);

        Buttoni = new QPushButton(Keyboard);
        Buttoni->setObjectName(QStringLiteral("Buttoni"));
        sizePolicy1.setHeightForWidth(Buttoni->sizePolicy().hasHeightForWidth());
        Buttoni->setSizePolicy(sizePolicy1);
        Buttoni->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttoni, 0, 7, 1, 1);

        Buttono = new QPushButton(Keyboard);
        Buttono->setObjectName(QStringLiteral("Buttono"));
        sizePolicy1.setHeightForWidth(Buttono->sizePolicy().hasHeightForWidth());
        Buttono->setSizePolicy(sizePolicy1);
        Buttono->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(Buttono, 0, 8, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Keyboard);

        QMetaObject::connectSlotsByName(Keyboard);
    } // setupUi

    void retranslateUi(QWidget *Keyboard)
    {
        backButton->setText(QApplication::translate("Keyboard", "Back", 0));
        clear->setText(QApplication::translate("Keyboard", "Clear", 0));
        Buttonz->setText(QApplication::translate("Keyboard", "z", 0));
        Buttonx->setText(QApplication::translate("Keyboard", "x", 0));
        Buttonv->setText(QApplication::translate("Keyboard", "v", 0));
        Buttonb->setText(QApplication::translate("Keyboard", "b", 0));
        Buttonn->setText(QApplication::translate("Keyboard", "n", 0));
        Buttonm->setText(QApplication::translate("Keyboard", "m", 0));
        char_2->setText(QApplication::translate("Keyboard", "Char", 0));
        space->setText(QApplication::translate("Keyboard", "Space", 0));
        Buttonq->setText(QApplication::translate("Keyboard", "q", 0));
        Buttonw->setText(QApplication::translate("Keyboard", "w", 0));
        Buttone->setText(QApplication::translate("Keyboard", "e", 0));
        Buttons->setText(QApplication::translate("Keyboard", "s", 0));
        Buttond->setText(QApplication::translate("Keyboard", "d", 0));
        Buttonf->setText(QApplication::translate("Keyboard", "f", 0));
        Buttong->setText(QApplication::translate("Keyboard", "g", 0));
        Buttonh->setText(QApplication::translate("Keyboard", "h", 0));
        Buttonj->setText(QApplication::translate("Keyboard", "j", 0));
        Buttonl->setText(QApplication::translate("Keyboard", "l", 0));
        Buttonp->setText(QApplication::translate("Keyboard", "p", 0));
        enterButton->setText(QApplication::translate("Keyboard", "Enter", 0));
        Buttona->setText(QApplication::translate("Keyboard", "a", 0));
        shift->setText(QApplication::translate("Keyboard", "Shift", 0));
        Buttonc->setText(QApplication::translate("Keyboard", "c", 0));
        Buttonk->setText(QApplication::translate("Keyboard", "k", 0));
        Buttonr->setText(QApplication::translate("Keyboard", "r", 0));
        Buttont->setText(QApplication::translate("Keyboard", "t", 0));
        Buttony->setText(QApplication::translate("Keyboard", "y", 0));
        Buttonu->setText(QApplication::translate("Keyboard", "u", 0));
        Buttoni->setText(QApplication::translate("Keyboard", "i", 0));
        Buttono->setText(QApplication::translate("Keyboard", "o", 0));
        Q_UNUSED(Keyboard);
    } // retranslateUi

};

namespace Ui {
    class Keyboard: public Ui_Keyboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYBOARD_H
