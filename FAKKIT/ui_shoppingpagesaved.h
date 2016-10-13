/********************************************************************************
** Form generated from reading UI file 'shoppingpagesaved.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPPINGPAGESAVED_H
#define UI_SHOPPINGPAGESAVED_H

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

class Ui_ShoppingPageSaved
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *textEdit;
    QPushButton *swapButton2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListView *listView;
    QLabel *label_2;
    QListView *listView_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *ShoppingPageSaved)
    {
        if (ShoppingPageSaved->objectName().isEmpty())
            ShoppingPageSaved->setObjectName(QStringLiteral("ShoppingPageSaved"));
        ShoppingPageSaved->resize(682, 641);
        gridLayout = new QGridLayout(ShoppingPageSaved);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        textEdit = new QTextEdit(ShoppingPageSaved);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout_2->addWidget(textEdit);

        swapButton2 = new QPushButton(ShoppingPageSaved);
        swapButton2->setObjectName(QStringLiteral("swapButton2"));

        horizontalLayout_2->addWidget(swapButton2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(ShoppingPageSaved);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        listView = new QListView(ShoppingPageSaved);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);

        label_2 = new QLabel(ShoppingPageSaved);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        listView_2 = new QListView(ShoppingPageSaved);
        listView_2->setObjectName(QStringLiteral("listView_2"));

        verticalLayout->addWidget(listView_2);


        horizontalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit = new QLineEdit(ShoppingPageSaved);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(ShoppingPageSaved);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(ShoppingPageSaved);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(ShoppingPageSaved);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(ShoppingPageSaved);
        QObject::connect(pushButton_3, SIGNAL(clicked()), ShoppingPageSaved, SLOT(reject()));

        QMetaObject::connectSlotsByName(ShoppingPageSaved);
    } // setupUi

    void retranslateUi(QDialog *ShoppingPageSaved)
    {
        ShoppingPageSaved->setWindowTitle(QApplication::translate("ShoppingPageSaved", "Dialog", 0));
        swapButton2->setText(QApplication::translate("ShoppingPageSaved", "<->", 0));
        label->setText(QApplication::translate("ShoppingPageSaved", "Empty Items", 0));
        label_2->setText(QApplication::translate("ShoppingPageSaved", "Low on:", 0));
        pushButton->setText(QApplication::translate("ShoppingPageSaved", "Add", 0));
        pushButton_2->setText(QApplication::translate("ShoppingPageSaved", "Save", 0));
        pushButton_3->setText(QApplication::translate("ShoppingPageSaved", "Home", 0));
    } // retranslateUi

};

namespace Ui {
    class ShoppingPageSaved: public Ui_ShoppingPageSaved {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPPINGPAGESAVED_H
