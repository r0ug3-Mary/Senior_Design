/********************************************************************************
** Form generated from reading UI file 'shoppingpage1.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPPINGPAGE1_H
#define UI_SHOPPINGPAGE1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ShoppingPage1
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTextEdit *textEdit;
    QPushButton *swapButton;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QListView *listView_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *ShoppingPage1)
    {
        if (ShoppingPage1->objectName().isEmpty())
            ShoppingPage1->setObjectName(QStringLiteral("ShoppingPage1"));
        ShoppingPage1->resize(682, 641);
        gridLayout = new QGridLayout(ShoppingPage1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(ShoppingPage1);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        textEdit = new QTextEdit(ShoppingPage1);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout_2->addWidget(textEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        swapButton = new QPushButton(ShoppingPage1);
        swapButton->setObjectName(QStringLiteral("swapButton"));

        horizontalLayout->addWidget(swapButton);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(ShoppingPage1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        listView_2 = new QListView(ShoppingPage1);
        listView_2->setObjectName(QStringLiteral("listView_2"));

        verticalLayout->addWidget(listView_2);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit = new QLineEdit(ShoppingPage1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        pushButton_3 = new QPushButton(ShoppingPage1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(ShoppingPage1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(ShoppingPage1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        retranslateUi(ShoppingPage1);
        QObject::connect(pushButton, SIGNAL(clicked()), ShoppingPage1, SLOT(reject()));

        QMetaObject::connectSlotsByName(ShoppingPage1);
    } // setupUi

    void retranslateUi(QDialog *ShoppingPage1)
    {
        ShoppingPage1->setWindowTitle(QApplication::translate("ShoppingPage1", "Dialog", 0));
        label->setText(QApplication::translate("ShoppingPage1", "SHOPPING LIST", 0));
        swapButton->setText(QApplication::translate("ShoppingPage1", "<->", 0));
        label_2->setText(QApplication::translate("ShoppingPage1", "LOW ON:", 0));
        pushButton_3->setText(QApplication::translate("ShoppingPage1", "Add", 0));
        pushButton_2->setText(QApplication::translate("ShoppingPage1", "Save", 0));
        pushButton->setText(QApplication::translate("ShoppingPage1", "Home", 0));
    } // retranslateUi

};

namespace Ui {
    class ShoppingPage1: public Ui_ShoppingPage1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPPINGPAGE1_H
