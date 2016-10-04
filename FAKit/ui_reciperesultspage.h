/********************************************************************************
** Form generated from reading UI file 'reciperesultspage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPERESULTSPAGE_H
#define UI_RECIPERESULTSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RecipeResultsPage
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *RecipeResultsPage)
    {
        if (RecipeResultsPage->objectName().isEmpty())
            RecipeResultsPage->setObjectName(QStringLiteral("RecipeResultsPage"));
        RecipeResultsPage->resize(400, 300);
        pushButton = new QPushButton(RecipeResultsPage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 260, 75, 23));

        retranslateUi(RecipeResultsPage);
        QObject::connect(pushButton, SIGNAL(clicked()), RecipeResultsPage, SLOT(reject()));

        QMetaObject::connectSlotsByName(RecipeResultsPage);
    } // setupUi

    void retranslateUi(QDialog *RecipeResultsPage)
    {
        RecipeResultsPage->setWindowTitle(QApplication::translate("RecipeResultsPage", "Dialog", 0));
        pushButton->setText(QApplication::translate("RecipeResultsPage", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class RecipeResultsPage: public Ui_RecipeResultsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPERESULTSPAGE_H
