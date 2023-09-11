#ifndef WORKERINFO_H
#define WORKERINFO_H

#include <QObject>

class WorkerInfo
{

public:
    explicit WorkerInfo();

    WorkerInfo(QString name,quint16 age,int sex,QString birth,QString title,QString education,quint16 salary,int marry);


    static WorkerInfo parseString(const QString);

    QString getCsvString();

    QString m_name;
    int m_gender;//性别0:F 1:M
    int m_age;
    QString m_birthday;
    QString m_title;//职称
    QString m_Education;
    int m_salary;
    int m_isMarried;//0:N 1:Y

    QStringList infoList;

private:

};

#endif // WORKERINFO_H
