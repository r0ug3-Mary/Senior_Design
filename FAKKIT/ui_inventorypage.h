/********************************************************************************
** Form generated from reading UI file 'inventorypage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVENTORYPAGE_H
#define UI_INVENTORYPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_InventoryPage
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *AllButton;
    QPushButton *LowEmpButton;
    QPushButton *RemoveButton;
    QPushButton *HomeButton;

    void setupUi(QDialog *InventoryPage)
    {
        if (InventoryPage->objectName().isEmpty())
            InventoryPage->setObjectName(QStringLiteral("InventoryPage"));
        InventoryPage->resize(682, 641);
        InventoryPage->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(InventoryPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(InventoryPage);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setStyleSheet(QLatin1String("background-color: rgb(168, 165, 173);\n"
"font: bold 14px;\\n    color: white;"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        AllButton = new QPushButton(InventoryPage);
        AllButton->setObjectName(QStringLiteral("AllButton"));
        AllButton->setStyleSheet(QLatin1String("font: bold 14px;\n"
"    color: white;"));

        horizontalLayout->addWidget(AllButton);

        LowEmpButton = new QPushButton(InventoryPage);
        LowEmpButton->setObjectName(QStringLiteral("LowEmpButton"));
        LowEmpButton->setStyleSheet(QLatin1String("font: bold 14px;\n"
"    color: white;"));

        horizontalLayout->addWidget(LowEmpButton);

        RemoveButton = new QPushButton(InventoryPage);
        RemoveButton->setObjectName(QStringLiteral("RemoveButton"));
        RemoveButton->setStyleSheet(QLatin1String("font: bold 14px;\n"
"    color: white;"));

        horizontalLayout->addWidget(RemoveButton);

        HomeButton = new QPushButton(InventoryPage);
        HomeButton->setObjectName(QStringLiteral("HomeButton"));
        HomeButton->setStyleSheet(QLatin1String("font: bold 14px;\n"
"    color: white;"));

        horizontalLayout->addWidget(HomeButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(InventoryPage);
        QObject::connect(HomeButton, SIGNAL(clicked()), InventoryPage, SLOT(reject()));

        QMetaObject::connectSlotsByName(InventoryPage);
    } // setupUi

    void retranslateUi(QDialog *InventoryPage)
    {
        InventoryPage->setWindowTitle(QApplication::translate("InventoryPage", "Dialog", 0));
        AllButton->setText(QApplication::translate("InventoryPage", "All", 0));
        LowEmpButton->setText(QApplication::translate("InventoryPage", "Low/Empty", 0));
        RemoveButton->setText(QApplication::translate("InventoryPage", "Remove", 0));
        HomeButton->setText(QApplication::translate("InventoryPage", "Home", 0));
    } // retranslateUi

};

namespace Ui {
    class InventoryPage: public Ui_InventoryPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORYPAGE_H
