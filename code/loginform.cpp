#include "loginform.h"
#include "ui_loginform.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
LoginForm::LoginForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginForm)
{
    ui->setupUi(this);
    ui->tx_user->setReadOnly(false);
    ui->tx_password->setReadOnly(false);
}

LoginForm::~LoginForm()
{
    delete ui;
}

void LoginForm::on_btnLogin_clicked()
{
    // 有临时密码
    if(ui->tx_user->text() !="admin" || ui->tx_password->text() != "123456")
    {
        QMessageBox::warning(this,tr("error"),tr("用户名或密码错误!"));
        return;
    }
    emit loginSuccess(0);

//    QFile file(":/user.txt");      //文件操作 读取文件中的用户名

//    bool flag =file.open(QIODevice::ReadWrite | QIODevice::Text);
//    QTextStream out(&file);

//    // 写入新的姓名和数字
//    out << ui->tx_user->text()  << "10min" << Qt::endl;
//    // 根据需要添加更多的内容

//    file.close(); // 处理完成后关闭文件
}

void LoginForm::on_btnCancel_clicked()
{
    close();
}
