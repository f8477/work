#include "jobpage.h"
#include "ui_jobpage.h"

jobpage::jobpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::jobpage)
{
    ui->setupUi(this);
    setMaximumSize(1111,652);
    setMinimumSize(1111,652);

}


jobpage::~jobpage()
{
    delete ui;
}
