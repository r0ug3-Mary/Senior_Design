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
    QLabel *labelpic;
    QPushButton *backButton;
    QPushButton *HomeButton4;
    QPushButton *pushButton;

    void setupUi(QDialog *ViewPage)
    {
        if (ViewPage->objectName().isEmpty())
            ViewPage->setObjectName(QStringLiteral("ViewPage"));
        ViewPage->resize(683, 439);
        ViewPage->setLayoutDirection(Qt::LeftToRight);
        labelpic = new QLabel(ViewPage);
        labelpic->setObjectName(QStringLiteral("labelpic"));
        labelpic->setGeometry(QRect(20, 10, 651, 401));
        labelpic->setScaledContents(true);
        backButton = new QPushButton(ViewPage);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(-10, -10, 341, 421));
        HomeButton4 = new QPushButton(ViewPage);
        HomeButton4->setObjectName(QStringLiteral("HomeButton4"));
        HomeButton4->setGeometry(QRect(0, 410, 75, 25));
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
        pushButton = new QPushButton(ViewPage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, -10, 351, 421));
        pushButton->setAutoFillBackground(false);

        retranslateUi(ViewPage);
        QObject::connect(HomeButton4, SIGNAL(clicked()), ViewPage, SLOT(reject()));

        HomeButton4->setDefault(false);


        QMetaObject::connectSlotsByName(ViewPage);
    } // setupUi

    void retranslateUi(QDialog *ViewPage)
    {
        ViewPage->setWindowTitle(QApplication::translate("ViewPage", "Fridge View", 0));
        labelpic->setText(QString());
        backButton->setText(QString());
        HomeButton4->setText(QApplication::translate("ViewPage", "Home", 0));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ViewPage: public Ui_ViewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPAGE_H
