/********************************************************************************
** Form generated from reading UI file 'jobpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOBPAGE_H
#define UI_JOBPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_jobpage
{
public:

    void setupUi(QDialog *jobpage)
    {
        if (jobpage->objectName().isEmpty())
            jobpage->setObjectName(QString::fromUtf8("jobpage"));
        jobpage->resize(1111, 652);

        retranslateUi(jobpage);

        QMetaObject::connectSlotsByName(jobpage);
    } // setupUi

    void retranslateUi(QDialog *jobpage)
    {
        jobpage->setWindowTitle(QApplication::translate("jobpage", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class jobpage: public Ui_jobpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOBPAGE_H
