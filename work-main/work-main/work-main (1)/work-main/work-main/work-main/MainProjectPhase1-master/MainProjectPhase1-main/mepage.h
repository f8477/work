#ifndef MEPAGE_H
#define MEPAGE_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QFileDialog>
#include <QVBoxLayout>

namespace Ui {
class mepage;
}

class mepage : public QMainWindow
{
    Q_OBJECT

public:
    explicit mepage(QWidget *parent = nullptr);
    ~mepage();
private slots:
    void on_uploadPushButton_clicked();

    void on_donePushButton_clicked();

    void on_home_clicked();

    void on_network_clicked();

    void on_job_clicked();

    void on_messaging_clicked();

private:
    Ui::mepage *ui;
    QLabel *profilePictureLabel;
};

#endif // MEPAGE_H
