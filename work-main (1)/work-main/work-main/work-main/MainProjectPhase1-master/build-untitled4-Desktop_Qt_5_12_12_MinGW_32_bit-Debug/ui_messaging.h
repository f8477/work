/********************************************************************************
** Form generated from reading UI file 'messaging.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGING_H
#define UI_MESSAGING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_messaging
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *home;
    QPushButton *network;
    QPushButton *job;
    QPushButton *me;
    QPushButton *messaging_2;

    void setupUi(QDialog *messaging)
    {
        if (messaging->objectName().isEmpty())
            messaging->setObjectName(QString::fromUtf8("messaging"));
        messaging->resize(1112, 652);
        messaging->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/back2.jpg);"));
        groupBox = new QGroupBox(messaging);
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
        messaging_2 = new QPushButton(groupBox);
        messaging_2->setObjectName(QString::fromUtf8("messaging_2"));
        messaging_2->setGeometry(QRect(750, 10, 71, 51));
        messaging_2->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(messaging);

        home->setDefault(true);
        network->setDefault(true);
        job->setDefault(true);
        messaging_2->setDefault(true);


        QMetaObject::connectSlotsByName(messaging);
    } // setupUi

    void retranslateUi(QDialog *messaging)
    {
        messaging->setWindowTitle(QApplication::translate("messaging", "Dialog", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("messaging", " search....", nullptr));
        home->setText(QString());
        network->setText(QString());
        job->setText(QString());
        me->setText(QString());
        messaging_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class messaging: public Ui_messaging {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGING_H
