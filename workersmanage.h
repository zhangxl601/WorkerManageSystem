#ifndef WORKERSMANAGE_H
#define WORKERSMANAGE_H

#include <QObject>
#include "workerinfo.h"
#include <QList>
#include <QStandardItemModel>
class WorkersManage : public QObject
{
    Q_OBJECT
public:
    explicit WorkersManage(QObject *parent = nullptr);

    void addWorker(Worker worker);
    void findWorker();
    void removeWorker();
    void modifyWorker();

    void openFile(QString fileName);
    void saveFile(QString fileName);

    QStandardItemModel* getModel();
signals:

public slots:

private:
    QList<Worker> workers;
    QStandardItemModel* model;
//    QStringList horiHeader;
};

#endif // WORKERSMANAGE_H
