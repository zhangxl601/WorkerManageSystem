#ifndef WORKERINFO_H
#define WORKERINFO_H

#include <QObject>

struct WorkerData
{

    QString m_name;
    int m_gender;//性别0:F 1:M
    int m_age;
    QString m_birthday;
    QString m_title;//职称
    QString m_Education;
    int m_salary;
    int m_isMarried;//0:N 1:Y
    int m_number;//编号
};

class Worker
{

public:
    explicit Worker();

    Worker(QString name,int age,int sex,QString birth,QString title,QString education,int salary,int marry,int number);


    static Worker parseString(const QString);

    QString getCsvString();


    QString origInfo;
    QStringList infoList;
    WorkerData m_data;

private:

};

#endif // WORKERINFO_H
