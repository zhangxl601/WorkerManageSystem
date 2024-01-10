/********************************************************************************
** Form generated from reading UI file 'removedlg.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEDLG_H
#define UI_REMOVEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_RemoveDlg
{
public:
    QGridLayout *gridLayout;
    QSpinBox *spBoxNumber;
    QPushButton *txDelete;
    QLabel *label;

    void setupUi(QDialog *RemoveDlg)
    {
        if (RemoveDlg->objectName().isEmpty())
            RemoveDlg->setObjectName(QString::fromUtf8("RemoveDlg"));
        RemoveDlg->resize(363, 95);
        gridLayout = new QGridLayout(RemoveDlg);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spBoxNumber = new QSpinBox(RemoveDlg);
        spBoxNumber->setObjectName(QString::fromUtf8("spBoxNumber"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spBoxNumber->sizePolicy().hasHeightForWidth());
        spBoxNumber->setSizePolicy(sizePolicy);
        spBoxNumber->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(spBoxNumber, 2, 1, 1, 1);

        txDelete = new QPushButton(RemoveDlg);
        txDelete->setObjectName(QString::fromUtf8("txDelete"));
        txDelete->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(txDelete, 2, 2, 1, 1);

        label = new QLabel(RemoveDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(50, 0));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label, 1, 1, 1, 1);


        retranslateUi(RemoveDlg);

        QMetaObject::connectSlotsByName(RemoveDlg);
    } // setupUi

    void retranslateUi(QDialog *RemoveDlg)
    {
        RemoveDlg->setWindowTitle(QCoreApplication::translate("RemoveDlg", "Dialog", nullptr));
        txDelete->setText(QCoreApplication::translate("RemoveDlg", "\347\241\256\350\256\244\345\210\240\351\231\244", nullptr));
        label->setText(QCoreApplication::translate("RemoveDlg", "\350\257\267\350\276\223\345\205\245\350\246\201\345\210\240\351\231\244\347\232\204\350\201\214\345\267\245\347\274\226\345\217\267\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveDlg: public Ui_RemoveDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEDLG_H
