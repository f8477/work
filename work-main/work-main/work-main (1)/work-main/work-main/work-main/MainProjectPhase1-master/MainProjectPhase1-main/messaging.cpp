#include "messaging.h"
#include "ui_messaging.h"
#include "home.h"
#include "jobpage.h"
#include "mepage.h"
#include "mepage.h"
#include "network.h"

#include <QFileDialog>
#include <QSqlQuery>
#include <QSqlError>
#include <QBuffer>
#include <QMessageBox>
#include <QDateTime>
#include <QDebug>
#include <QSqlDatabase>

Messaging::Messaging(const QString &currentUsername, const QString &chatWithUsername, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Messaging),
  currentUsername(currentUsername),
      chatWithUsername(chatWithUsername)
{
    ui->setupUi(this);setMaximumSize(1111,652);
    setMinimumSize(1111,652);

    ui->home->setStyleSheet("border-image: url(:/new/prefix1/home2.jpg);");
    ui->network->setStyleSheet("border-image: url(:/new/prefix1/net1.png);");
    ui->job->setStyleSheet("border-image: url(:/new/prefix1/job.jpg);");
    ui->messaging->setStyleSheet("border-image: url(:/new/prefix1/comment2.jpg);");
    ui->me->setStyleSheet("border-image: url(:/new/prefix1/me.png);");

    ui->labelChatWith->setText("Chat with: " + chatWithUsername);
    connect(ui->sendButton, &QPushButton::clicked, this, &Messaging::onSendButtonClicked);
        connect(ui->uploadButton, &QPushButton::clicked, this, &Messaging::onUploadButtonClicked);

        db = QSqlDatabase::addDatabase("QSQLITE");
            db.setDatabaseName("messages.db");
            if (!db.open()) {
                qDebug() << "Error: Could not connect to database.";
            } else {
                createMessagesTable();
                loadMessages();
            }

}

Messaging::~Messaging()
{
    delete ui;
}


void Messaging::createMessagesTable()
{
    QSqlQuery query;
    QString createTableQuery = "CREATE TABLE IF NOT EXISTS messages ("
                               "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                               "sender TEXT, "
                               "receiver TEXT, "
                               "message TEXT, "
                               "image BLOB, "
                               "timestamp DATETIME DEFAULT CURRENT_TIMESTAMP)";
    if (!query.exec(createTableQuery)) {
        qDebug() << "Error: Failed to create table -" << query.lastError();
    }
}

void Messaging::loadMessages()
{
    QSqlQuery query;
    query.prepare("SELECT sender, message, image FROM messages WHERE (sender = ? AND receiver = ?) OR (sender = ? AND receiver = ?) ORDER BY timestamp ASC");
    query.addBindValue(currentUsername);
    query.addBindValue(chatWithUsername);
    query.addBindValue(chatWithUsername);
    query.addBindValue(currentUsername);

    if (query.exec()) {
        while (query.next()) {
            QString sender = query.value(0).toString();
            QString message = query.value(1).toString();
            QByteArray imageData = query.value(2).toByteArray();
            QPixmap image;
            if (!imageData.isEmpty()) {
                image.loadFromData(imageData);
            }
            displayMessage(sender, message, image);
        }
    } else {
        qDebug() << "Error: Failed to load messages -" << query.lastError();
    }
}

void Messaging::saveMessage(const QString &sender, const QString &receiver, const QString &message, const QByteArray &imageData)
{
    QSqlQuery query;
    query.prepare("INSERT INTO messages (sender, receiver, message, image) VALUES (?, ?, ?, ?)");
    query.addBindValue(sender);
    query.addBindValue(receiver);
    query.addBindValue(message);
    query.addBindValue(imageData);

    if (!query.exec()) {
        qDebug() << "Error: Failed to save message -" << query.lastError();
    }
}

void Messaging::displayMessage(const QString &sender, const QString &message, const QPixmap &image)
{
    QString formattedMessage = QString("<b>%1:</b> %2").arg(sender).arg(message);
    if (!image.isNull()) {
        QByteArray byteArray;
        QBuffer buffer(&byteArray);
        buffer.open(QIODevice::WriteOnly);
        image.save(&buffer, "PNG");
        QString base64Image = QString::fromLatin1(byteArray.toBase64().data());
        formattedMessage += QString("<br><img src='data:image/png;base64,%1'>").arg(base64Image);
    }
    ui->textBrowser->append(formattedMessage);
}

void Messaging::onSendButtonClicked()
{
    QString message = ui->messageLineEdit->text();
    if (message.isEmpty()) {
        return;
    }
    saveMessage(currentUsername, chatWithUsername, message, QByteArray());
    displayMessage(currentUsername, message, QPixmap());
    ui->messageLineEdit->clear();
}
void Messaging::onUploadButtonClicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Image"), "", tr("Image Files (*.png *.jpg *.bmp)"));
    if (!fileName.isEmpty()) {
        QPixmap pixmap(fileName);
        QByteArray imageData;
        QBuffer buffer(&imageData);
        pixmap.save(&buffer, "PNG");
        saveMessage(currentUsername, chatWithUsername, "", imageData);
        displayMessage(currentUsername, "", pixmap);
    }
}
void Messaging::on_home_clicked()
{
    fifthpage *w5 = new fifthpage;
    w5->setWindowTitle("fifthpage");
    this->hide();
    w5->show();
}


void Messaging::on_network_clicked()
{
    network *w9 = new network;
    w9->setWindowTitle("network");
    this->hide();
    w9->show();
}


void Messaging::on_job_clicked()
{
    jobpage *w7 = new jobpage;
    w7->setWindowTitle("jobpage");
    this->hide();
    w7->show();
}


void Messaging::on_me_clicked()
{
    MePage *w6 = new MePage;
    w6->setWindowTitle("mepage");
    this->hide();
    w6->show();
}
