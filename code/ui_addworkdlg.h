/********************************************************************************
** Form generated from reading UI file 'addworkdlg.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWORKDLG_H
#define UI_ADDWORKDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddWorkDlg
{
public:
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnOk;
    QPushButton *btnCancel;
    QLabel *label_8;
    QLabel *label_3;
    QLineEdit *txEducation;
    QLabel *label;
    QLineEdit *txName;
    QLineEdit *txTitle;
    QComboBox *txGender;
    QComboBox *txMarried;
    QDateEdit *txBirth;
    QSpinBox *txAge;
    QSpinBox *txSalary;

    void setupUi(QDialog *AddWorkDlg)
    {
        if (AddWorkDlg->objectName().isEmpty())
            AddWorkDlg->setObjectName(QString::fromUtf8("AddWorkDlg"));
        AddWorkDlg->resize(384, 450);
        gridLayout = new QGridLayout(AddWorkDlg);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(20, 20, 20, 20);
        label_7 = new QLabel(AddWorkDlg);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        label_4 = new QLabel(AddWorkDlg);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_5 = new QLabel(AddWorkDlg);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        label_6 = new QLabel(AddWorkDlg);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        label_2 = new QLabel(AddWorkDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnOk = new QPushButton(AddWorkDlg);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        btnOk->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(btnOk);

        btnCancel = new QPushButton(AddWorkDlg);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(btnCancel);


        gridLayout->addLayout(horizontalLayout, 9, 0, 1, 3);

        label_8 = new QLabel(AddWorkDlg);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        label_3 = new QLabel(AddWorkDlg);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        txEducation = new QLineEdit(AddWorkDlg);
        txEducation->setObjectName(QString::fromUtf8("txEducation"));
        txEducation->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(txEducation, 5, 2, 1, 1);

        label = new QLabel(AddWorkDlg);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        txName = new QLineEdit(AddWorkDlg);
        txName->setObjectName(QString::fromUtf8("txName"));
        txName->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(txName, 0, 2, 1, 1);

        txTitle = new QLineEdit(AddWorkDlg);
        txTitle->setObjectName(QString::fromUtf8("txTitle"));
        txTitle->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(txTitle, 4, 2, 1, 1);

        txGender = new QComboBox(AddWorkDlg);
        txGender->addItem(QString());
        txGender->addItem(QString());
        txGender->setObjectName(QString::fromUtf8("txGender"));
        txGender->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(txGender, 1, 2, 1, 1);

        txMarried = new QComboBox(AddWorkDlg);
        txMarried->addItem(QString());
        txMarried->addItem(QString());
        txMarried->setObjectName(QString::fromUtf8("txMarried"));
        txMarried->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(txMarried, 7, 2, 1, 1);

        txBirth = new QDateEdit(AddWorkDlg);
        txBirth->setObjectName(QString::fromUtf8("txBirth"));
        txBirth->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(txBirth, 3, 2, 1, 1);

        txAge = new QSpinBox(AddWorkDlg);
        txAge->setObjectName(QString::fromUtf8("txAge"));
        txAge->setMinimumSize(QSize(0, 40));
        txAge->setMaximum(150);
        txAge->setValue(18);

        gridLayout->addWidget(txAge, 2, 2, 1, 1);

        txSalary = new QSpinBox(AddWorkDlg);
        txSalary->setObjectName(QString::fromUtf8("txSalary"));
        txSalary->setMinimumSize(QSize(0, 40));
        txSalary->setMaximum(1999999999);
        txSalary->setValue(5000);

        gridLayout->addWidget(txSalary, 6, 2, 1, 1);


        retranslateUi(AddWorkDlg);

        QMetaObject::connectSlotsByName(AddWorkDlg);
    } // setupUi

    void retranslateUi(QDialog *AddWorkDlg)
    {
        AddWorkDlg->setWindowTitle(QCoreApplication::translate("AddWorkDlg", "Dialog", nullptr));
        label_7->setText(QCoreApplication::translate("AddWorkDlg", "\345\251\232\345\247\273\346\203\205\345\206\265", nullptr));
        label_4->setText(QCoreApplication::translate("AddWorkDlg", "\350\201\214\347\247\260", nullptr));
        label_5->setText(QCoreApplication::translate("AddWorkDlg", "\346\234\200\345\220\216\345\255\246\345\216\206", nullptr));
        label_6->setText(QCoreApplication::translate("AddWorkDlg", "\345\267\245\350\265\204", nullptr));
        label_2->setText(QCoreApplication::translate("AddWorkDlg", "\346\200\247\345\210\253", nullptr));
        btnOk->setText(QCoreApplication::translate("AddWorkDlg", "\347\241\256\345\256\232", nullptr));
        btnCancel->setText(QCoreApplication::translate("AddWorkDlg", "\345\217\226\346\266\210", nullptr));
        label_8->setText(QCoreApplication::translate("AddWorkDlg", "\345\271\264\351\276\204", nullptr));
        label_3->setText(QCoreApplication::translate("AddWorkDlg", "\345\207\272\347\224\237\345\271\264\346\234\210", nullptr));
        txEducation->setText(QCoreApplication::translate("AddWorkDlg", "\346\234\254\347\247\221", nullptr));
        label->setText(QCoreApplication::translate("AddWorkDlg", "\345\247\223\345\220\215", nullptr));
        txName->setText(QCoreApplication::translate("AddWorkDlg", "\345\274\240\344\270\211", nullptr));
        txTitle->setText(QCoreApplication::translate("AddWorkDlg", "\346\227\240", nullptr));
        txGender->setItemText(0, QCoreApplication::translate("AddWorkDlg", "\347\224\267", nullptr));
        txGender->setItemText(1, QCoreApplication::translate("AddWorkDlg", "\345\245\263", nullptr));

        txMarried->setItemText(0, QCoreApplication::translate("AddWorkDlg", "\346\234\252\345\251\232", nullptr));
        txMarried->setItemText(1, QCoreApplication::translate("AddWorkDlg", "\345\267\262\345\251\232", nullptr));

    } // retranslateUi

};

namespace Ui {
    class AddWorkDlg: public Ui_AddWorkDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWORKDLG_H
