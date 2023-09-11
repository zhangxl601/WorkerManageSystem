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

    QStandardItemModel* model = workersManager.getModel();
    ui->display_table->setModel(model);

    addDlg = new AddWorkDlg(this);
}

MainWindow::~MainWindow()
{
    delete ui;
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
//        workersManager.addWorker();
    }
}
