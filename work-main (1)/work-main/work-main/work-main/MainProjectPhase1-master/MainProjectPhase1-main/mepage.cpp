#include "mepage.h"
#include "ui_mepage.h"
#include "fifthpage.h"
#include "jobpage.h"
#include "messaging.h"
#include "network.h"

#include "QSqlDatabase"
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include "string.h"

int x=0 ;
mepage::mepage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mepage)
{
    ui->setupUi(this);
    setMaximumSize(1111,652);
    setMinimumSize(1111,652);

    ui->home->setStyleSheet("border-image: url(:/new/prefix1/home2.jpg);");
    ui->network->setStyleSheet("border-image: url(:/new/prefix1/net1.png);");
    ui->job->setStyleSheet("border-image: url(:/new/prefix1/job.jpg);");
    ui->messaging->setStyleSheet("border-image: url(:/new/prefix1/comment.jpg);");
    ui->me->setStyleSheet("border-image: url(:/new/prefix1/me3.jpg);");

    //ui->pushButton_2->setStyleSheet("border-image: url(:/new/prefix1/back3.jpg);");

}

mepage::~mepage()
{
    delete ui;
}


void mepage::on_home_clicked()
{
    fifthpage *w5 = new fifthpage;
    w5->setWindowTitle("fifthpage");
    this->hide();
    w5->show();
}


void mepage::on_job_clicked()
{
    jobpage *w7 = new jobpage;
    w7->setWindowTitle("jobpage");
    this->hide();
    w7->show();
}

void mepage::on_messaging_clicked()
{
      messaging *w8 = new messaging;
      w8->setWindowTitle("messaging");
      this->hide();
      w8->show();
}


void mepage::on_network_clicked()
{
    network *w9 = new network;
    w9->setWindowTitle("network");
    this->hide();
    w9->show();
}

void mepage::on_pushButton_3_clicked()
{

}

void mepage::on_men_clicked()
{
    ui->frame->setStyleSheet("border-image: url(:/new/prefix1/men.jpg);");
    ui->men->hide();
    ui->women->hide();
}

void mepage::on_women_clicked()
{
    ui->frame->setStyleSheet("border-image: url(:/new/prefix1/women.jpg);");
    ui->men->hide();
    ui->women->hide();
}



void mepage::on_pushButton_5_clicked()
{
    ui->lineEdit_2->setEnabled(false);
    ui->lineEdit_3->setEnabled(false);
    ui->lineEdit_4->setEnabled(false);
    ui->lineEdit_5->setEnabled(false);

}

