#include "network.h"
#include "ui_network.h"
#include "home.h"
#include "mepage.h"
#include "jobpage.h"
#include "messaging.h"

network::network(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::network)
{
    ui->setupUi(this);
    setMaximumSize(1111,652);
    setMinimumSize(1111,652);
    ui->home->setStyleSheet("border-image: url(:/new/prefix1/home2.jpg);");
    ui->network_2->setStyleSheet("border-image: url(:/new/prefix1/net2.png);");
    ui->job->setStyleSheet("border-image: url(:/new/prefix1/job.jpg);");
    ui->messaging->setStyleSheet("border-image: url(:/new/prefix1/comment.jpg);");
    ui->me->setStyleSheet("border-image: url(:/new/prefix1/me.png);");
}

network::~network()
{
    delete ui;
}

void network::on_home_clicked()
{
    fifthpage *w5 = new fifthpage;
    w5->setWindowTitle("fifthpage");
    this->hide();
    w5->show();
}


void network::on_job_clicked()
{
    jobpage *w7 = new jobpage;
    w7->setWindowTitle("jobpage");
    this->hide();
    w7->show();
}


void network::on_messaging_clicked()
{
    messaging *w8 = new messaging;
    w8->setWindowTitle("messaging");
    this->hide();
    w8->show();
}


void network::on_me_clicked()
{
    MePage *w6 = new MePage;
    w6->setWindowTitle("mepage");
    this->hide();
    w6->show();
}

