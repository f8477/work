#ifndef NETWORK_H
#define NETWORK_H

#include <QDialog>

namespace Ui {
class network;
}

class network : public QDialog
{
    Q_OBJECT

public:
    explicit network(QWidget *parent = nullptr);
    ~network();

private slots:
    void on_home_clicked();

    void on_job_clicked();

    void on_messaging_clicked();

    void on_me_clicked();

private:
    Ui::network *ui;
};

#endif // NETWORK_H
