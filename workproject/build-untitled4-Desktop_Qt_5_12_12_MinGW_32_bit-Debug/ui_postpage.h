/********************************************************************************
** Form generated from reading UI file 'postpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSTPAGE_H
#define UI_POSTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PostPage
{
public:

    void setupUi(QWidget *PostPage)
    {
        if (PostPage->objectName().isEmpty())
            PostPage->setObjectName(QString::fromUtf8("PostPage"));
        PostPage->resize(1111, 652);

        retranslateUi(PostPage);

        QMetaObject::connectSlotsByName(PostPage);
    } // setupUi

    void retranslateUi(QWidget *PostPage)
    {
        PostPage->setWindowTitle(QApplication::translate("PostPage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PostPage: public Ui_PostPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTPAGE_H
