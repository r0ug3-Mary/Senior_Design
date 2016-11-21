/********************************************************************************
** Form generated from reading UI file 'recipepage.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RecipePage
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelcurr;
    QSpacerItem *horizontalSpacer;
    QLabel *labellook;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QListView *InventoryList;
    QPushButton *MoveOver;
    QTextEdit *RecipeParams;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_11;
    QLabel *labelwht;
    QPushButton *SearchButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *HomeButton2;

    void setupUi(QDialog *RecipePage)
    {
        if (RecipePage->objectName().isEmpty())
            RecipePage->setObjectName(QStringLiteral("RecipePage"));
        RecipePage->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RecipePage->sizePolicy().hasHeightForWidth());
        RecipePage->setSizePolicy(sizePolicy);
        RecipePage->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(RecipePage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, -1, 0, -1);
        horizontalSpacer_4 = new QSpacerItem(30, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        labelcurr = new QLabel(RecipePage);
        labelcurr->setObjectName(QStringLiteral("labelcurr"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelcurr->sizePolicy().hasHeightForWidth());
        labelcurr->setSizePolicy(sizePolicy1);
        labelcurr->setMaximumSize(QSize(16777215, 838607));
        labelcurr->setStyleSheet(QLatin1String("font: bold 12px;\n"
"    color: white;"));

        horizontalLayout_8->addWidget(labelcurr);

        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        labellook = new QLabel(RecipePage);
        labellook->setObjectName(QStringLiteral("labellook"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labellook->sizePolicy().hasHeightForWidth());
        labellook->setSizePolicy(sizePolicy2);
        labellook->setStyleSheet(QLatin1String("font: bold 12px;\n"
"    color: white;"));

        horizontalLayout_8->addWidget(labellook);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        label = new QLabel(RecipePage);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setStyleSheet(QLatin1String("font: bold 12px;\n"
"    color: white;"));

        horizontalLayout_8->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(30, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        InventoryList = new QListView(RecipePage);
        InventoryList->setObjectName(QStringLiteral("InventoryList"));
        InventoryList->setStyleSheet(QLatin1String("background-color: rgb(168, 165, 173);\n"
"font: bold 12px; color: white;"));

        horizontalLayout->addWidget(InventoryList);

        MoveOver = new QPushButton(RecipePage);
        MoveOver->setObjectName(QStringLiteral("MoveOver"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(MoveOver->sizePolicy().hasHeightForWidth());
        MoveOver->setSizePolicy(sizePolicy4);
        MoveOver->setMaximumSize(QSize(25, 16777215));
        MoveOver->setAutoFillBackground(false);
        MoveOver->setStyleSheet(QLatin1String("background-image: url(:/pics/next.png);\n"
"background-position: center;\n"
"background-repeat: repeat-false;\n"
""));

        horizontalLayout->addWidget(MoveOver);

        RecipeParams = new QTextEdit(RecipePage);
        RecipeParams->setObjectName(QStringLiteral("RecipeParams"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(RecipeParams->sizePolicy().hasHeightForWidth());
        RecipeParams->setSizePolicy(sizePolicy5);
        RecipeParams->setMaximumSize(QSize(150, 16777215));
        RecipeParams->setStyleSheet(QLatin1String("background-color: rgb(168, 165, 173);\n"
"font: bold 12px; color: white;"));

        horizontalLayout->addWidget(RecipeParams);

        listWidget = new QListWidget(RecipePage);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setStyleSheet(QLatin1String("background-color: rgb(168, 165, 173);\n"
"font: bold 12px; color: white;"));

        horizontalLayout->addWidget(listWidget);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelwht = new QLabel(RecipePage);
        labelwht->setObjectName(QStringLiteral("labelwht"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(labelwht->sizePolicy().hasHeightForWidth());
        labelwht->setSizePolicy(sizePolicy6);
        labelwht->setStyleSheet(QLatin1String("font: bold 12px;\n"
"    color: white;"));
        labelwht->setWordWrap(true);

        horizontalLayout_11->addWidget(labelwht);

        SearchButton = new QPushButton(RecipePage);
        SearchButton->setObjectName(QStringLiteral("SearchButton"));
        sizePolicy4.setHeightForWidth(SearchButton->sizePolicy().hasHeightForWidth());
        SearchButton->setSizePolicy(sizePolicy4);
        SearchButton->setStyleSheet(QLatin1String("font: bold 14px;\n"
"    color: white;"));

        horizontalLayout_11->addWidget(SearchButton);

        horizontalSpacer_2 = new QSpacerItem(350, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_2);

        HomeButton2 = new QPushButton(RecipePage);
        HomeButton2->setObjectName(QStringLiteral("HomeButton2"));
        QSizePolicy sizePolicy7(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(HomeButton2->sizePolicy().hasHeightForWidth());
        HomeButton2->setSizePolicy(sizePolicy7);
        HomeButton2->setLayoutDirection(Qt::RightToLeft);
        HomeButton2->setStyleSheet(QLatin1String("font: bold 14px;\n"
"    color: white;"));

        horizontalLayout_11->addWidget(HomeButton2);


        gridLayout->addLayout(horizontalLayout_11, 1, 0, 1, 1);


        retranslateUi(RecipePage);
        QObject::connect(HomeButton2, SIGNAL(clicked()), RecipePage, SLOT(reject()));

        QMetaObject::connectSlotsByName(RecipePage);
    } // setupUi

    void retranslateUi(QDialog *RecipePage)
    {
        RecipePage->setWindowTitle(QApplication::translate("RecipePage", "Dialog", 0));
        labelcurr->setText(QApplication::translate("RecipePage", "Current Inventory", 0));
        labellook->setText(QApplication::translate("RecipePage", "Recipe Parameters", 0));
        label->setText(QApplication::translate("RecipePage", "Recipies Available", 0));
        MoveOver->setText(QString());
        labelwht->setText(QApplication::translate("RecipePage", "When done click the search button :", 0));
        SearchButton->setText(QApplication::translate("RecipePage", "Search", 0));
        HomeButton2->setText(QApplication::translate("RecipePage", "Home", 0));
    } // retranslateUi

};

namespace Ui {
    class RecipePage: public Ui_RecipePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPEPAGE_H
