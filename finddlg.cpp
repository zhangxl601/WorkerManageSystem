#include "finddlg.h"
#include "ui_finddlg.h"

FindDlg::FindDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindDlg)
{
    ui->setupUi(this);
    setWindowTitle(tr("查询个人信息"));
}

FindDlg::~FindDlg()
{
    delete ui;
}

void FindDlg::on_pushButton_clicked()
{
    if(ui->txName->text()!=""){
        workerName = ui->txName->text();
        emit Sig_find();
    }
}

void FindDlg::on_pushButton_2_clicked()
{
    emit Sig_Cancel();
}

QString FindDlg::getWorker()
{
    return workerName;
}
