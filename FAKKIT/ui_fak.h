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
    QPushButton *pushButton;

    void setupUi(QMainWindow *FAK)
    {
        if (FAK->objectName().isEmpty())
            FAK->setObjectName(QStringLiteral("FAK"));
        FAK->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FAK->sizePolicy().hasHeightForWidth());
        FAK->setSizePolicy(sizePolicy);
        FAK->setMaximumSize(QSize(16777, 16777));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        FAK->setFont(font);
        FAK->setAutoFillBackground(false);
        FAK->setStyleSheet(QLatin1String("border-color: rgb(0, 0, 255);\n"
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
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(InventoryButton->sizePolicy().hasHeightForWidth());
        InventoryButton->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("Ebrima"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        InventoryButton->setFont(font1);
        InventoryButton->setFocusPolicy(Qt::StrongFocus);
        InventoryButton->setAutoFillBackground(false);
        InventoryButton->setStyleSheet(QStringLiteral(""));
        InventoryButton->setAutoDefault(true);

        gridLayout->addWidget(InventoryButton, 0, 0, 1, 1);

        RecipeButton = new QPushButton(centralWidget);
        RecipeButton->setObjectName(QStringLiteral("RecipeButton"));
        sizePolicy1.setHeightForWidth(RecipeButton->sizePolicy().hasHeightForWidth());
        RecipeButton->setSizePolicy(sizePolicy1);
        RecipeButton->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(RecipeButton, 0, 1, 1, 1);

        ShoppingButton = new QPushButton(centralWidget);
        ShoppingButton->setObjectName(QStringLiteral("ShoppingButton"));
        sizePolicy1.setHeightForWidth(ShoppingButton->sizePolicy().hasHeightForWidth());
        ShoppingButton->setSizePolicy(sizePolicy1);
        ShoppingButton->setAutoFillBackground(false);
        ShoppingButton->setStyleSheet(QStringLiteral(""));
        ShoppingButton->setIconSize(QSize(10, 10));

        gridLayout->addWidget(ShoppingButton, 1, 0, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QStringLiteral(""));
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        FAK->setCentralWidget(centralWidget);

        retranslateUi(FAK);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(FAK);
    } // setupUi

    void retranslateUi(QMainWindow *FAK)
    {
        FAK->setWindowTitle(QApplication::translate("FAK", "FAK", 0));
        InventoryButton->setText(QString());
        RecipeButton->setText(QString());
        ShoppingButton->setText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FAK: public Ui_FAK {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAK_H
