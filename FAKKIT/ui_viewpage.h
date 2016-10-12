/********************************************************************************
** Form generated from reading UI file 'viewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPAGE_H
#define UI_VIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ViewPage
{
public:
    QPushButton *HomeButton4;
    QPushButton *leftButton;
    QPushButton *rightButton;
    QLabel *labelpic;
    QLabel *label;

    void setupUi(QDialog *ViewPage)
    {
        if (ViewPage->objectName().isEmpty())
            ViewPage->setObjectName(QStringLiteral("ViewPage"));
        ViewPage->resize(800, 480);
        ViewPage->setLayoutDirection(Qt::LeftToRight);
        HomeButton4 = new QPushButton(ViewPage);
        HomeButton4->setObjectName(QStringLiteral("HomeButton4"));
        HomeButton4->setGeometry(QRect(710, 450, 80, 24));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HomeButton4->sizePolicy().hasHeightForWidth());
        HomeButton4->setSizePolicy(sizePolicy);
        HomeButton4->setLayoutDirection(Qt::RightToLeft);
        HomeButton4->setStyleSheet(QLatin1String("font: bold 14px;\n"
"    color: white;"));
        HomeButton4->setAutoDefault(true);
        HomeButton4->setFlat(false);
        leftButton = new QPushButton(ViewPage);
        leftButton->setObjectName(QStringLiteral("leftButton"));
        leftButton->setGeometry(QRect(10, 10, 381, 431));
        leftButton->setStyleSheet(QLatin1String("border: none;\n"
"border-color: rgba(255, 255, 255, 0);\n"
"background-color: rgba(255, 255, 255, 0);\n"
"background-image: url(:/pics/prev.png);\n"
"background-position: center left;\n"
"background-repeat: repeat-false;\n"
""));
        leftButton->setAutoDefault(true);
        leftButton->setFlat(true);
        rightButton = new QPushButton(ViewPage);
        rightButton->setObjectName(QStringLiteral("rightButton"));
        rightButton->setGeometry(QRect(410, 10, 371, 431));
        rightButton->setStyleSheet(QLatin1String("border: none;\n"
"border-color: rgba(255, 255, 255, 0);\n"
"background-color: rgba(255, 255, 255, 0);\n"
"background-image: url(:/pics/next.png);\n"
"background-position: center right;\n"
"background-repeat: repeat-false;\n"
""));
        rightButton->setFlat(true);
        labelpic = new QLabel(ViewPage);
        labelpic->setObjectName(QStringLiteral("labelpic"));
        labelpic->setGeometry(QRect(20, 13, 751, 421));
        labelpic->setScaledContents(true);
        label = new QLabel(ViewPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 450, 461, 20));
        label->setStyleSheet(QLatin1String("font: bold 14px;\n"
"    color: white;"));
        HomeButton4->raise();
        labelpic->raise();
        rightButton->raise();
        leftButton->raise();
        label->raise();

        retranslateUi(ViewPage);
        QObject::connect(HomeButton4, SIGNAL(clicked()), ViewPage, SLOT(reject()));

        HomeButton4->setDefault(false);
        rightButton->setDefault(false);


        QMetaObject::connectSlotsByName(ViewPage);
    } // setupUi

    void retranslateUi(QDialog *ViewPage)
    {
        ViewPage->setWindowTitle(QApplication::translate("ViewPage", "Fridge View", 0));
        HomeButton4->setText(QApplication::translate("ViewPage", "Home", 0));
        leftButton->setText(QString());
        rightButton->setText(QString());
        labelpic->setText(QString());
        label->setText(QApplication::translate("ViewPage", "Tap right or left on the screen to scroll through images", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewPage: public Ui_ViewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPAGE_H
