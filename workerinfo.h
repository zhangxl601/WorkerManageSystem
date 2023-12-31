#ifndef WORKERINFO_H
#define WORKERINFO_H

#include <QObject>

struct WorkerData
{
    int m_number;//编号
    QString m_name;
    int m_gender;//性别0:F 1:M
    int m_age;
    QString m_birthday;
    QString m_title;//职称
    QString m_Education;
    int m_salary;
    int m_isMarried;//0:N 1:Y

};

class Worker
{

public:
    explicit Worker();

    Worker(const WorkerData& workerData);
    Worker(QString name,int age,int sex,QString birth,QString title,QString education,int salary,int marry,int number);

    void modifyWorker(const WorkerData& data);

    static Worker* parseString(const QString);

    QString getCsvString();

    bool isValid(){return mIsValid;}

    QList<WorkerData> getInitData();

    QString origInfo;
    QStringList infoList;
    WorkerData m_data;

    QList<WorkerData> initDataList;
    bool mIsValid;

private:


};

#endif // WORKERINFO_H
