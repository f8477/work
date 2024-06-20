#ifndef MESSAGING_H
#define MESSAGING_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class Messaging;
}

class Messaging : public QWidget
{
    Q_OBJECT

public:
    explicit Messaging(const QString &currentUsername, const QString &chatWithUsername, QWidget *parent = nullptr);
    ~Messaging();

private slots:
    void on_home_clicked();

    void on_job_clicked();

    void on_me_clicked();

    void on_network_clicked();

    void onSendButtonClicked();

    void onUploadButtonClicked();
private:
    Ui::Messaging *ui;
    QSqlDatabase db;
       QString currentUsername;
       QString chatWithUsername;

       void createMessagesTable();
       void loadMessages();
       void saveMessage(const QString &sender, const QString &receiver, const QString &message, const QByteArray &imageData);
       void displayMessage(const QString &sender, const QString &message, const QPixmap &image);
};

#endif // MESSAGING_H
