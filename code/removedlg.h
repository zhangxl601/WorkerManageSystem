#ifndef REMOVEDLG_H
#define REMOVEDLG_H

#include <QDialog>

namespace Ui {
class RemoveDlg;
}

class WorkersManage;
class RemoveDlg : public QDialog
{
    Q_OBJECT

public:
    explicit RemoveDlg(QWidget *parent = nullptr);
    ~RemoveDlg();

    // 获取职工编号
    int getDeleteNumber();

    void setManage(WorkersManage *value);

private slots:
    void on_txDelete_clicked();

private:
    Ui::RemoveDlg *ui;
    int deleteNumber;

    WorkersManage *manage;
};

#endif // REMOVEDLG_H
