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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InventoryPage
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineItem;
    QPushButton *AddButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *ConfirmButton;
    QPushButton *HomeButton;

    void setupUi(QDialog *InventoryPage)
    {
        if (InventoryPage->objectName().isEmpty())
            InventoryPage->setObjectName(QStringLiteral("InventoryPage"));
        InventoryPage->resize(682, 641);
        InventoryPage->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(InventoryPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(InventoryPage);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(InventoryPage);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineItem = new QLineEdit(InventoryPage);
        lineItem->setObjectName(QStringLiteral("lineItem"));

        horizontalLayout_2->addWidget(lineItem);

        AddButton = new QPushButton(InventoryPage);
        AddButton->setObjectName(QStringLiteral("AddButton"));

        horizontalLayout_2->addWidget(AddButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ConfirmButton = new QPushButton(InventoryPage);
        ConfirmButton->setObjectName(QStringLiteral("ConfirmButton"));

        horizontalLayout->addWidget(ConfirmButton);

        HomeButton = new QPushButton(InventoryPage);
        HomeButton->setObjectName(QStringLiteral("HomeButton"));

        horizontalLayout->addWidget(HomeButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(InventoryPage);
        QObject::connect(HomeButton, SIGNAL(clicked()), InventoryPage, SLOT(reject()));

        QMetaObject::connectSlotsByName(InventoryPage);
    } // setupUi

    void retranslateUi(QDialog *InventoryPage)
    {
        InventoryPage->setWindowTitle(QApplication::translate("InventoryPage", "Dialog", 0));
        label->setText(QApplication::translate("InventoryPage", "Enter Item", 0));
        AddButton->setText(QApplication::translate("InventoryPage", "Add", 0));
        ConfirmButton->setText(QApplication::translate("InventoryPage", "Confirm", 0));
        HomeButton->setText(QApplication::translate("InventoryPage", "Home", 0));
    } // retranslateUi

};

namespace Ui {
    class InventoryPage: public Ui_InventoryPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORYPAGE_H
