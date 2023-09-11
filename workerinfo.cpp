#include "workerinfo.h"
#include "QStringList"
Worker::Worker()
{

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
}


Worker Worker::parseString(const QString str)
{
    QStringList list = str.split(",");

    Worker person;
    person.m_data.m_name =list[0];
    person.m_data.m_age = list[1].toInt();
    person.m_data.m_gender = list[2].toInt();
    person.m_data.m_birthday = list[3];
    person.m_data.m_title = list[4];
    person.m_data.m_Education = list[5];
    person.m_data.m_salary = list[6].toInt();
    person.m_data.m_isMarried = list[7].toInt();
    person.m_data.m_number = list[8].toInt();
    person.infoList = list;
    return person;
}

QString Worker::getCsvString()
{
    QStringList list;
    list << m_data.m_name;
    list << QString(m_data.m_age);
    list << QString(m_data.m_gender);
    list << m_data.m_birthday;
    list << m_data.m_title;
    list << m_data.m_Education;
    list << QString(m_data.m_salary);
    list << QString(m_data.m_isMarried);
    list << QString(m_data.m_number);
    return list.join(",");
}
