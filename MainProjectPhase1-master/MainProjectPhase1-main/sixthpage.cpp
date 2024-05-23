#include "sixthpage.h"
#include "ui_sixthpage.h"

sixthpage::sixthpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sixthpage)
{
    ui->setupUi(this);
    setMaximumSize(1111,652);
    setMinimumSize(1111,652);
}

sixthpage::~sixthpage()
{
    delete ui;
}
