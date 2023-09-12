#include "modifydlg.h"
#include "ui_modifydlg.h"
#include <QDate>
ModifyDlg::ModifyDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifyDlg)
{
    ui->setupUi(this);
    ui->txName->setEnabled(false);
}

ModifyDlg::~ModifyDlg()
{
    delete ui;
}

WorkerData ModifyDlg::getWorker()
{
    return worker;
}


void ModifyDlg::setWorkerInfo(const WorkerData& _work)
{
    worker = _work;
    ui->txName->setText(worker.m_name);
    ui->txAge->setValue(worker.m_age);
    ui->txGender->setCurrentIndex(worker.m_gender);
    QString dataStr = worker.m_birthday;
    QStringList dataList = dataStr.split("/");
    if(dataList.isEmpty()){
        return;
    }
    QDate data = QDate(dataList[0].toInt(),dataList[1].toInt(),dataList[2].toInt());
    ui->txBirth->setDate(data);
    ui->txTitle->setText(worker.m_title);
    ui->txEducation->setText(worker.m_Education);
    ui->txSalary->setValue(worker.m_salary);
    ui->txMarried->setCurrentIndex(worker.m_isMarried);
}


void ModifyDlg::on_btnOk_clicked()
{
   worker.m_gender = ui->txGender->currentIndex();
   worker.m_age = ui->txAge->value();
   worker.m_birthday = ui->txBirth->text();
   worker.m_title = ui->txTitle->text();
   worker.m_Education = ui->txEducation->text();
   worker.m_salary = ui->txSalary->value();
   worker.m_isMarried = ui->txMarried->currentIndex();

   accept();
}

void ModifyDlg::on_btnCancel_clicked()
{

    reject();
}
