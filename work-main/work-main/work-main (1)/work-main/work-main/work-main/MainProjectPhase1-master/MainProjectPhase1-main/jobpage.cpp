#include "jobpage.h"
#include "ui_jobpage.h"
#include "messaging.h"
#include "home.h"
#include "mepage.h"
#include "network.h"
jobpage::jobpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::jobpage)
{
    ui->setupUi(this);
    setMaximumSize(1111,652);
    setMinimumSize(1111,652);
    ui->home->setStyleSheet("border-image: url(:/new/prefix1/home2.jpg);");
    ui->network->setStyleSheet("border-image: url(:/new/prefix1/net1.png);");
    ui->job->setStyleSheet("border-image: url(:/new/prefix1/job2.png);");
    ui->messaging->setStyleSheet("border-image: url(:/new/prefix1/comment.jpg);");
    ui->me->setStyleSheet("border-image: url(:/new/prefix1/me.png);");

}


jobpage::~jobpage()
{
    delete ui;
}

void jobpage::on_home_clicked()
{
    fifthpage *w5 = new fifthpage;
    w5->setWindowTitle("fifthpage");
    this->hide();
    w5->show();
}


void jobpage::on_me_clicked()
{
    MePage *w6 = new MePage;
    w6->setWindowTitle("mepage");
    this->hide();
    w6->show();
}


void jobpage::on_messaging_clicked()
{
    messaging *w8 = new messaging;
    w8->setWindowTitle("messaging");
    this->hide();
    w8->show();
}


void jobpage::on_network_clicked()
{
    network *w9 = new network;
    w9->setWindowTitle("network");
    this->hide();
    w9->show();
}

