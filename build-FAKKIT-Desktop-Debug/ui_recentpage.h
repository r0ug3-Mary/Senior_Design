/********************************************************************************
** Form generated from reading UI file 'recentpage.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECENTPAGE_H
#define UI_RECENTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_RecentPage
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QPushButton *HomeButton_rp;

    void setupUi(QDialog *RecentPage)
    {
        if (RecentPage->objectName().isEmpty())
            RecentPage->setObjectName(QStringLiteral("RecentPage"));
        RecentPage->resize(800, 480);
        RecentPage->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(RecentPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(RecentPage);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setStyleSheet(QLatin1String("background-color: rgb(168, 165, 173);\n"
"font: bold 12px; color: white;"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        HomeButton_rp = new QPushButton(RecentPage);
        HomeButton_rp->setObjectName(QStringLiteral("HomeButton_rp"));
        HomeButton_rp->setStyleSheet(QLatin1String("font: bold 14px;\n"
"    color: white;"));

        gridLayout->addWidget(HomeButton_rp, 1, 0, 1, 1);


        retranslateUi(RecentPage);

        QMetaObject::connectSlotsByName(RecentPage);
    } // setupUi

    void retranslateUi(QDialog *RecentPage)
    {
        RecentPage->setWindowTitle(QApplication::translate("RecentPage", "Dialog", 0));
        HomeButton_rp->setText(QApplication::translate("RecentPage", "Submit", 0));
    } // retranslateUi

};

namespace Ui {
    class RecentPage: public Ui_RecentPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECENTPAGE_H
