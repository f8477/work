#include "fifthpage.h"
#include "ui_fifthpage.h"

fifthpage::fifthpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fifthpage)
{
    ui->setupUi(this);

    setMaximumSize(1111,652);
    setMinimumSize(1111,652);
    ui->pushButton_3->setStyleSheet("border-image: url(:/new/prefix1/job.jpg);");
    ui->pushButton_2->setStyleSheet("border-image: url(:/new/prefix1/network.jpg);");
    ui->pushButton_4->setStyleSheet("border-image: url(:/new/prefix1/comment.jpg);");
    ui->pushButton_5->setStyleSheet("border-image: url(:/new/prefix1/me.png);");
}


fifthpage::~fifthpage()
{

    delete ui;
}

void fifthpage::on_pushButton_5_clicked()
{
    /*secondPage *w2 = new secondPage;
    w2->setWindowTitle("secondPage");
    w2->show();*/
}

