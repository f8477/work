#include "mepage.h"
#include "ui_mepage.h"
#include "fifthpage.h"
#include "jobpage.h"
mepage::mepage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mepage)
{
    ui->setupUi(this);
    setMaximumSize(1111,652);
    setMinimumSize(1111,652);

    ui->home->setStyleSheet("border-image: url(:/new/prefix1/home2.jpg);");
    ui->network->setStyleSheet("border-image: url(:/new/prefix1/network.jpg);");
    ui->job->setStyleSheet("border-image: url(:/new/prefix1/job.jpg);");
    ui->messaging->setStyleSheet("border-image: url(:/new/prefix1/comment.jpg);");
    ui->me->setStyleSheet("border-image: url(:/new/prefix1/me3.jpg);");

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

