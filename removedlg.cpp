#include "removedlg.h"
#include "ui_removedlg.h"

RemoveDlg::RemoveDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveDlg)
{
    ui->setupUi(this);
    setWindowTitle(tr("查询个人信息"));
}

RemoveDlg::~RemoveDlg()
{
    delete ui;
}

QString RemoveDlg::getDeleteName()
{
    return deleteName;
}

void RemoveDlg::on_txDelete_clicked()
{
    if(ui->txName->text()!=""){
        deleteName = ui->txName->text();
        accept();
    }else {
        reject();
    }

}
