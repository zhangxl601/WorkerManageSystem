#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "workerinfo.h"
#include <QAction>
#include <QFile>
#include <QStringList>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QStandardPaths>
#include "finddlg.h"
extern int gRole;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("职工管理系统"));

    QHeaderView *headerView = ui->display_table->horizontalHeader();
    headerView->setSectionResizeMode(QHeaderView::Stretch);
    ui->display_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->display_table->setSelectionMode(QAbstractItemView::SingleSelection);//行选中
    ui->display_table->setSelectionBehavior(QAbstractItemView::SelectRows); //整行选中的方式
    ui->display_table->verticalHeader()->setVisible(false);
    QStandardItemModel* model = workersManager.getModel();
    ui->display_table->setModel(model);


    addDlg = new AddWorkDlg(this);
    findDlg = new FindDlg(this);
    findDlg->hide();
    removeDlg = new RemoveDlg(this);
    removeDlg->setManage(&workersManager);
    findDlg->setManage(&workersManager);
    modifyDlg = new ModifyDlg(this);
    connect(findDlg,&FindDlg::Sig_find,this,&MainWindow::findResult);


    Worker work;
    QList<WorkerData > list = work.getInitData();
    for(auto i:list){
        workersManager.addWorker(i);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::findResult()
{
    if(!workersManager.findWorker(FindDlg::E_Name_Find,findDlg->getWorker())){
        QMessageBox::about(this,tr("提示"),tr("未查询到该职工!请核实姓名"));
    }
}

void MainWindow::on_openfile_triggered()
{
    //打开文件夹
    QString fileName = QFileDialog::getOpenFileName(this,tr("打开文件"),QStandardPaths::writableLocation(QStandardPaths::DesktopLocation) + "/职工信息.csv",tr("CSV Files (*.csv)"));
    if(fileName.isEmpty()){
        return;
    }
    workersManager.openFile(fileName);

}

void MainWindow::on_savefile_triggered()
{
//    QString fileName = QFileDialog::getSaveFileName(this,);
    QString fileName = QFileDialog::getSaveFileName(this, tr("保存文件"),  QStandardPaths::writableLocation(QStandardPaths::DesktopLocation) + "/职工信息.csv", tr("CSV Files (*.csv);All Files (*)"));
    if(fileName.isEmpty()){
        return;
    }
    workersManager.saveFile(fileName);
}

void MainWindow::on_add_triggered()
{
    if(AddWorkDlg::Accepted == addDlg->exec()){
        workersManager.addWorker(addDlg->getWorkerData());
    }
}


void MainWindow::on_qurey_triggered()
{
//    if(FindDlg::Accepted == findDlg->exec()){
//        workersManager.findWorker(findDlg->getWorker());
//    }
    findDlg->show();
}

void MainWindow::on_remove_triggered()
{
    auto i = ui->display_table->selectionModel()->selectedRows();
    if(!i.isEmpty()){
        int number = workersManager.getModel()->data(i[0]).toInt();

        bool ret = workersManager.removeWorker(number);
        if(!ret){
            QMessageBox::information(this, "提示", "未找到该编号对应的职工!");
        }
        else{
            QMessageBox::information(this, "提示", "删除成功!");
        }
    }
    else{
        if(RemoveDlg::Accepted == removeDlg->exec()){
//            workersManager.removeWorker(removeDlg->getDeleteNumber());
        }
    }
}

void MainWindow::on_modify_triggered()
{
    auto i = ui->display_table->selectionModel()->selectedRows();
    if(!i.isEmpty()){
        auto model = workersManager.getModel();
        QVariant data = model->data(i[0], gRole);
        Worker* work = reinterpret_cast<Worker*>(data.toLongLong());//data.toLongLong();
        modifyDlg->setWorkerInfo(work->m_data);
        if(ModifyDlg::Accepted == modifyDlg->exec()){
            workersManager.modifyWorker(modifyDlg->getWorker());
        }
    }else {
        QMessageBox::about(this,tr("提示"),tr("请选择要修改的职工!"));
    }
}
