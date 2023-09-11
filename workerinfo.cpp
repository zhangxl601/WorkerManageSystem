#include "workerinfo.h"
#include "QStringList"
WorkerInfo::WorkerInfo()
{

}

WorkerInfo::WorkerInfo(QString name, quint16 age, int sex, QString birth, QString title, QString education, quint16 salary, int marry):
    m_name(name),m_age(age),m_gender(sex),m_birthday(birth),m_title(title),m_Education(education),m_salary(salary),m_isMarried(marry)
{

}

WorkerInfo WorkerInfo::parseString(const QString str)
{
    QStringList list = str.split(",");

    WorkerInfo person;
    person.m_name =list[0];
    person.m_age = list[1].toInt();
    person.m_gender = list[2].toInt();
    person.m_birthday = list[3];
    person.m_title = list[4];
    person.m_Education = list[5];
    person.m_salary = list[6].toInt();
    person.m_isMarried = list[7].toInt();
    person.infoList = list;
    return person;
}

QString WorkerInfo::getCsvString()
{

}
