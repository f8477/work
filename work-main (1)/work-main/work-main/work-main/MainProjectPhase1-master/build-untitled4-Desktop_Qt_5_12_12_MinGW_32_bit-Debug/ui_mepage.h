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
#include <QtWidgets/QFrame>
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
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *men;
    QPushButton *women;
    QFrame *frame;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_5;

    void setupUi(QDialog *mepage)
    {
        if (mepage->objectName().isEmpty())
            mepage->setObjectName(QString::fromUtf8("mepage"));
        mepage->resize(1111, 652);
        mepage->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/back2.jpg);"));
        groupBox = new QGroupBox(mepage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 1111, 71));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 10, 71, 51));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/linkdin.jpg);"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 10, 361, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 245, 255);"));
        lineEdit->setFrame(true);
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
        home = new QPushButton(groupBox);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(510, 10, 71, 51));
        home->setStyleSheet(QString::fromUtf8(""));
        messaging = new QPushButton(groupBox);
        messaging->setObjectName(QString::fromUtf8("messaging"));
        messaging->setGeometry(QRect(750, 10, 71, 51));
        messaging->setStyleSheet(QString::fromUtf8(""));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(910, 20, 41, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/Dark-Mode.png);"));
        pushButton_2 = new QPushButton(mepage);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(730, 70, 361, 581));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/back3.jpg);"));
        pushButton_4 = new QPushButton(mepage);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(100, 570, 171, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Sans Serif\";\n"
"border-color: rgb(180, 180, 200);"));
        men = new QPushButton(mepage);
        men->setObjectName(QString::fromUtf8("men"));
        men->setGeometry(QRect(60, 90, 61, 61));
        women = new QPushButton(mepage);
        women->setObjectName(QString::fromUtf8("women"));
        women->setGeometry(QRect(190, 90, 61, 61));
        frame = new QFrame(mepage);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(80, 170, 111, 101));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit_2 = new QLineEdit(mepage);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 280, 261, 51));
        lineEdit_3 = new QLineEdit(mepage);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(70, 340, 261, 51));
        lineEdit_4 = new QLineEdit(mepage);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(70, 400, 261, 51));
        lineEdit_5 = new QLineEdit(mepage);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(70, 460, 261, 71));
        pushButton_5 = new QPushButton(mepage);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(450, 570, 93, 61));
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Sans Serif\";"));

        retranslateUi(mepage);
        QObject::connect(men, SIGNAL(clicked()), men, SLOT(hide()));
        QObject::connect(men, SIGNAL(clicked()), women, SLOT(hide()));
        QObject::connect(women, SIGNAL(clicked()), mepage, SLOT(hide()));
        QObject::connect(women, SIGNAL(clicked()), men, SLOT(hide()));

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
        pushButton_3->setText(QString());
        pushButton_2->setText(QString());
        pushButton_4->setText(QApplication::translate("mepage", "start a company", nullptr));
        men->setText(QApplication::translate("mepage", "men", nullptr));
        women->setText(QApplication::translate("mepage", "women", nullptr));
        lineEdit_2->setPlaceholderText(QApplication::translate("mepage", " name & last name", nullptr));
        lineEdit_3->setPlaceholderText(QApplication::translate("mepage", " skills ...", nullptr));
        lineEdit_4->setPlaceholderText(QApplication::translate("mepage", " email", nullptr));
        lineEdit_5->setPlaceholderText(QApplication::translate("mepage", " Bio ", nullptr));
        pushButton_5->setText(QApplication::translate("mepage", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mepage: public Ui_mepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEPAGE_H
