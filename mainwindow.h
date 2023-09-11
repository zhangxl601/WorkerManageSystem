#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
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

private:
    Ui::MainWindow *ui;
    QStandardItemModel* model;
};

#endif // MAINWINDOW_H
