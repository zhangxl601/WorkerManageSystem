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

private:
    Ui::RemoveDlg *ui;
};

#endif // REMOVEDLG_H
