#include "createjob.h"
#include "ui_createjob.h"

#include "mepage.h"
#include "network.h"
#include "jobpage.h"
#include "messaging.h"
#include "home.h"
createjob::createjob(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::createjob)
{
    ui->setupUi(this);
    setMaximumSize(1111,652);
    setMinimumSize(1111,652);
}

createjob::~createjob()
{
    delete ui;
}

void createjob::on_home_clicked()
{
    fifthpage *w5 = new fifthpage;
    w5->setWindowTitle("fifthpage");
    this->hide();
    w5->show();

}


void createjob::on_network_clicked()
{
    network *w9 = new network;
    w9->setWindowTitle("network");
    this->hide();
    w9->show();
}


void createjob::on_job_clicked()
{
    jobpage *w7 = new jobpage;
    w7->setWindowTitle("jobpage");
    this->hide();
    w7->show();
}


void createjob::on_messaging_clicked()
{
    messaging *w8 = new messaging;
    w8->setWindowTitle("messaging");
    this->hide();
    w8->show();
}


void createjob::on_me_clicked()
{
    MePage *w6 = new MePage;
    w6->setWindowTitle("mepage");
    this->hide();
    w6->show();
}

