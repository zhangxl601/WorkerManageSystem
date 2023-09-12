#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include "workersmanage.h"
#include "addworkdlg.h"
#include "finddlg.h"
#include "removedlg.h"
#include "modifydlg.h"
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

    void findResult();
    void displayAllWorker();
private slots:
    void on_openfile_triggered();

    void on_savefile_triggered();

    void on_add_triggered();

    void on_qurey_triggered();

    void on_remove_triggered();

    void on_modify_triggered();

private:
    Ui::MainWindow *ui;
    WorkersManage workersManager;

    AddWorkDlg *addDlg;
    FindDlg *findDlg;
    RemoveDlg* removeDlg;
    ModifyDlg* modifyDlg;
};

#endif // MAINWINDOW_H
