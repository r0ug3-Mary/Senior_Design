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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InventoryPage
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *dbOutput;
    QPushButton *HomeButton;

    void setupUi(QDialog *InventoryPage)
    {
        if (InventoryPage->objectName().isEmpty())
            InventoryPage->setObjectName(QStringLiteral("InventoryPage"));
        InventoryPage->resize(457, 325);
        InventoryPage->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(InventoryPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        dbOutput = new QTextEdit(InventoryPage);
        dbOutput->setObjectName(QStringLiteral("dbOutput"));
        dbOutput->setStyleSheet(QStringLiteral("background-color: rgb(168, 165, 173);"));

        verticalLayout->addWidget(dbOutput);

        HomeButton = new QPushButton(InventoryPage);
        HomeButton->setObjectName(QStringLiteral("HomeButton"));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        HomeButton->setFont(font);
        HomeButton->setStyleSheet(QLatin1String("font: bold 14px;\n"
"    color: white;"));

        verticalLayout->addWidget(HomeButton);


        retranslateUi(InventoryPage);
        QObject::connect(HomeButton, SIGNAL(clicked()), InventoryPage, SLOT(reject()));

        QMetaObject::connectSlotsByName(InventoryPage);
    } // setupUi

    void retranslateUi(QDialog *InventoryPage)
    {
        InventoryPage->setWindowTitle(QApplication::translate("InventoryPage", "Dialog", 0));
        HomeButton->setText(QApplication::translate("InventoryPage", "Home", 0));
    } // retranslateUi

};

namespace Ui {
    class InventoryPage: public Ui_InventoryPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORYPAGE_H
