/********************************************************************************
** Form generated from reading UI file 'recipepage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPEPAGE_H
#define UI_RECIPEPAGE_H

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
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RecipePage
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit1;
    QPushButton *SearchButton;
    QTextBrowser *textBrowser1;
    QPushButton *HomeButton2;

    void setupUi(QDialog *RecipePage)
    {
        if (RecipePage->objectName().isEmpty())
            RecipePage->setObjectName(QStringLiteral("RecipePage"));
        RecipePage->resize(682, 641);
        RecipePage->setStyleSheet(QStringLiteral("background-image: url(:/fridgeimg.JPG);"));
        verticalLayout_2 = new QVBoxLayout(RecipePage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(RecipePage);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        horizontalLayout->addWidget(label);

        lineEdit1 = new QLineEdit(RecipePage);
        lineEdit1->setObjectName(QStringLiteral("lineEdit1"));

        horizontalLayout->addWidget(lineEdit1);

        SearchButton = new QPushButton(RecipePage);
        SearchButton->setObjectName(QStringLiteral("SearchButton"));

        horizontalLayout->addWidget(SearchButton);


        verticalLayout->addLayout(horizontalLayout);

        textBrowser1 = new QTextBrowser(RecipePage);
        textBrowser1->setObjectName(QStringLiteral("textBrowser1"));
        textBrowser1->setAutoFillBackground(false);

        verticalLayout->addWidget(textBrowser1);

        HomeButton2 = new QPushButton(RecipePage);
        HomeButton2->setObjectName(QStringLiteral("HomeButton2"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HomeButton2->sizePolicy().hasHeightForWidth());
        HomeButton2->setSizePolicy(sizePolicy);
        HomeButton2->setLayoutDirection(Qt::RightToLeft);

        verticalLayout->addWidget(HomeButton2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(RecipePage);
        QObject::connect(HomeButton2, SIGNAL(clicked()), RecipePage, SLOT(reject()));

        QMetaObject::connectSlotsByName(RecipePage);
    } // setupUi

    void retranslateUi(QDialog *RecipePage)
    {
        RecipePage->setWindowTitle(QApplication::translate("RecipePage", "Dialog", 0));
        label->setText(QApplication::translate("RecipePage", "What item would you like to cook with?", 0));
        SearchButton->setText(QApplication::translate("RecipePage", "Recipes", 0));
        HomeButton2->setText(QApplication::translate("RecipePage", "Home", 0));
    } // retranslateUi

};

namespace Ui {
    class RecipePage: public Ui_RecipePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPEPAGE_H
