#include "addworkdlg.h"
#include "ui_addworkdlg.h"

AddWorkDlg::AddWorkDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddWorkDlg)
{
    ui->setupUi(this);
}

AddWorkDlg::~AddWorkDlg()
{
    delete ui;
}

void AddWorkDlg::on_btnOk_clicked()
{
    // 保存信息


    accept();
}
