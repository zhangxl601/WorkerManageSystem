#ifndef ADDWORKDLG_H
#define ADDWORKDLG_H

#include <QDialog>
#include "workerinfo.h"
namespace Ui {
class AddWorkDlg;
}

class AddWorkDlg : public QDialog
{
    Q_OBJECT

public:
    explicit AddWorkDlg(QWidget *parent = nullptr);
    ~AddWorkDlg();

    WorkerData getWorkerData();
private slots:
    void on_btnOk_clicked();

    void on_btnCancel_clicked();

private:
    Ui::AddWorkDlg *ui;
    WorkerData m_data;
};

#endif // ADDWORKDLG_H
