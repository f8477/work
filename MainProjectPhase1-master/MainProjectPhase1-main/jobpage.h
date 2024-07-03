#ifndef JOBPAGE_H
#define JOBPAGE_H

#include <QDialog>

namespace Ui {
class jobpage;
}

class jobpage : public QDialog
{
    Q_OBJECT

public:
    explicit jobpage(QWidget *parent = nullptr);
    ~jobpage();

private slots:
    void on_home_clicked();

    void on_me_clicked();

    void on_messaging_clicked();

    void on_network_clicked();

private:
    Ui::jobpage *ui;
};

#endif // JOBPAGE_H
