/********************************************************************************
** Form generated from reading UI file 'createjob.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEJOB_H
#define UI_CREATEJOB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_createjob
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

    void setupUi(QDialog *createjob)
    {
        if (createjob->objectName().isEmpty())
            createjob->setObjectName(QString::fromUtf8("createjob"));
        createjob->resize(1111, 652);
        createjob->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/back2.jpg);"));
        groupBox = new QGroupBox(createjob);
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

        retranslateUi(createjob);

        home->setDefault(true);
        network->setDefault(true);
        job->setDefault(true);
        messaging->setDefault(true);


        QMetaObject::connectSlotsByName(createjob);
    } // setupUi

    void retranslateUi(QDialog *createjob)
    {
        createjob->setWindowTitle(QApplication::translate("createjob", "Dialog", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("createjob", " search....", nullptr));
        home->setText(QString());
        network->setText(QString());
        job->setText(QString());
        me->setText(QString());
        messaging->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class createjob: public Ui_createjob {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEJOB_H