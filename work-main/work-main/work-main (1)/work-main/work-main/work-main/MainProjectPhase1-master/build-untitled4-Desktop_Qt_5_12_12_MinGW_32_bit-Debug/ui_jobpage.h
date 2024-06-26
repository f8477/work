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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_jobpage
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *home;
    QPushButton *network;
    QPushButton *job;
    QPushButton *me;
    QPushButton *messaging;
    QCheckBox *checkBox;
    QGroupBox *groupBox_2;

    void setupUi(QDialog *jobpage)
    {
        if (jobpage->objectName().isEmpty())
            jobpage->setObjectName(QString::fromUtf8("jobpage"));
        jobpage->resize(1111, 652);
        jobpage->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/back2.jpg);"));
        groupBox = new QGroupBox(jobpage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 1111, 71));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 10, 71, 51));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/linkdin.jpg);"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 10, 371, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 245, 255);"));
        lineEdit->setFrame(true);
        home = new QPushButton(groupBox);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(510, 10, 71, 51));
        home->setStyleSheet(QString::fromUtf8(""));
        home->setFlat(false);
        network = new QPushButton(groupBox);
        network->setObjectName(QString::fromUtf8("network"));
        network->setGeometry(QRect(590, 10, 71, 51));
        network->setStyleSheet(QString::fromUtf8(""));
        job = new QPushButton(groupBox);
        job->setObjectName(QString::fromUtf8("job"));
        job->setGeometry(QRect(670, 10, 71, 51));
        job->setStyleSheet(QString::fromUtf8(""));
        me = new QPushButton(groupBox);
        me->setObjectName(QString::fromUtf8("me"));
        me->setGeometry(QRect(980, 10, 71, 51));
        me->setStyleSheet(QString::fromUtf8(""));
        messaging = new QPushButton(groupBox);
        messaging->setObjectName(QString::fromUtf8("messaging"));
        messaging->setGeometry(QRect(750, 10, 71, 51));
        messaging->setStyleSheet(QString::fromUtf8(""));
        checkBox = new QCheckBox(jobpage);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(50, 110, 93, 26));
        groupBox_2 = new QGroupBox(jobpage);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 150, 120, 80));

        retranslateUi(jobpage);

        home->setDefault(true);
        network->setDefault(true);
        job->setDefault(true);
        messaging->setDefault(true);


        QMetaObject::connectSlotsByName(jobpage);
    } // setupUi

    void retranslateUi(QDialog *jobpage)
    {
        jobpage->setWindowTitle(QApplication::translate("jobpage", "Dialog", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("jobpage", " search....", nullptr));
        home->setText(QString());
        network->setText(QString());
        job->setText(QString());
        me->setText(QString());
        messaging->setText(QString());
        checkBox->setText(QApplication::translate("jobpage", "CheckBox", nullptr));
        groupBox_2->setTitle(QApplication::translate("jobpage", "GroupBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class jobpage: public Ui_jobpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOBPAGE_H
