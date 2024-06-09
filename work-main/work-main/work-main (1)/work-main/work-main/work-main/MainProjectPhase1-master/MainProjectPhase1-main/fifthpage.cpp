#include "ui_fifthpage.h"
#include "fifthpage.h"
#include "mepage.h"
#include "jobpage.h"
#include "messaging.h"
#include "network.h"

fifthpage::fifthpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fifthpage)
{
    ui->setupUi(this);

    setMaximumSize(1111,652);
    setMinimumSize(1111,652);

    ui->home->setStyleSheet("border-image: url(:/new/prefix1/home.png);");
    ui->network->setStyleSheet("border-image: url(:/new/prefix1/net1.png);");
    ui->job->setStyleSheet("border-image: url(:/new/prefix1/job.jpg);");
    ui->messaging->setStyleSheet("border-image: url(:/new/prefix1/comment.jpg);");
    ui->me->setStyleSheet("border-image: url(:/new/prefix1/me.png);");

}

fifthpage::~fifthpage()
{
    delete ui;
}

void fifthpage::on_me_clicked()
{
    mepage *w6 = new mepage;
    w6->setWindowTitle("mepage");
    this->hide();
    w6->show();
}


void fifthpage::on_job_clicked()
{
    jobpage *w7 = new jobpage;
    w7->setWindowTitle("jobpage");
    this->hide();
    w7->show();
}


void fifthpage::on_messaging_clicked()
{
    messaging *w8 = new messaging;
    w8->setWindowTitle("messaging");
    this->hide();
    w8->show();
}


void fifthpage::on_network_clicked()
{
    network *w9 = new network;
    w9->setWindowTitle("network");
    this->hide();
    w9->show();
}

