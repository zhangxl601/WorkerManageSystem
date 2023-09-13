#ifndef FINDDLG_H
#define FINDDLG_H

#include <QDialog>

namespace Ui {
class FindDlg;
}

class WorkersManage;
class FindDlg : public QDialog
{
    Q_OBJECT
public:
    enum Find_Type{
        E_All_Workers = 0,
        E_Name_Find,
        E_Birth_Find,
        E_Married_Find
    };
    Q_ENUM(Find_Type)
public:
    explicit FindDlg(QWidget *parent = nullptr);
    ~FindDlg();

    void adjustPage(int pageIndex);

    void setFindType(Find_Type type);
    Find_Type getFindType();

    void setManage(WorkersManage *value);

    void findAllWorkers();

    void findNameWorker();

    void findBirthWorker();

    void findMarriedWorker();

    QString getWorker();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::FindDlg *ui;
    QString workerName;
    Find_Type m_findType = E_All_Workers;

    WorkersManage *manage;
signals:
    void Sig_find();
};

#endif // FINDDLG_H
