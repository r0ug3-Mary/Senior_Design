/********************************************************************************
** Form generated from reading UI file 'recipelookup.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPELOOKUP_H
#define UI_RECIPELOOKUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RecipeLookup
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *RecipeLookup)
    {
        if (RecipeLookup->objectName().isEmpty())
            RecipeLookup->setObjectName(QStringLiteral("RecipeLookup"));
        RecipeLookup->resize(427, 325);
        pushButton = new QPushButton(RecipeLookup);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 280, 75, 23));

        retranslateUi(RecipeLookup);

        QMetaObject::connectSlotsByName(RecipeLookup);
    } // setupUi

    void retranslateUi(QDialog *RecipeLookup)
    {
        RecipeLookup->setWindowTitle(QApplication::translate("RecipeLookup", "Dialog", 0));
        pushButton->setText(QApplication::translate("RecipeLookup", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class RecipeLookup: public Ui_RecipeLookup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPELOOKUP_H
