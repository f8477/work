#ifndef FIFTHPAGE_H
#define FIFTHPAGE_H

#include <QDialog>

namespace Ui {
class fifthpage;
}

class fifthpage : public QDialog
{
    Q_OBJECT

public:
    explicit fifthpage(QWidget *parent = nullptr);
    ~fifthpage();

private slots:

    void on_me_clicked();

    void on_job_clicked();

    void on_messaging_clicked();

    void on_network_clicked();

private:
    Ui::fifthpage *ui;
};

#endif // FIFTHPAGE_H
