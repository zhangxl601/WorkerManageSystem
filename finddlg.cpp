#include "finddlg.h"
#include "ui_finddlg.h"
#include <QMessageBox>
#include "workersmanage.h"
FindDlg::FindDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindDlg)
{
    ui->setupUi(this);
    setWindowTitle(tr("查询职工信息"));

}

FindDlg::~FindDlg()
{
    delete ui;
}

void FindDlg::setFindType(FindDlg::Find_Type type)
{
    m_findType = type;
}

FindDlg::Find_Type FindDlg::getFindType()
{
    return m_findType;
}

void FindDlg::setManage(WorkersManage *value)
{
    manage = value;
}

void FindDlg::findAllWorkers()
{
    manage->updateModel(manage->getWorkers());
}

void FindDlg::findNameWorker()
{
    if(ui->txName->text()!=""){
        workerName = ui->txName->text();
        emit Sig_find();
    }else {
        QMessageBox::about(this,tr("提示"),tr("姓名不能为空"));
    }
}

void FindDlg::findBirthWorker()
{
    QList<Worker*> birthBeforeList;
    QList<Worker*> birthAfterList;
    int birthType = ui->birthComb->currentIndex();
    //0:日期之前 1:日期之后
    QList<Worker*> mList = manage->getWorkers();
    QString dataStr = ui->birthText->text();
    QStringList dataList = dataStr.split("/");
    if(dataList.isEmpty()){
        return;
    }
    QDate dataInput = QDate(dataList[0].toInt(),dataList[1].toInt(),dataList[2].toInt());

    for(auto i:mList){
        QString dataStr = i->m_data.m_birthday;
        QStringList dataList = dataStr.split("/");
        if(dataList.isEmpty()){
            return;
        }
        QDate data = QDate(dataList[0].toInt(),dataList[1].toInt(),dataList[2].toInt());
        if(dataInput>=data){
            birthBeforeList.append(i);
        }else {
            birthAfterList.append(i);
        }
    }

    if(birthType == 0){
        //小于日期出生
        manage->updateModel(birthBeforeList);
    }else {
        //大于日期出生
        manage->updateModel(birthAfterList);
    }
}

void FindDlg::findMarriedWorker()
{
    int marriedType = ui->marriedComb->currentIndex();
    QList<Worker*> marriedList;
    QList<Worker*> unMarriedList;
    QList<Worker*> mList = manage->getWorkers();
    for(auto i:mList){
        int isMarried = i->m_data.m_isMarried;
        if(isMarried == 0){
            unMarriedList.append(i);
        }else {
            marriedList.append(i);
        }
    }
    if(marriedType == 0){
        //未婚
        manage->updateModel(unMarriedList);
    }else {
        //已婚
        manage->updateModel(marriedList);
    }
}

void FindDlg::on_pushButton_clicked()
{
    switch (m_findType) {
    case FindDlg::E_All_Workers:findAllWorkers();
        break;
    case FindDlg::E_Name_Find:findNameWorker();
        break;
    case FindDlg::E_Birth_Find:findBirthWorker();
        break;
    case FindDlg::E_Married_Find:findMarriedWorker();
        break;
    }

}

void FindDlg::on_pushButton_2_clicked()
{
    manage->updateModel(manage->getWorkers());
}

QString FindDlg::getWorker()
{
    return workerName;
}

void FindDlg::adjustPage(int pageIndex)
{
    ui->stackedWidget->removeWidget(ui->allWorkPage);
    ui->stackedWidget->removeWidget(ui->namePage);
    ui->stackedWidget->removeWidget(ui->birthPage);
    ui->stackedWidget->removeWidget(ui->marriedPage);
    switch (pageIndex) {
    case 0:ui->stackedWidget->addWidget(ui->allWorkPage);break;
    case 1:ui->stackedWidget->addWidget(ui->namePage);break;
    case 2:ui->stackedWidget->addWidget(ui->birthPage);break;
    case 3:ui->stackedWidget->addWidget(ui->marriedPage);break;
    }
    ui->stackedWidget->setCurrentIndex(0);
//    resize(0,0);
}

void FindDlg::on_comboBox_currentIndexChanged(int index)
{
    setFindType(Find_Type(index));
    adjustPage(index);
}
