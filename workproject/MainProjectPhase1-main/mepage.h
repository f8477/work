#ifndef MEPAGE_H
#define MEPAGE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QFileDialog>

namespace Ui {
class MePage;
}

class MePage : public QWidget
{
    Q_OBJECT

public:
    explicit MePage(QWidget *parent = nullptr);
    ~MePage();

protected:
    void showEvent(QShowEvent *event) override;

private slots:
    void onOkButtonClicked();
    void onUploadButtonClicked();
    void on_home_clicked();
    void on_network_clicked();
    void on_job_clicked();
    void on_messaging_clicked();


private:
    Ui::MePage *ui;
    QSqlDatabase db;

    void initializeDatabase();
    void loadUserData();
    void saveUserData();
};

#endif // MEPAGE_H
