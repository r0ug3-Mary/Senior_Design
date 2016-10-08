/********************************************************************************
** Form generated from reading UI file 'shoppingpage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPPINGPAGE_H
#define UI_SHOPPINGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ShoppingPage
{
public:
    QPushButton *HomeButton3;
    QListWidget *ShoppingList;
    QPushButton *AddButton;
    QPushButton *RemoveItem;
    QPushButton *SaveList;

    void setupUi(QDialog *ShoppingPage)
    {
        if (ShoppingPage->objectName().isEmpty())
            ShoppingPage->setObjectName(QStringLiteral("ShoppingPage"));
        ShoppingPage->resize(456, 325);
        ShoppingPage->setStyleSheet(QStringLiteral(""));
        HomeButton3 = new QPushButton(ShoppingPage);
        HomeButton3->setObjectName(QStringLiteral("HomeButton3"));
        HomeButton3->setGeometry(QRect(330, 250, 93, 28));
        HomeButton3->setStyleSheet(QLatin1String("font: bold 14px;\n"
"    color: white;"));
        ShoppingList = new QListWidget(ShoppingPage);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(ShoppingList);
        __qlistwidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        ShoppingList->setObjectName(QStringLiteral("ShoppingList"));
        ShoppingList->setGeometry(QRect(30, 40, 256, 251));
        ShoppingList->setStyleSheet(QStringLiteral("background-color: rgb(168, 165, 173);"));
        AddButton = new QPushButton(ShoppingPage);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        AddButton->setGeometry(QRect(320, 80, 101, 23));
        AddButton->setStyleSheet(QLatin1String("font: bold 14px;\n"
"    color: white;"));
        RemoveItem = new QPushButton(ShoppingPage);
        RemoveItem->setObjectName(QStringLiteral("RemoveItem"));
        RemoveItem->setGeometry(QRect(320, 110, 101, 23));
        RemoveItem->setStyleSheet(QLatin1String("font: bold 14px;\n"
"    color: white;"));
        SaveList = new QPushButton(ShoppingPage);
        SaveList->setObjectName(QStringLiteral("SaveList"));
        SaveList->setGeometry(QRect(320, 140, 101, 23));
        SaveList->setStyleSheet(QLatin1String("font: bold 14px;\n"
"    color: white;"));

        retranslateUi(ShoppingPage);
        QObject::connect(HomeButton3, SIGNAL(clicked()), ShoppingPage, SLOT(reject()));

        QMetaObject::connectSlotsByName(ShoppingPage);
    } // setupUi

    void retranslateUi(QDialog *ShoppingPage)
    {
        ShoppingPage->setWindowTitle(QApplication::translate("ShoppingPage", "Dialog", 0));
        HomeButton3->setText(QApplication::translate("ShoppingPage", "Home", 0));

        const bool __sortingEnabled = ShoppingList->isSortingEnabled();
        ShoppingList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = ShoppingList->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("ShoppingPage", "New Item", 0));
        ShoppingList->setSortingEnabled(__sortingEnabled);

        AddButton->setText(QApplication::translate("ShoppingPage", "Add To List", 0));
        RemoveItem->setText(QApplication::translate("ShoppingPage", "Remove Item", 0));
        SaveList->setText(QApplication::translate("ShoppingPage", "Save List", 0));
    } // retranslateUi

};

namespace Ui {
    class ShoppingPage: public Ui_ShoppingPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPPINGPAGE_H
