/********************************************************************************
** Form generated from reading UI file 'modifydlg.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYDLG_H
#define UI_MODIFYDLG_H

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

class Ui_ModifyDlg
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *txName;
    QLabel *label_2;
    QComboBox *txGender;
    QLabel *label_3;
    QSpinBox *txAge;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *txTitle;
    QLabel *label_6;
    QLineEdit *txEducation;
    QLabel *label_7;
    QSpinBox *txSalary;
    QLabel *label_8;
    QComboBox *txMarried;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnOk;
    QPushButton *btnCancel;
    QDateEdit *txBirth;

    void setupUi(QDialog *ModifyDlg)
    {
        if (ModifyDlg->objectName().isEmpty())
            ModifyDlg->setObjectName(QString::fromUtf8("ModifyDlg"));
        ModifyDlg->resize(424, 428);
        gridLayout = new QGridLayout(ModifyDlg);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ModifyDlg);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        txName = new QLineEdit(ModifyDlg);
        txName->setObjectName(QString::fromUtf8("txName"));
        txName->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(txName, 0, 1, 1, 1);

        label_2 = new QLabel(ModifyDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        txGender = new QComboBox(ModifyDlg);
        txGender->addItem(QString());
        txGender->addItem(QString());
        txGender->setObjectName(QString::fromUtf8("txGender"));
        txGender->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(txGender, 1, 1, 1, 1);

        label_3 = new QLabel(ModifyDlg);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        txAge = new QSpinBox(ModifyDlg);
        txAge->setObjectName(QString::fromUtf8("txAge"));
        txAge->setMinimumSize(QSize(0, 40));
        txAge->setMaximum(150);

        gridLayout->addWidget(txAge, 2, 1, 1, 1);

        label_4 = new QLabel(ModifyDlg);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(ModifyDlg);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        txTitle = new QLineEdit(ModifyDlg);
        txTitle->setObjectName(QString::fromUtf8("txTitle"));
        txTitle->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(txTitle, 4, 1, 1, 1);

        label_6 = new QLabel(ModifyDlg);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        txEducation = new QLineEdit(ModifyDlg);
        txEducation->setObjectName(QString::fromUtf8("txEducation"));
        txEducation->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(txEducation, 5, 1, 1, 1);

        label_7 = new QLabel(ModifyDlg);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        txSalary = new QSpinBox(ModifyDlg);
        txSalary->setObjectName(QString::fromUtf8("txSalary"));
        txSalary->setMinimumSize(QSize(0, 40));
        txSalary->setMaximum(245245245);

        gridLayout->addWidget(txSalary, 6, 1, 1, 1);

        label_8 = new QLabel(ModifyDlg);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        txMarried = new QComboBox(ModifyDlg);
        txMarried->addItem(QString());
        txMarried->addItem(QString());
        txMarried->setObjectName(QString::fromUtf8("txMarried"));
        txMarried->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(txMarried, 7, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnOk = new QPushButton(ModifyDlg);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        btnOk->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(btnOk);

        btnCancel = new QPushButton(ModifyDlg);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(btnCancel);


        gridLayout->addLayout(horizontalLayout, 8, 0, 1, 2);

        txBirth = new QDateEdit(ModifyDlg);
        txBirth->setObjectName(QString::fromUtf8("txBirth"));
        txBirth->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(txBirth, 3, 1, 1, 1);


        retranslateUi(ModifyDlg);

        QMetaObject::connectSlotsByName(ModifyDlg);
    } // setupUi

    void retranslateUi(QDialog *ModifyDlg)
    {
        ModifyDlg->setWindowTitle(QCoreApplication::translate("ModifyDlg", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ModifyDlg", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("ModifyDlg", "\346\200\247\345\210\253", nullptr));
        txGender->setItemText(0, QCoreApplication::translate("ModifyDlg", "\347\224\267", nullptr));
        txGender->setItemText(1, QCoreApplication::translate("ModifyDlg", "\345\245\263", nullptr));

        label_3->setText(QCoreApplication::translate("ModifyDlg", "\345\271\264\351\276\204", nullptr));
        label_4->setText(QCoreApplication::translate("ModifyDlg", "\345\207\272\347\224\237\345\271\264\346\234\210", nullptr));
        label_5->setText(QCoreApplication::translate("ModifyDlg", "\350\201\214\347\247\260", nullptr));
        label_6->setText(QCoreApplication::translate("ModifyDlg", "\346\234\200\345\220\216\345\255\246\345\216\206", nullptr));
        label_7->setText(QCoreApplication::translate("ModifyDlg", "\345\267\245\350\265\204", nullptr));
        label_8->setText(QCoreApplication::translate("ModifyDlg", "\345\251\232\345\247\273\346\203\205\345\206\265", nullptr));
        txMarried->setItemText(0, QCoreApplication::translate("ModifyDlg", "\346\234\252\345\251\232", nullptr));
        txMarried->setItemText(1, QCoreApplication::translate("ModifyDlg", "\345\267\262\345\251\232", nullptr));

        btnOk->setText(QCoreApplication::translate("ModifyDlg", "\347\241\256\345\256\232\344\277\256\346\224\271", nullptr));
        btnCancel->setText(QCoreApplication::translate("ModifyDlg", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifyDlg: public Ui_ModifyDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYDLG_H
