/********************************************************************************
** Form generated from reading UI file 'mepage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEPAGE_H
#define UI_MEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_mepage
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *network;
    QPushButton *job;
    QPushButton *me;
    QPushButton *home;
    QPushButton *messaging;

    void setupUi(QDialog *mepage)
    {
        if (mepage->objectName().isEmpty())
            mepage->setObjectName(QString::fromUtf8("mepage"));
        mepage->resize(1070, 557);
        mepage->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/back2.jpg);"));
        groupBox = new QGroupBox(mepage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(90, 30, 781, 61));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 0, 71, 51));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/linkdin.jpg);"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 10, 241, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 245, 255);"));
        lineEdit->setFrame(true);
        network = new QPushButton(groupBox);
        network->setObjectName(QString::fromUtf8("network"));
        network->setGeometry(QRect(460, 10, 51, 41));
        network->setStyleSheet(QString::fromUtf8(""));
        job = new QPushButton(groupBox);
        job->setObjectName(QString::fromUtf8("job"));
        job->setGeometry(QRect(520, 10, 51, 41));
        job->setStyleSheet(QString::fromUtf8(""));
        me = new QPushButton(groupBox);
        me->setObjectName(QString::fromUtf8("me"));
        me->setGeometry(QRect(690, 10, 61, 41));
        me->setStyleSheet(QString::fromUtf8(""));
        home = new QPushButton(groupBox);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(400, 10, 51, 41));
        home->setStyleSheet(QString::fromUtf8(""));
        messaging = new QPushButton(groupBox);
        messaging->setObjectName(QString::fromUtf8("messaging"));
        messaging->setGeometry(QRect(580, 10, 51, 41));
        messaging->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(mepage);

        QMetaObject::connectSlotsByName(mepage);
    } // setupUi

    void retranslateUi(QDialog *mepage)
    {
        mepage->setWindowTitle(QApplication::translate("mepage", "Dialog", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("mepage", " search....", nullptr));
        network->setText(QString());
        job->setText(QString());
        me->setText(QString());
        home->setText(QString());
        messaging->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mepage: public Ui_mepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEPAGE_H
