#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include "workersmanage.h"
#include "addworkdlg.h"
class WorkerInfo;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_openfile_triggered();

    void on_savefile_triggered();

    void on_add_triggered();

private:
    Ui::MainWindow *ui;
    WorkersManage workersManager;

    AddWorkDlg *addDlg;
};

#endif // MAINWINDOW_H
