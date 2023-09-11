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


private slots:
    void on_btnOk_clicked();

private:
    Ui::AddWorkDlg *ui;
};

#endif // ADDWORKDLG_H
