#ifndef WORKERSMANAGE_H
#define WORKERSMANAGE_H

#include <QObject>
#include "workerinfo.h"
#include <QList>
#include <QStandardItemModel>
#include "finddlg.h"
class WorkersManage : public QObject
{
    Q_OBJECT
public:
    explicit WorkersManage(QObject *parent = nullptr);

    void addWorker(const WorkerData &data);
    bool findWorker(FindDlg::Find_Type type,QString name);
    bool removeWorker(int number);
    void modifyWorker(const WorkerData &data);

    void openFile(QString fileName);
    void saveFile(QString fileName);

    QStandardItemModel* getModel();
    QList<Worker*> getWorkers();

    void updateModel(QList<Worker*> _workers);
signals:

public slots:

private:

    QList<Worker*> workers;
    QStandardItemModel* model;
//    QStringList horiHeader;
    int m_maxNumber;
};

#endif // WORKERSMANAGE_H
