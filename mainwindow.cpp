#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "workerinfo.h"
#include <QAction>
#include <QFile>
#include <QStringList>
#include <QFileDialog>
#include <QTextStream>

extern int gRole;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QHeaderView *headerView = ui->display_table->horizontalHeader();
    headerView->setSectionResizeMode(QHeaderView::Stretch);
    ui->display_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->display_table->setSelectionMode(QAbstractItemView::SingleSelection);//行选中
    ui->display_table->setSelectionBehavior(QAbstractItemView::SelectRows); //整行选中的方式
    QStandardItemModel* model = workersManager.getModel();
    ui->display_table->setModel(model);


    addDlg = new AddWorkDlg(this);
    findDlg = new FindDlg(this);
    findDlg->hide();
    removeDlg = new RemoveDlg(this);
    modifyDlg = new ModifyDlg(this);
    connect(findDlg,&FindDlg::Sig_find,this,&MainWindow::findResult);
    connect(findDlg,&FindDlg::Sig_Cancel,this,&MainWindow::displayAllWorker);
    connect(findDlg,&FindDlg::finished,this,&MainWindow::displayAllWorker);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::findResult()
{
    workersManager.findWorker(findDlg->getWorker());
}

void MainWindow::displayAllWorker()
{
    workersManager.updateModel(workersManager.getWorkers());
}

void MainWindow::on_openfile_triggered()
{
    //打开文件夹
    QString fileName = QFileDialog::getOpenFileName(this,tr("打开文件"),"/","*.csv");
    if(fileName.isEmpty()){
        return;
    }
    workersManager.openFile(fileName);

}

void MainWindow::on_savefile_triggered()
{
//    QString fileName = QFileDialog::getSaveFileName(this,);
    QString fileName = QFileDialog::getSaveFileName(this, tr("保存文件"), "/", tr("CSV Files (*.csv);;All Files (*)"));
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
        QString name = workersManager.getModel()->data(i[0]).toString();
        workersManager.removeWorker(name);
    }
    else{
        if(RemoveDlg::Accepted == removeDlg->exec()){
            workersManager.removeWorker(removeDlg->getDeleteName());
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
    }
}
