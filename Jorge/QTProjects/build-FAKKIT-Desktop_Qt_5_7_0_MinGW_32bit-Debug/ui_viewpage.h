/********************************************************************************
** Form generated from reading UI file 'viewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPAGE_H
#define UI_VIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewPage
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QGridLayout *gridLayout_2;
    QLabel *label1;
    QWidget *tab2;
    QGridLayout *gridLayout_3;
    QLabel *label2;
    QWidget *tab3;
    QGridLayout *gridLayout_4;
    QLabel *label3;
    QPushButton *HomeButton4;

    void setupUi(QDialog *ViewPage)
    {
        if (ViewPage->objectName().isEmpty())
            ViewPage->setObjectName(QStringLiteral("ViewPage"));
        ViewPage->resize(682, 641);
        ViewPage->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(ViewPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(ViewPage);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tab1 = new QWidget();
        tab1->setObjectName(QStringLiteral("tab1"));
        gridLayout_2 = new QGridLayout(tab1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label1 = new QLabel(tab1);
        label1->setObjectName(QStringLiteral("label1"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label1->sizePolicy().hasHeightForWidth());
        label1->setSizePolicy(sizePolicy);
        label1->setScaledContents(true);

        gridLayout_2->addWidget(label1, 0, 0, 1, 1);

        tabWidget->addTab(tab1, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QStringLiteral("tab2"));
        gridLayout_3 = new QGridLayout(tab2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label2 = new QLabel(tab2);
        label2->setObjectName(QStringLiteral("label2"));
        sizePolicy.setHeightForWidth(label2->sizePolicy().hasHeightForWidth());
        label2->setSizePolicy(sizePolicy);
        label2->setScaledContents(true);

        gridLayout_3->addWidget(label2, 0, 0, 1, 1);

        tabWidget->addTab(tab2, QString());
        tab3 = new QWidget();
        tab3->setObjectName(QStringLiteral("tab3"));
        gridLayout_4 = new QGridLayout(tab3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label3 = new QLabel(tab3);
        label3->setObjectName(QStringLiteral("label3"));
        sizePolicy.setHeightForWidth(label3->sizePolicy().hasHeightForWidth());
        label3->setSizePolicy(sizePolicy);
        label3->setScaledContents(true);

        gridLayout_4->addWidget(label3, 0, 0, 1, 1);

        tabWidget->addTab(tab3, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        HomeButton4 = new QPushButton(ViewPage);
        HomeButton4->setObjectName(QStringLiteral("HomeButton4"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(HomeButton4->sizePolicy().hasHeightForWidth());
        HomeButton4->setSizePolicy(sizePolicy1);
        HomeButton4->setLayoutDirection(Qt::RightToLeft);
        HomeButton4->setAutoDefault(true);
        HomeButton4->setFlat(false);

        gridLayout->addWidget(HomeButton4, 3, 0, 1, 1);


        retranslateUi(ViewPage);
        QObject::connect(HomeButton4, SIGNAL(clicked()), ViewPage, SLOT(reject()));

        tabWidget->setCurrentIndex(0);
        HomeButton4->setDefault(false);


        QMetaObject::connectSlotsByName(ViewPage);
    } // setupUi

    void retranslateUi(QDialog *ViewPage)
    {
        ViewPage->setWindowTitle(QApplication::translate("ViewPage", "Fridge View", 0));
        label1->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("ViewPage", "Level 1", 0));
        label2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab2), QApplication::translate("ViewPage", "Level 2", 0));
        label3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab3), QApplication::translate("ViewPage", "Level 3", 0));
        HomeButton4->setText(QApplication::translate("ViewPage", "Home", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewPage: public Ui_ViewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPAGE_H
