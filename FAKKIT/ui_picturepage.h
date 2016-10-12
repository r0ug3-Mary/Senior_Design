/********************************************************************************
** Form generated from reading UI file 'picturepage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTUREPAGE_H
#define UI_PICTUREPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PicturePage
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *PicturePage)
    {
        if (PicturePage->objectName().isEmpty())
            PicturePage->setObjectName(QStringLiteral("PicturePage"));
        PicturePage->resize(400, 300);
        pushButton = new QPushButton(PicturePage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(49, 120, 281, 141));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));

        retranslateUi(PicturePage);

        QMetaObject::connectSlotsByName(PicturePage);
    } // setupUi

    void retranslateUi(QDialog *PicturePage)
    {
        PicturePage->setWindowTitle(QApplication::translate("PicturePage", "Dialog", 0));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PicturePage: public Ui_PicturePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTUREPAGE_H
