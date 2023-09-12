#include "addworkdlg.h"
#include "ui_addworkdlg.h"

AddWorkDlg::AddWorkDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddWorkDlg)
{
    ui->setupUi(this);
    setWindowTitle(tr("添加职工"));
}

AddWorkDlg::~AddWorkDlg()
{
    delete ui;
}

WorkerData AddWorkDlg::getWorkerData()
{
    return  m_data;
}

void AddWorkDlg::on_btnOk_clicked()
{
    // 保存信息
    m_data.m_name = ui->txName->text();
    m_data.m_gender = ui->txGender->currentIndex();
    m_data.m_age = ui->txAge->value();
    m_data.m_birthday = ui->txBirth->text();
    m_data.m_title = ui->txTitle->text();
    m_data.m_Education = ui->txEducation->text();
    m_data.m_salary = ui->txSalary->value();
    m_data.m_isMarried = ui->txMarried->currentIndex();

    accept();
}

void AddWorkDlg::on_btnCancel_clicked()
{
    reject();
}
