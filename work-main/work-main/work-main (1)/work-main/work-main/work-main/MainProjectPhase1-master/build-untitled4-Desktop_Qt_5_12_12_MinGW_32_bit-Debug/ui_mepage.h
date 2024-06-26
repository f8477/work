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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MePage
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
    QLineEdit *lineEditUsername;
    QLineEdit *lineEditSkills;
    QLabel *usernameLabel;
    QLabel *skillLine;
    QLabel *labelBio;
    QTextEdit *textEditBio;
    QPushButton *companPushButton;
    QLabel *labelProfilePicture;
    QPushButton *uploadButton;
    QPushButton *okButton;

    void setupUi(QWidget *MePage)
    {
        if (MePage->objectName().isEmpty())
            MePage->setObjectName(QString::fromUtf8("MePage"));
        MePage->resize(1115, 643);
        groupBox = new QGroupBox(MePage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 1111, 71));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 71, 51));
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
        lineEditUsername = new QLineEdit(MePage);
        lineEditUsername->setObjectName(QString::fromUtf8("lineEditUsername"));
        lineEditUsername->setGeometry(QRect(140, 110, 271, 51));
        lineEditSkills = new QLineEdit(MePage);
        lineEditSkills->setObjectName(QString::fromUtf8("lineEditSkills"));
        lineEditSkills->setGeometry(QRect(140, 170, 271, 51));
        usernameLabel = new QLabel(MePage);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        usernameLabel->setGeometry(QRect(20, 110, 111, 41));
        usernameLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        skillLine = new QLabel(MePage);
        skillLine->setObjectName(QString::fromUtf8("skillLine"));
        skillLine->setGeometry(QRect(20, 180, 111, 41));
        skillLine->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        labelBio = new QLabel(MePage);
        labelBio->setObjectName(QString::fromUtf8("labelBio"));
        labelBio->setGeometry(QRect(20, 280, 111, 41));
        labelBio->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        textEditBio = new QTextEdit(MePage);
        textEditBio->setObjectName(QString::fromUtf8("textEditBio"));
        textEditBio->setGeometry(QRect(140, 230, 271, 171));
        companPushButton = new QPushButton(MePage);
        companPushButton->setObjectName(QString::fromUtf8("companPushButton"));
        companPushButton->setGeometry(QRect(140, 410, 271, 25));
        labelProfilePicture = new QLabel(MePage);
        labelProfilePicture->setObjectName(QString::fromUtf8("labelProfilePicture"));
        labelProfilePicture->setGeometry(QRect(764, 120, 171, 161));
        labelProfilePicture->setFrameShape(QFrame::Box);
        uploadButton = new QPushButton(MePage);
        uploadButton->setObjectName(QString::fromUtf8("uploadButton"));
        uploadButton->setGeometry(QRect(770, 290, 161, 25));
        okButton = new QPushButton(MePage);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(810, 320, 80, 25));

        retranslateUi(MePage);

        home->setDefault(true);
        network->setDefault(true);
        job->setDefault(true);
        messaging_2->setDefault(true);


        QMetaObject::connectSlotsByName(MePage);
    } // setupUi

    void retranslateUi(QWidget *MePage)
    {
        MePage->setWindowTitle(QApplication::translate("MePage", "Form", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("MePage", " search....", nullptr));
        home->setText(QString());
        network->setText(QString());
        job->setText(QString());
        me->setText(QString());
        messaging_2->setText(QString());
        usernameLabel->setText(QApplication::translate("MePage", "userName:", nullptr));
        skillLine->setText(QApplication::translate("MePage", "skills:", nullptr));
        labelBio->setText(QApplication::translate("MePage", "Bio:", nullptr));
        companPushButton->setText(QApplication::translate("MePage", "start company", nullptr));
        labelProfilePicture->setText(QString());
        uploadButton->setText(QApplication::translate("MePage", "upload pfp", nullptr));
        okButton->setText(QApplication::translate("MePage", "done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MePage: public Ui_MePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEPAGE_H
