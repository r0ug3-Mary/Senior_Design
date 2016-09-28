/********************************************************************************
** Form generated from reading UI file 'fak.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAK_H
#define UI_FAK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FAK
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *InventoryButton;
    QPushButton *RecipeButton;
    QPushButton *ShoppingButton;
    QPushButton *ViewButton;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *FAK)
    {
        if (FAK->objectName().isEmpty())
            FAK->setObjectName(QStringLiteral("FAK"));
        FAK->resize(682, 641);
        FAK->setAutoFillBackground(false);
        FAK->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(0, 0, 255);\n"
"border-top-color: rgb(0, 0, 255);\n"
""));
        centralWidget = new QWidget(FAK);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        InventoryButton = new QPushButton(centralWidget);
        InventoryButton->setObjectName(QStringLiteral("InventoryButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InventoryButton->sizePolicy().hasHeightForWidth());
        InventoryButton->setSizePolicy(sizePolicy);
        InventoryButton->setFocusPolicy(Qt::StrongFocus);
        InventoryButton->setAutoFillBackground(false);
        InventoryButton->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(InventoryButton, 0, 0, 1, 1);

        RecipeButton = new QPushButton(centralWidget);
        RecipeButton->setObjectName(QStringLiteral("RecipeButton"));
        sizePolicy.setHeightForWidth(RecipeButton->sizePolicy().hasHeightForWidth());
        RecipeButton->setSizePolicy(sizePolicy);
        RecipeButton->setStyleSheet(QStringLiteral("background-image: url(:/fridge2.jpeg);"));

        gridLayout->addWidget(RecipeButton, 0, 1, 1, 1);

        ShoppingButton = new QPushButton(centralWidget);
        ShoppingButton->setObjectName(QStringLiteral("ShoppingButton"));
        sizePolicy.setHeightForWidth(ShoppingButton->sizePolicy().hasHeightForWidth());
        ShoppingButton->setSizePolicy(sizePolicy);
        ShoppingButton->setStyleSheet(QStringLiteral("background-image: url(:/fridge3.jpeg);"));

        gridLayout->addWidget(ShoppingButton, 1, 0, 1, 1);

        ViewButton = new QPushButton(centralWidget);
        ViewButton->setObjectName(QStringLiteral("ViewButton"));
        sizePolicy.setHeightForWidth(ViewButton->sizePolicy().hasHeightForWidth());
        ViewButton->setSizePolicy(sizePolicy);
        ViewButton->setAutoFillBackground(false);
        ViewButton->setStyleSheet(QStringLiteral("background-image: url(:/fridge4.jpeg);"));
        ViewButton->setAutoDefault(false);
        ViewButton->setFlat(false);

        gridLayout->addWidget(ViewButton, 1, 1, 1, 1);

        FAK->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(FAK);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setEnabled(true);
        FAK->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(FAK);

        ViewButton->setDefault(false);


        QMetaObject::connectSlotsByName(FAK);
    } // setupUi

    void retranslateUi(QMainWindow *FAK)
    {
        FAK->setWindowTitle(QApplication::translate("FAK", "FAK", 0));
        InventoryButton->setText(QApplication::translate("FAK", "Inventory", 0));
        RecipeButton->setText(QApplication::translate("FAK", "Recipes", 0));
        ShoppingButton->setText(QApplication::translate("FAK", "Shopping List", 0));
        ViewButton->setText(QApplication::translate("FAK", "Fridge View", 0));
    } // retranslateUi

};

namespace Ui {
    class FAK: public Ui_FAK {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAK_H
