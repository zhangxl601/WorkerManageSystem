#ifndef MODIFYDLG_H
#define MODIFYDLG_H

#include <QDialog>
#include "workerinfo.h"
namespace Ui {
class ModifyDlg;
}

class ModifyDlg : public QDialog
{
    Q_OBJECT

public:
    explicit ModifyDlg(QWidget *parent = nullptr);
    ~ModifyDlg();

    WorkerData getWorker();

    void setWorkerInfo(const WorkerData& _work);
private slots:
    void on_btnOk_clicked();

    void on_btnCancel_clicked();

private:
    Ui::ModifyDlg *ui;
    QString  m_name;
    WorkerData worker;
};

#endif // MODIFYDLG_H
