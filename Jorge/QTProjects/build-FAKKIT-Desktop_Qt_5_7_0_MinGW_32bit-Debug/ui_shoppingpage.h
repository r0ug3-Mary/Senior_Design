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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ShoppingPage
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit1;
    QTextEdit *textEdit2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *addItem;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QPushButton *sendButton;
    QPushButton *homeButton;

    void setupUi(QDialog *ShoppingPage)
    {
        if (ShoppingPage->objectName().isEmpty())
            ShoppingPage->setObjectName(QStringLiteral("ShoppingPage"));
        ShoppingPage->resize(682, 641);
        ShoppingPage->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(ShoppingPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(ShoppingPage);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(ShoppingPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        textEdit1 = new QTextEdit(ShoppingPage);
        textEdit1->setObjectName(QStringLiteral("textEdit1"));
        textEdit1->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(textEdit1, 1, 0, 1, 1);

        textEdit2 = new QTextEdit(ShoppingPage);
        textEdit2->setObjectName(QStringLiteral("textEdit2"));

        gridLayout->addWidget(textEdit2, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        addItem = new QLineEdit(ShoppingPage);
        addItem->setObjectName(QStringLiteral("addItem"));

        horizontalLayout_2->addWidget(addItem);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addButton = new QPushButton(ShoppingPage);
        addButton->setObjectName(QStringLiteral("addButton"));

        horizontalLayout->addWidget(addButton);

        sendButton = new QPushButton(ShoppingPage);
        sendButton->setObjectName(QStringLiteral("sendButton"));

        horizontalLayout->addWidget(sendButton);

        homeButton = new QPushButton(ShoppingPage);
        homeButton->setObjectName(QStringLiteral("homeButton"));

        horizontalLayout->addWidget(homeButton);


        horizontalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 2);


        retranslateUi(ShoppingPage);
        QObject::connect(homeButton, SIGNAL(clicked()), ShoppingPage, SLOT(reject()));

        QMetaObject::connectSlotsByName(ShoppingPage);
    } // setupUi

    void retranslateUi(QDialog *ShoppingPage)
    {
        ShoppingPage->setWindowTitle(QApplication::translate("ShoppingPage", "Dialog", 0));
        label->setText(QApplication::translate("ShoppingPage", "OUT OF STOCK ", 0));
        label_2->setText(QApplication::translate("ShoppingPage", "LOW", 0));
        addButton->setText(QApplication::translate("ShoppingPage", "Add To List", 0));
        sendButton->setText(QApplication::translate("ShoppingPage", "Send", 0));
        homeButton->setText(QApplication::translate("ShoppingPage", "Home", 0));
    } // retranslateUi

};

namespace Ui {
    class ShoppingPage: public Ui_ShoppingPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPPINGPAGE_H
