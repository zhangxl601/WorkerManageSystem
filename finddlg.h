#ifndef FINDDLG_H
#define FINDDLG_H

#include <QDialog>

namespace Ui {
class FindDlg;
}

class FindDlg : public QDialog
{
    Q_OBJECT

public:
    explicit FindDlg(QWidget *parent = nullptr);
    ~FindDlg();

    QString getWorker();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


private:
    Ui::FindDlg *ui;
    QString workerName;
signals:
    void Sig_find();
    void Sig_Cancel();
};

#endif // FINDDLG_H
