/********************************************************************************
** Form generated from reading UI file 'pythoncode.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PYTHONCODE_H
#define UI_PYTHONCODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_pythoncode
{
public:

    void setupUi(QDialog *pythoncode)
    {
        if (pythoncode->objectName().isEmpty())
            pythoncode->setObjectName(QStringLiteral("pythoncode"));
        pythoncode->resize(400, 300);

        retranslateUi(pythoncode);

        QMetaObject::connectSlotsByName(pythoncode);
    } // setupUi

    void retranslateUi(QDialog *pythoncode)
    {
        pythoncode->setWindowTitle(QApplication::translate("pythoncode", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class pythoncode: public Ui_pythoncode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PYTHONCODE_H
