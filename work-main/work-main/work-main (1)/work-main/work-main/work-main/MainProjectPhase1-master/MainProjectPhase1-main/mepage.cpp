#include "mepage.h"
#include "ui_mepage.h"
#include "network.h"
#include "jobpage.h"
#include "messaging.h"
#include "home.h"

mepage::mepage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mepage)
{
    ui->setupUi(this);
    setMaximumSize(1111,652);
    setMinimumSize(1111,652);

    ui->home->setStyleSheet("border-image: url(:/new/prefix1/home2.jpg);");
    ui->network->setStyleSheet("border-image: url(:/new/prefix1/net1.png);");
    ui->job->setStyleSheet("border-image: url(:/new/prefix1/job.jpg);");
    ui->messaging_2->setStyleSheet("border-image: url(:/new/prefix1/comment2.jpg);");
    ui->me->setStyleSheet("border-image: url(:/new/prefix1/me.png);");

    profilePictureLabel = new
            QLabel(ui->profilePic);

    profilePictureLabel->setAlignment(Qt::AlignCenter);

    QVBoxLayout *framLayout = new
            QVBoxLayout(ui->profilePic);
    framLayout->addWidget(profilePictureLabel);
    ui->profilePic->setLayout(framLayout);

}

mepage::~mepage()
{
    delete ui;
}


void mepage::on_uploadPushButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Image"), "", tr("Image Files (*.png *.jpg *.bmp)"));

    if (!fileName.isEmpty()) {
        QPixmap pixmap(fileName);
        profilePictureLabel->setPixmap(pixmap.scaled(profilePictureLabel->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
        ui->donePushButton->setEnabled(true);
    }
}


void mepage::on_donePushButton_clicked()
{
    ui->uploadPushButton->setEnabled(false);
    ui->donePushButton->setEnabled(false);

    profilePictureLabel->setPixmap(profilePictureLabel->pixmap()->copy());
}
void mepage::on_home_clicked()
{
    fifthpage *w5 = new fifthpage;
    w5->setWindowTitle("fifthpage");
    this->hide();
    w5->show();
}


void mepage::on_network_clicked()
{
    network *w9 = new network;
    w9->setWindowTitle("network");
    this->hide();
    w9->show();
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

