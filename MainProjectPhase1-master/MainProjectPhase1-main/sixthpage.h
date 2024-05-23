#ifndef SIXTHPAGE_H
#define SIXTHPAGE_H

#include <QDialog>

namespace Ui {
class sixthpage;
}

class sixthpage : public QDialog
{
    Q_OBJECT

public:
    explicit sixthpage(QWidget *parent = nullptr);
    ~sixthpage();

private:
    Ui::sixthpage *ui;
};

#endif // SIXTHPAGE_H
