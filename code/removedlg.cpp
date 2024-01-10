#include "removedlg.h"
#include "ui_removedlg.h"

#include "workersmanage.h"
#include <QMessageBox>

RemoveDlg::RemoveDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveDlg)
{
    ui->setupUi(this);
    setWindowTitle(tr("删除职工"));
}

RemoveDlg::~RemoveDlg()
{
    delete ui;
}

int RemoveDlg::getDeleteNumber()
{
    return deleteNumber;
}

void RemoveDlg::on_txDelete_clicked()
{
    int number = ui->spBoxNumber->value();

    deleteNumber = number;

    if(manage){
        bool ret = manage->removeWorker(number);
        if(!ret){
            QMessageBox::information(this, "提示", "未找到该编号对应的职工!");
        }
        else{
            QMessageBox::information(this, "提示", "删除成功!");
            accept();
        }
    }


}

void RemoveDlg::setManage(WorkersManage *value)
{
    manage = value;
}
