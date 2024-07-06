#include "messaging.h"
#include "ui_messaging.h"
#include "home.h"
#include "jobpage.h"
#include "mepage.h"
#include "mepage.h"
#include "network.h"

messaging::messaging(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::messaging)
{
    ui->setupUi(this);
    setMaximumSize(1111,652);
    setMinimumSize(1111,652);

    ui->home->setStyleSheet("border-image: url(:/new/prefix1/home2.jpg);");
    ui->network->setStyleSheet("border-image: url(:/new/prefix1/net1.png);");
    ui->job->setStyleSheet("border-image: url(:/new/prefix1/job.jpg);");
    ui->messaging_2->setStyleSheet("border-image: url(:/new/prefix1/comment2.jpg);");
    ui->me->setStyleSheet("border-image: url(:/new/prefix1/me.png);");

}

messaging::~messaging()
{
    delete ui;
}

void messaging::on_home_clicked()
{
    fifthpage *w5 = new fifthpage;
    w5->setWindowTitle("fifthpage");
    this->hide();
    w5->show();
}


void messaging::on_network_clicked()
{
    network *w9 = new network;
    w9->setWindowTitle("network");
    this->hide();
    w9->show();
}


void messaging::on_job_clicked()
{
    jobpage *w7 = new jobpage;
    w7->setWindowTitle("jobpage");
    this->hide();
    w7->show();
}


void messaging::on_me_clicked()
{
    MePage *w6 = new MePage;
    w6->setWindowTitle("mepage");
    this->hide();
    w6->show();
}

