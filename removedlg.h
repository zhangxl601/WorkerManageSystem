#ifndef REMOVEDLG_H
#define REMOVEDLG_H

#include <QDialog>

namespace Ui {
class RemoveDlg;
}

class RemoveDlg : public QDialog
{
    Q_OBJECT

public:
    explicit RemoveDlg(QWidget *parent = nullptr);
    ~RemoveDlg();
    QString getDeleteName();

private slots:
    void on_txDelete_clicked();

private:
    Ui::RemoveDlg *ui;
    QString deleteName;
};

#endif // REMOVEDLG_H
