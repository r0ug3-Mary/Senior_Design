/********************************************************************************
** Form generated from reading UI file 'viewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewPage
{
public:
    QPushButton *leftButton;
    QLabel *labelpic;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPushButton *HomeButton4;
    QPushButton *rightButton;

    void setupUi(QDialog *ViewPage)
    {
        if (ViewPage->objectName().isEmpty())
            ViewPage->setObjectName(QStringLiteral("ViewPage"));
        ViewPage->resize(1300, 700);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ViewPage->sizePolicy().hasHeightForWidth());
        ViewPage->setSizePolicy(sizePolicy);
        ViewPage->setMinimumSize(QSize(0, 0));
        ViewPage->setMaximumSize(QSize(16777215, 16777215));
        ViewPage->setFocusPolicy(Qt::TabFocus);
        ViewPage->setContextMenuPolicy(Qt::NoContextMenu);
        ViewPage->setLayoutDirection(Qt::LeftToRight);
        ViewPage->setModal(false);
        leftButton = new QPushButton(ViewPage);
        leftButton->setObjectName(QStringLiteral("leftButton"));
        leftButton->setGeometry(QRect(10, 14, 641, 621));
        sizePolicy.setHeightForWidth(leftButton->sizePolicy().hasHeightForWidth());
        leftButton->setSizePolicy(sizePolicy);
        leftButton->setMaximumSize(QSize(1670000, 16777215));
        leftButton->setStyleSheet(QLatin1String("border: none;\n"
"border-color: rgba(255, 255, 255, 0);\n"
"background-color: rgba(255, 255, 255, 0);\n"
"background-image: url(:/pics/prev2.png);\n"
"background-position: center left;\n"
"background-repeat: repeat-false;\n"
""));
        leftButton->setAutoDefault(true);
        leftButton->setFlat(true);
        labelpic = new QLabel(ViewPage);
        labelpic->setObjectName(QStringLiteral("labelpic"));
        labelpic->setGeometry(QRect(20, 30, 1241, 601));
        sizePolicy.setHeightForWidth(labelpic->sizePolicy().hasHeightForWidth());
        labelpic->setSizePolicy(sizePolicy);
        labelpic->setScaledContents(true);
        layoutWidget = new QWidget(ViewPage);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 650, 1181, 35));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(16777215, 150));
        label->setStyleSheet(QLatin1String("font: bold 14px;\n"
"    color: white;"));

        horizontalLayout_2->addWidget(label);

        HomeButton4 = new QPushButton(layoutWidget);
        HomeButton4->setObjectName(QStringLiteral("HomeButton4"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(HomeButton4->sizePolicy().hasHeightForWidth());
        HomeButton4->setSizePolicy(sizePolicy2);
        HomeButton4->setLayoutDirection(Qt::RightToLeft);
        HomeButton4->setStyleSheet(QStringLiteral(""));
        HomeButton4->setAutoDefault(true);
        HomeButton4->setDefault(false);
        HomeButton4->setFlat(false);

        horizontalLayout_2->addWidget(HomeButton4);

        rightButton = new QPushButton(ViewPage);
        rightButton->setObjectName(QStringLiteral("rightButton"));
        rightButton->setGeometry(QRect(690, 10, 581, 621));
        sizePolicy.setHeightForWidth(rightButton->sizePolicy().hasHeightForWidth());
        rightButton->setSizePolicy(sizePolicy);
        rightButton->setStyleSheet(QLatin1String("border: none;\n"
"border-color: rgba(255, 255, 255, 0);\n"
"background-color: rgba(255, 255, 255, 0);\n"
"background-image: url(:/pics/next2.png);\n"
"background-position: center right;\n"
"background-repeat: repeat-false;\n"
""));
        rightButton->setDefault(false);
        rightButton->setFlat(true);
        layoutWidget->raise();
        labelpic->raise();
        leftButton->raise();
        rightButton->raise();

        retranslateUi(ViewPage);
        QObject::connect(HomeButton4, SIGNAL(clicked()), ViewPage, SLOT(reject()));

        QMetaObject::connectSlotsByName(ViewPage);
    } // setupUi

    void retranslateUi(QDialog *ViewPage)
    {
        ViewPage->setWindowTitle(QApplication::translate("ViewPage", "Fridge View", 0));
        leftButton->setText(QString());
        labelpic->setText(QString());
        label->setText(QApplication::translate("ViewPage", "Tap right or left on the screen to scroll through images", 0));
        HomeButton4->setText(QApplication::translate("ViewPage", "Home", 0));
        rightButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ViewPage: public Ui_ViewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPAGE_H
