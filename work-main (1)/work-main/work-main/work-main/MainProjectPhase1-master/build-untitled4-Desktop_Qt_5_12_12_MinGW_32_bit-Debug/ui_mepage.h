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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

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
    QTableView *tableView;
    QTableView *tableView_2;
    QTableView *tableView_3;
    QTableView *tableView_4;
    QPushButton *pushButton_4;

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
        pushButton_3->setGeometry(QRect(890, 10, 41, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8(""));
        pushButton_2 = new QPushButton(mepage);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(670, 70, 441, 581));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/back3.jpg);"));
        tableView = new QTableView(mepage);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(70, 110, 131, 151));
        tableView_2 = new QTableView(mepage);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(70, 280, 256, 51));
        tableView_3 = new QTableView(mepage);
        tableView_3->setObjectName(QString::fromUtf8("tableView_3"));
        tableView_3->setGeometry(QRect(70, 360, 256, 51));
        tableView_4 = new QTableView(mepage);
        tableView_4->setObjectName(QString::fromUtf8("tableView_4"));
        tableView_4->setGeometry(QRect(70, 420, 256, 51));
        pushButton_4 = new QPushButton(mepage);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(120, 557, 171, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Sans Serif\";\n"
"border-color: rgb(180, 180, 200);"));

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
        pushButton_3->setText(QApplication::translate("mepage", "..", nullptr));
        pushButton_2->setText(QString());
        pushButton_4->setText(QApplication::translate("mepage", "start a company", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mepage: public Ui_mepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEPAGE_H
