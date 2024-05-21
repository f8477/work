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
    void on_pushButton_5_clicked();

private:
    Ui::fifthpage *ui;
};

#endif // FIFTHPAGE_H
