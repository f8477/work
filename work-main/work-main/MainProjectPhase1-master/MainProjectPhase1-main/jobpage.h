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

private:
    Ui::jobpage *ui;
};

#endif // JOBPAGE_H
