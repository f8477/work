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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Messaging
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
    QTextBrowser *textBrowser;
    QLineEdit *messageLineEdit;
    QPushButton *sendButton;
    QPushButton *uploadButton;
    QLabel *labelChatWith;

    void setupUi(QWidget *Messaging)
    {
        if (Messaging->objectName().isEmpty())
            Messaging->setObjectName(QString::fromUtf8("Messaging"));
        Messaging->resize(1116, 590);
        groupBox = new QGroupBox(Messaging);
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
        textBrowser = new QTextBrowser(Messaging);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(270, 90, 551, 361));
        messageLineEdit = new QLineEdit(Messaging);
        messageLineEdit->setObjectName(QString::fromUtf8("messageLineEdit"));
        messageLineEdit->setGeometry(QRect(270, 450, 551, 51));
        sendButton = new QPushButton(Messaging);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(270, 510, 80, 25));
        uploadButton = new QPushButton(Messaging);
        uploadButton->setObjectName(QString::fromUtf8("uploadButton"));
        uploadButton->setGeometry(QRect(370, 510, 80, 25));
        labelChatWith = new QLabel(Messaging);
        labelChatWith->setObjectName(QString::fromUtf8("labelChatWith"));
        labelChatWith->setGeometry(QRect(144, 90, 101, 20));
        labelChatWith->setFrameShape(QFrame::Box);

        retranslateUi(Messaging);

        home->setDefault(true);
        network->setDefault(true);
        job->setDefault(true);
        messaging->setDefault(true);


        QMetaObject::connectSlotsByName(Messaging);
    } // setupUi

    void retranslateUi(QWidget *Messaging)
    {
        Messaging->setWindowTitle(QApplication::translate("Messaging", "Form", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("Messaging", " search....", nullptr));
        home->setText(QString());
        network->setText(QString());
        job->setText(QString());
        me->setText(QString());
        messaging->setText(QString());
        sendButton->setText(QApplication::translate("Messaging", "done", nullptr));
        uploadButton->setText(QApplication::translate("Messaging", "photo", nullptr));
        labelChatWith->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Messaging: public Ui_Messaging {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGING_H
