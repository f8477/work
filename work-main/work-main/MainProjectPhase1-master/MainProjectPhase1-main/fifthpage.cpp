#include "fifthpage.h"
#include "ui_fifthpage.h"
#include "mepage.h"
#include "jobpage.h"

fifthpage::fifthpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fifthpage)
{
    ui->setupUi(this);

    setMaximumSize(1111,652);
    setMinimumSize(1111,652);

    ui->home->setStyleSheet("border-image: url(:/new/prefix1/home.png);");
    ui->network->setStyleSheet("border-image: url(:/new/prefix1/network.jpg);");
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
    w6->show();
}


void fifthpage::on_job_clicked()
{
    jobpage *w7 = new jobpage;
    w7->setWindowTitle("jobpage");
    this->hide();
    w7->show();
}

