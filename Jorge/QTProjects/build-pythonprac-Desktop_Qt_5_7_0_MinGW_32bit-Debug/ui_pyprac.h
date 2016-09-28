/********************************************************************************
** Form generated from reading UI file 'pyprac.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PYPRAC_H
#define UI_PYPRAC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pyprac
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *pyprac)
    {
        if (pyprac->objectName().isEmpty())
            pyprac->setObjectName(QStringLiteral("pyprac"));
        pyprac->resize(400, 300);
        centralWidget = new QWidget(pyprac);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 80, 93, 28));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(100, 140, 104, 87));
        pyprac->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(pyprac);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 26));
        pyprac->setMenuBar(menuBar);
        mainToolBar = new QToolBar(pyprac);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        pyprac->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(pyprac);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        pyprac->setStatusBar(statusBar);

        retranslateUi(pyprac);

        QMetaObject::connectSlotsByName(pyprac);
    } // setupUi

    void retranslateUi(QMainWindow *pyprac)
    {
        pyprac->setWindowTitle(QApplication::translate("pyprac", "pyprac", 0));
        pushButton->setText(QApplication::translate("pyprac", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class pyprac: public Ui_pyprac {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PYPRAC_H
