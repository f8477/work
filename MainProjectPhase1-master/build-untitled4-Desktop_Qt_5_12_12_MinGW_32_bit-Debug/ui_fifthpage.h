/********************************************************************************
** Form generated from reading UI file 'fifthpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIFTHPAGE_H
#define UI_FIFTHPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_fifthpage
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *fifthpage)
    {
        if (fifthpage->objectName().isEmpty())
            fifthpage->setObjectName(QString::fromUtf8("fifthpage"));
        fifthpage->resize(913, 604);
        fifthpage->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/back2.jpg);"));
        groupBox = new QGroupBox(fifthpage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(70, 20, 761, 61));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 0, 71, 51));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/linkdin.jpg);"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 10, 241, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 245, 255);"));
        lineEdit->setFrame(true);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 0, 71, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8(""));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(460, 10, 51, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8(""));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(530, 10, 51, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8(""));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(690, 10, 61, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(fifthpage);

        QMetaObject::connectSlotsByName(fifthpage);
    } // setupUi

    void retranslateUi(QDialog *fifthpage)
    {
        fifthpage->setWindowTitle(QApplication::translate("fifthpage", "Dialog", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("fifthpage", " search....", nullptr));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class fifthpage: public Ui_fifthpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIFTHPAGE_H
