/********************************************************************************
** Form generated from reading UI file 'loginform.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *tx_user;
    QLineEdit *tx_password;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnLogin;
    QPushButton *btnCancel;
    QLabel *labTitle;
    QLabel *label;

    void setupUi(QWidget *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName(QString::fromUtf8("LoginForm"));
        LoginForm->resize(512, 370);
        LoginForm->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(LoginForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 30, -1, -1);
        verticalSpacer_2 = new QSpacerItem(20, 44, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(74, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 6, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(74, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(LoginForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(340, 0));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(25);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tx_user = new QLineEdit(frame);
        tx_user->setObjectName(QString::fromUtf8("tx_user"));
        tx_user->setEnabled(true);
        tx_user->setMinimumSize(QSize(280, 40));
        tx_user->setAutoFillBackground(false);

        verticalLayout->addWidget(tx_user);

        tx_password = new QLineEdit(frame);
        tx_password->setObjectName(QString::fromUtf8("tx_password"));
        tx_password->setEnabled(true);
        tx_password->setMinimumSize(QSize(280, 40));
        tx_password->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(tx_password);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnLogin = new QPushButton(frame);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setMinimumSize(QSize(0, 35));
        btnLogin->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"border-radius: 4px;\n"
"border: 1px solid rgb(180, 180, 180);\n"
""));

        horizontalLayout_2->addWidget(btnLogin);

        btnCancel = new QPushButton(frame);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setMinimumSize(QSize(0, 35));
        btnCancel->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(btnCancel);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addWidget(frame);

        horizontalLayout->setStretch(0, 1);

        gridLayout->addLayout(horizontalLayout, 3, 1, 2, 1);

        labTitle = new QLabel(LoginForm);
        labTitle->setObjectName(QString::fromUtf8("labTitle"));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        labTitle->setFont(font);
        labTitle->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labTitle, 1, 1, 1, 1);

        label = new QLabel(LoginForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 7, 1, 1, 2);


        retranslateUi(LoginForm);

        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QWidget *LoginForm)
    {
        LoginForm->setWindowTitle(QCoreApplication::translate("LoginForm", "Form", nullptr));
        tx_user->setText(QCoreApplication::translate("LoginForm", "admin", nullptr));
        tx_user->setPlaceholderText(QCoreApplication::translate("LoginForm", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        tx_password->setText(QCoreApplication::translate("LoginForm", "123456", nullptr));
        tx_password->setPlaceholderText(QCoreApplication::translate("LoginForm", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        btnLogin->setText(QCoreApplication::translate("LoginForm", "\347\231\273\345\275\225", nullptr));
        btnCancel->setText(QCoreApplication::translate("LoginForm", "\345\217\226\346\266\210", nullptr));
        labTitle->setText(QCoreApplication::translate("LoginForm", "\350\201\214\345\267\245\347\256\241\347\220\206\347\263\273\347\273\237\347\231\273\351\231\206\347\225\214\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("LoginForm", "\345\210\235\345\247\213\347\224\250\346\210\267\345\220\215\344\270\272\357\274\232admin     \345\210\235\345\247\213\345\257\206\347\240\201\357\274\232 123456", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H
