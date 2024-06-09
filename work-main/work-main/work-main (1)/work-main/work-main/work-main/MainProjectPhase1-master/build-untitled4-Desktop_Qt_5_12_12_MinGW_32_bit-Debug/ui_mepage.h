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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mepage
{
public:
    QWidget *centralwidget;
    QLineEdit *usernameLine;
    QLineEdit *skillLine;
    QPushButton *uploadPushButton;
    QPushButton *donePushButton;
    QLineEdit *skillLine_2;
    QLabel *usernameLabel;
    QLabel *skillsLabel;
    QLabel *label;
    QPushButton *pushButton;
    QFrame *profilePic;
    QGroupBox *groupBox;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QPushButton *home;
    QPushButton *network;
    QPushButton *job;
    QPushButton *me;
    QPushButton *messaging_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mepage)
    {
        if (mepage->objectName().isEmpty())
            mepage->setObjectName(QString::fromUtf8("mepage"));
        mepage->resize(1142, 600);
        centralwidget = new QWidget(mepage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        usernameLine = new QLineEdit(centralwidget);
        usernameLine->setObjectName(QString::fromUtf8("usernameLine"));
        usernameLine->setGeometry(QRect(170, 210, 251, 71));
        usernameLine->setFrame(true);
        skillLine = new QLineEdit(centralwidget);
        skillLine->setObjectName(QString::fromUtf8("skillLine"));
        skillLine->setGeometry(QRect(170, 130, 251, 71));
        uploadPushButton = new QPushButton(centralwidget);
        uploadPushButton->setObjectName(QString::fromUtf8("uploadPushButton"));
        uploadPushButton->setGeometry(QRect(840, 240, 201, 21));
        donePushButton = new QPushButton(centralwidget);
        donePushButton->setObjectName(QString::fromUtf8("donePushButton"));
        donePushButton->setGeometry(QRect(900, 270, 80, 25));
        skillLine_2 = new QLineEdit(centralwidget);
        skillLine_2->setObjectName(QString::fromUtf8("skillLine_2"));
        skillLine_2->setGeometry(QRect(170, 290, 301, 151));
        usernameLabel = new QLabel(centralwidget);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        usernameLabel->setGeometry(QRect(20, 140, 141, 51));
        usernameLabel->setStyleSheet(QString::fromUtf8("font: 18pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));
        skillsLabel = new QLabel(centralwidget);
        skillsLabel->setObjectName(QString::fromUtf8("skillsLabel"));
        skillsLabel->setGeometry(QRect(20, 220, 111, 51));
        skillsLabel->setStyleSheet(QString::fromUtf8("font: 18pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 340, 81, 51));
        label->setStyleSheet(QString::fromUtf8("font: 18pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 450, 281, 25));
        pushButton->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        profilePic = new QFrame(centralwidget);
        profilePic->setObjectName(QString::fromUtf8("profilePic"));
        profilePic->setGeometry(QRect(860, 90, 161, 141));
        profilePic->setFrameShape(QFrame::Box);
        profilePic->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 1111, 71));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 10, 71, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/linkdin.jpg);"));
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
        mepage->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(mepage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        mepage->setStatusBar(statusbar);

        retranslateUi(mepage);

        home->setDefault(true);
        network->setDefault(true);
        job->setDefault(true);
        messaging_2->setDefault(true);


        QMetaObject::connectSlotsByName(mepage);
    } // setupUi

    void retranslateUi(QMainWindow *mepage)
    {
        mepage->setWindowTitle(QApplication::translate("mepage", "MainWindow", nullptr));
        uploadPushButton->setText(QApplication::translate("mepage", "UPLOAD PFP", nullptr));
        donePushButton->setText(QApplication::translate("mepage", "Done", nullptr));
        usernameLabel->setText(QApplication::translate("mepage", "username:", nullptr));
        skillsLabel->setText(QApplication::translate("mepage", "skills:", nullptr));
        label->setText(QApplication::translate("mepage", "Bio:", nullptr));
        pushButton->setText(QApplication::translate("mepage", "company", nullptr));
        groupBox->setTitle(QString());
        pushButton_2->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("mepage", " search....", nullptr));
        home->setText(QString());
        network->setText(QString());
        job->setText(QString());
        me->setText(QString());
        messaging_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mepage: public Ui_mepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEPAGE_H
