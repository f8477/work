#include "ui_home.h"
#include "home.h"
#include "mepage.h"
#include "jobpage.h"
#include "messaging.h"
#include "network.h"
#include "postpage.h"

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
    MePage *w6 = new MePage;
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


void fifthpage::on_postingButton_clicked()
{
    PostPage *w10 = new PostPage;
    w10->setWindowTitle("PostPage");
    this->hide();
    w10->show();

}


void fifthpage::on_pushButton_2_clicked()
{

}

