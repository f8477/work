/********************************************************************************
** Form generated from reading UI file 'sixthpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIXTHPAGE_H
#define UI_SIXTHPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_sixthpage
{
public:

    void setupUi(QDialog *sixthpage)
    {
        if (sixthpage->objectName().isEmpty())
            sixthpage->setObjectName(QString::fromUtf8("sixthpage"));
        sixthpage->resize(825, 547);

        retranslateUi(sixthpage);

        QMetaObject::connectSlotsByName(sixthpage);
    } // setupUi

    void retranslateUi(QDialog *sixthpage)
    {
        sixthpage->setWindowTitle(QApplication::translate("sixthpage", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sixthpage: public Ui_sixthpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIXTHPAGE_H
