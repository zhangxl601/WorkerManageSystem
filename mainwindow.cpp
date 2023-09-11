#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "workerinfo.h"
#include <QAction>
#include <QFile>
#include <QStringList>
#include <QFileDialog>
#include <QTextStream>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QStandardItemModel(this);
    QStringList horiHeader = QStringList()<<"姓名"<<"年龄"<<"性别"<<"生日"<<"职称"<<"教育背景"<<"工资"<<"婚姻情况";
    model->setHorizontalHeaderLabels(horiHeader);

    ui->display_table->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_openfile_triggered()
{
    //打开文件夹
    QString fileName = QFileDialog::getOpenFileName(this,QString(),"/","*.csv");
    if(fileName.isEmpty()){
        return;
    }
    //打开文件
    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly)){
        return;
    }
    //打开文件流读取文件
    QTextStream in(&file);
    QList<WorkerInfo> workers;
    while (!in.atEnd()) {
        QString line = in.readLine();
        WorkerInfo info = WorkerInfo::parseString(line);
        workers << info;
    }

   if(!workers.isEmpty()){
       for (int i=0;i<workers.size();i++) {
           WorkerInfo work = workers[i];
           for (int j=0;j<work.infoList.size();j++) {
               model->setData(model->index(i,j),work.infoList[j]);
           }
       }
   }
   file.close();
}

void MainWindow::on_savefile_triggered()
{

}
