#include "removedlg.h"
#include "ui_removedlg.h"

RemoveDlg::RemoveDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveDlg)
{
    ui->setupUi(this);
}

RemoveDlg::~RemoveDlg()
{
    delete ui;
}
