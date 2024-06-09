#ifndef MEPAGE_H
#define MEPAGE_H

#include <QDialog>

namespace Ui {
class mepage;
}

class mepage : public QDialog
{
    Q_OBJECT

public:
    explicit mepage(QWidget *parent = nullptr);
    ~mepage();

private slots:

    void on_home_clicked();

    void on_job_clicked();

    void on_messaging_clicked();

    void on_network_clicked();

    void on_pushButton_3_clicked();


    void on_men_clicked();

    void on_women_clicked();


private:
    Ui::mepage *ui;
};

#endif // MEPAGE_H
