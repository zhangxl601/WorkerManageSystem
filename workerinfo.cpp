#include "workerinfo.h"
#include "QStringList"
Worker::Worker()
{
    mIsValid = true;
}

Worker::Worker(const WorkerData &workerData)
{
    m_data = workerData;
    infoList = parseString(getCsvString())->infoList;
}

Worker::Worker(QString name, int age, int sex, QString birth, QString title, QString education, int salary, int marry,int number)
{
    m_data.m_name =name;
    m_data.m_age = age;
    m_data.m_gender = sex;
    m_data.m_birthday = birth;
    m_data.m_title = title;
    m_data.m_Education = education;
    m_data.m_salary = salary;
    m_data.m_isMarried = marry;
    m_data.m_number = number;
    infoList = parseString(getCsvString())->infoList;
}

void Worker::modifyWorker(const WorkerData &data)
{
    int m_number = m_data.m_number;
    m_data = data;
    m_data.m_number = m_number;
    infoList = parseString(getCsvString())->infoList;
}


Worker* Worker::parseString(const QString str)
{
    QStringList list = str.split(",");

    Worker* person = new Worker();
    if(list.size()<9){
        person->mIsValid = false;
        return person;
    }

    person->m_data.m_name =list[0];
    person->m_data.m_age = list[2].toInt();
    person->m_data.m_gender = list[1].toInt();
    person->m_data.m_birthday = list[3];
    person->m_data.m_title = list[4];
    person->m_data.m_Education = list[5];
    person->m_data.m_salary = list[6].toInt();
    person->m_data.m_isMarried = list[7].toInt();
    person->m_data.m_number = list[8].toInt();
    person->infoList = list;
    return person;
}

QString Worker::getCsvString()
{
    QStringList list;
    list << m_data.m_name;
    list << QString::number(m_data.m_gender);
    list << QString::number(m_data.m_age);
    list << m_data.m_birthday;
    list << m_data.m_title;
    list << m_data.m_Education;
    list << QString::number(m_data.m_salary);
    list << QString::number(m_data.m_isMarried);
    list << QString::number(m_data.m_number);
    return list.join(",");
}
