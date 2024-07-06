#ifndef CREATEJOB_H
#define CREATEJOB_H

#include <QDialog>

namespace Ui {
class createjob;
}

class createjob : public QDialog
{
    Q_OBJECT

public:
    explicit createjob(QWidget *parent = nullptr);
    ~createjob();

private slots:
    void on_home_clicked();

    void on_network_clicked();

    void on_job_clicked();

    void on_messaging_clicked();

    void on_me_clicked();

private:
    Ui::createjob *ui;
};

#endif // CREATEJOB_H
