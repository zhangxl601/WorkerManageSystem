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

    person->m_data.m_number = list[0].toInt();
    person->m_data.m_name =list[1];
    person->m_data.m_gender = list[2].toInt();
    person->m_data.m_age = list[3].toInt();
    person->m_data.m_birthday = list[4];
    person->m_data.m_title = list[5];
    person->m_data.m_Education = list[6];
    person->m_data.m_salary = list[7].toInt();
    person->m_data.m_isMarried = list[8].toInt();

    person->infoList = list;
    return person;
}

QString Worker::getCsvString()
{
    QStringList list;
    list << QString::number(m_data.m_number);
    list << m_data.m_name;
    list << QString::number(m_data.m_gender);
    list << QString::number(m_data.m_age);
    list << m_data.m_birthday;
    list << m_data.m_title;
    list << m_data.m_Education;
    list << QString::number(m_data.m_salary);
    list << QString::number(m_data.m_isMarried);

    return list.join(",");
}

QList<WorkerData > Worker::getInitData()
{
    WorkerData initData;
    initData.m_name = QString("孙一");
    initData.m_gender = 0;
    initData.m_age = 18;
    initData.m_birthday = QString("1999/9/1");
    initData.m_title = QString("职工");
    initData.m_Education = QString("本科");
    initData.m_salary = 6888;
    initData.m_isMarried = 0;
    initDataList.append(initData);

    initData.m_name = QString("李二");
    initDataList.append(initData);
    initData.m_name = QString("张三");
    initDataList.append(initData);
    initData.m_name = QString("赵四");
    initDataList.append(initData);
    initData.m_name = QString("王五");
    initDataList.append(initData);

    return initDataList;
}
