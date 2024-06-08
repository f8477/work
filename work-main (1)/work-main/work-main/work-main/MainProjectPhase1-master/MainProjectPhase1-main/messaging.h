#ifndef MESSAGING_H
#define MESSAGING_H

#include <QDialog>

namespace Ui {
class messaging;
}

class messaging : public QDialog
{
    Q_OBJECT

public:
    explicit messaging(QWidget *parent = nullptr);
    ~messaging();

private slots:
    void on_home_clicked();

    void on_network_clicked();

    void on_job_clicked();

    void on_me_clicked();

private:
    Ui::messaging *ui;
};

#endif // MESSAGING_H
