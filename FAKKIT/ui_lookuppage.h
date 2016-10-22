/********************************************************************************
** Form generated from reading UI file 'lookuppage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOOKUPPAGE_H
#define UI_LOOKUPPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_LookupPage
{
public:
    QPushButton *HomeButtonL;
    QTextBrowser *ResultText;

    void setupUi(QDialog *LookupPage)
    {
        if (LookupPage->objectName().isEmpty())
            LookupPage->setObjectName(QStringLiteral("LookupPage"));
        LookupPage->resize(800, 480);
        HomeButtonL = new QPushButton(LookupPage);
        HomeButtonL->setObjectName(QStringLiteral("HomeButtonL"));
        HomeButtonL->setGeometry(QRect(710, 450, 80, 22));
        ResultText = new QTextBrowser(LookupPage);
        ResultText->setObjectName(QStringLiteral("ResultText"));
        ResultText->setGeometry(QRect(20, 10, 761, 421));
        ResultText->setStyleSheet(QStringLiteral("background-color: rgb(168, 165, 173);"));

        retranslateUi(LookupPage);
        QObject::connect(HomeButtonL, SIGNAL(clicked()), LookupPage, SLOT(reject()));

        QMetaObject::connectSlotsByName(LookupPage);
    } // setupUi

    void retranslateUi(QDialog *LookupPage)
    {
        LookupPage->setWindowTitle(QApplication::translate("LookupPage", "Dialog", 0));
        HomeButtonL->setText(QApplication::translate("LookupPage", "Home", 0));
    } // retranslateUi

};

namespace Ui {
    class LookupPage: public Ui_LookupPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOOKUPPAGE_H
