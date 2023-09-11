#include "workersmanage.h"
#include <QTextStream>
static const QStringList horiHeader = QStringList()<<"姓名"<<"年龄"<<"性别"<<"生日"<<"职称"<<"教育背景"<<"工资"<<"婚姻情况";
WorkersManage::WorkersManage(QObject *parent) : QObject(parent)
{
    model = new QStandardItemModel(this);
    model->setHorizontalHeaderLabels(horiHeader);
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
        Worker info = Worker::parseString(line);
        workers << info;
    }
   if(!workers.isEmpty()){
       for (int i=0;i<workers.size();i++) {
           Worker work = workers[i];
           for (int j=0;j<work.infoList.size();j++) {
               model->setData(model->index(i,j),work.infoList[j]);
           }
       }
   }
   file.close();
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
        int count = workers.size();
        for (int i = 0; i < count; ++i) {
            Worker data = workers.at(i);
            out <<data.getCsvString();
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

