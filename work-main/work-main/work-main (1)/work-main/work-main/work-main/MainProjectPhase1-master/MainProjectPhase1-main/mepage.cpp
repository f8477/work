#include "mepage.h"
#include "ui_mepage.h"
#include "network.h"
#include "jobpage.h"
#include "messaging.h"
#include "home.h"
#include <QSqlError>
#include <QDebug>
#include <QBuffer>

MePage::MePage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MePage)
{
    ui->setupUi(this);
    setMaximumSize(1111,652);
        setMinimumSize(1111,652);

        ui->home->setStyleSheet("border-image: url(:/new/prefix1/home2.jpg);");
        ui->network->setStyleSheet("border-image: url(:/new/prefix1/net1.png);");
        ui->job->setStyleSheet("border-image: url(:/new/prefix1/job.jpg);");
        ui->messaging_2->setStyleSheet("border-image: url(:/new/prefix1/comment2.jpg);");
        ui->me->setStyleSheet("border-image: url(:/new/prefix1/me.png);");


    initializeDatabase();


    loadUserData();


    connect(ui->okButton, &QPushButton::clicked, this, &MePage::onOkButtonClicked);
    connect(ui->uploadButton, &QPushButton::clicked, this, &MePage::onUploadButtonClicked);
}

MePage::~MePage()
{
    delete ui;
}

void MePage::initializeDatabase()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("user_data.db");

    if (!db.open()) {
        qDebug() << "Error: Could not open database.";
        return;
    }

    QSqlQuery query;
    QString createTableQuery = "CREATE TABLE IF NOT EXISTS user ("
                               "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                               "username TEXT, "
                               "skills TEXT, "
                               "bio TEXT, "
                               "profile_picture BLOB)";
    if (!query.exec(createTableQuery)) {
        qDebug() << "Error: Could not create table. " << query.lastError();
    }
}

void MePage::loadUserData()
{
    QSqlQuery query("SELECT username, skills, bio, profile_picture FROM user WHERE id = 1");
    if (query.next()) {
        ui->lineEditUsername->setText(query.value(0).toString());
        ui->lineEditSkills->setText(query.value(1).toString());
        ui->textEditBio->setPlainText(query.value(2).toString());
        QByteArray imageData = query.value(3).toByteArray();
        if (!imageData.isEmpty()) {
            QPixmap pixmap;
            pixmap.loadFromData(imageData);
            ui->labelProfilePicture->setPixmap(pixmap.scaled(ui->labelProfilePicture->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
        }
    }
}

void MePage::saveUserData()
{
    QSqlQuery query;
    query.prepare("INSERT OR REPLACE INTO user (id, username, skills, bio, profile_picture) "
                  "VALUES (1, :username, :skills, :bio, :profile_picture)");
    query.bindValue(":username", ui->lineEditUsername->text());
    query.bindValue(":skills", ui->lineEditSkills->text());
    query.bindValue(":bio", ui->textEditBio->toPlainText());


    QPixmap pixmap = ui->labelProfilePicture->pixmap() ? *ui->labelProfilePicture->pixmap() : QPixmap();
    QByteArray imageData;
    QBuffer buffer(&imageData);
    pixmap.save(&buffer, "PNG");
    query.bindValue(":profile_picture", imageData);

    if (!query.exec()) {
        qDebug() << "Error: Could not save user data. " << query.lastError();
    }
}

void MePage::onOkButtonClicked()
{
    saveUserData();
    ui->okButton->hide();
    ui->lineEditUsername->setDisabled(true);
    ui->lineEditSkills->setDisabled(true);
    ui->textEditBio->setDisabled(true);
    ui->uploadButton->setDisabled(true);
}

void MePage::onUploadButtonClicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Image"), "", tr("Image Files (*.png *.jpg *.bmp)"));
    if (!fileName.isEmpty()) {
        QPixmap pixmap(fileName);
        ui->labelProfilePicture->setPixmap(pixmap.scaled(ui->labelProfilePicture->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    }
}

void MePage::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);
    loadUserData();
}

void MePage::on_home_clicked()
{
    fifthpage *w5 = new fifthpage;
    w5->setWindowTitle("fifthpage");
    this->hide();
    w5->show();
}


void MePage::on_network_clicked()
{
    network *w9 = new network;
    w9->setWindowTitle("network");
    this->hide();
    w9->show();
}


void MePage::on_job_clicked()
{
    jobpage *w7 = new jobpage;
    w7->setWindowTitle("jobpage");
    this->hide();
    w7->show();
}


void MePage::on_messaging_clicked()
{
    messaging *w8 = new messaging;
    w8->setWindowTitle("messaging");
    this->hide();
    w8->show();
}
