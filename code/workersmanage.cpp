﻿#include "workersmanage.h"
#include <QFile>
#include <QTextStream>

static const QStringList horiHeader = QStringList()<< "编号" <<"姓名"<<"性别"<<"年龄"<<"生日"<<"职称"<<"教育背景"<<"工资"<<"婚姻情况";
int gRole = Qt::UserRole+99;
WorkersManage::WorkersManage(QObject *parent) : QObject(parent)
{
    model = new QStandardItemModel(this);
    model->setHorizontalHeaderLabels(horiHeader);

    m_maxNumber = -1;
}

void WorkersManage::addWorker(const WorkerData &data)
{
    WorkerData newData = data;
    newData.m_number = (++m_maxNumber);

    Worker* work = new Worker(newData);
    workers.append(work);

    updateModel(workers);
}

bool WorkersManage::findWorker(FindDlg::Find_Type type,QString name)
{
    switch (type) {
    case FindDlg::E_All_Workers:{
        updateModel(getWorkers());
        return true;
    }
    case FindDlg::E_Name_Find:{//useful
        QList<Worker*> listTmp;
        for (auto i:workers) {
            if(i->m_data.m_name != name){
                continue;
            }else {
                listTmp.append(i);
            }
        }
        if(listTmp.isEmpty()){
            return false;
        }
        updateModel(listTmp);
        return true;
    }
        //以下完成在finddlg
    case FindDlg::E_Birth_Find:{}
        break;
    case FindDlg::E_Married_Find:{}
        break;

    }

}

bool WorkersManage::removeWorker(int number)
{
    bool ret = false;
    QList<Worker*> listTmp;
    for (auto i:workers) {
        if(i->m_data.m_number != number){
            listTmp.append(i);
        }
        else{
            ret = true;
        }
    }

    if(ret){
        workers = listTmp;
        updateModel(workers);
    }

    return ret;
}

void WorkersManage::modifyWorker(const WorkerData &data)
{
    WorkerData workData = data;
    int number = workData.m_number;
    for(auto i:workers)
    {
        if(i->m_data.m_number==number){
            i->modifyWorker(data);
            break;
        }
    }
    updateModel(workers);
}


void WorkersManage::openFile(QString fileName)
{
    //打开文件
    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly)){
        return;
    }
    //打开文件流读取文件
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        Worker* info = Worker::parseString(line);
        if(info->isValid()){
            m_maxNumber = qMax(m_maxNumber, info->m_data.m_number);
            workers << info;
        }
    }
   if(!workers.isEmpty()){
       for (int i=0;i<workers.size();i++) {
           Worker* work = workers[i];
           for (int j=0;j<work->infoList.size();j++) {
               model->setData(model->index(i,j),work->infoList[j]);
           }
       }
   }
   file.close();
   updateModel(workers);
}

void WorkersManage::saveFile(QString fileName)
{
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly|QIODevice::Text)){
        return;
    }
    QTextStream out(&file);
    if(!workers.isEmpty()){
        //表头
        out<<horiHeader.join(",")<<"\n";
        int count = workers.size()-1;
        for (int i = 0; i < count; ++i) {
            Worker* data = workers.at(i);
            out <<data->getCsvString();
            // 在每行结束时添加换行符
            out << "\n";
        }
    }
    file.close();
}

QStandardItemModel *WorkersManage::getModel()
{
    return  model;
}

QList<Worker*> WorkersManage::getWorkers()
{
    return  workers;
}

void WorkersManage::updateModel(QList<Worker*> _workers)
{
    model->removeRows(0, model->rowCount());
    model->setRowCount(_workers.size());
    for (int i=0;i<_workers.size();i++) {
        Worker* work = _workers[i];
        model->setData(model->index(i,0), (long long)(work), gRole);
        for (int j=0;j<work->infoList.size();j++) {
            switch (j) {
            case 2:{ work->infoList[j].toInt() ==0?model->setData(model->index(i,j),tr("男")):model->setData(model->index(i,j),tr("女"), Qt::DisplayRole);}break;
            case 8:{ work->infoList[j].toInt() ==0?model->setData(model->index(i,j),tr("未婚")):model->setData(model->index(i,j),tr("已婚"), Qt::DisplayRole);}break;
            default: model->setData(model->index(i,j),work->infoList[j], Qt::DisplayRole);break;
            }
        }
    }

}

