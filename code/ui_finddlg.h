/********************************************************************************
** Form generated from reading UI file 'finddlg.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDDLG_H
#define UI_FINDDLG_H

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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindDlg
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *allWorkPage;
    QWidget *namePage;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *txName;
    QWidget *birthPage;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QComboBox *birthComb;
    QLabel *label_3;
    QDateEdit *birthText;
    QWidget *marriedPage;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QComboBox *marriedComb;
    QPushButton *pushButton_2;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *pushButton;

    void setupUi(QDialog *FindDlg)
    {
        if (FindDlg->objectName().isEmpty())
            FindDlg->setObjectName(QString::fromUtf8("FindDlg"));
        FindDlg->resize(372, 172);
        gridLayout = new QGridLayout(FindDlg);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(FindDlg);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        allWorkPage = new QWidget();
        allWorkPage->setObjectName(QString::fromUtf8("allWorkPage"));
        stackedWidget->addWidget(allWorkPage);
        namePage = new QWidget();
        namePage->setObjectName(QString::fromUtf8("namePage"));
        gridLayout_3 = new QGridLayout(namePage);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(namePage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setMaximumSize(QSize(183, 16777215));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        txName = new QLineEdit(namePage);
        txName->setObjectName(QString::fromUtf8("txName"));
        txName->setMinimumSize(QSize(0, 40));
        txName->setMaximumSize(QSize(160, 16777215));

        horizontalLayout->addWidget(txName);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        stackedWidget->addWidget(namePage);
        birthPage = new QWidget();
        birthPage->setObjectName(QString::fromUtf8("birthPage"));
        gridLayout_5 = new QGridLayout(birthPage);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(birthPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        birthComb = new QComboBox(birthPage);
        birthComb->addItem(QString());
        birthComb->addItem(QString());
        birthComb->setObjectName(QString::fromUtf8("birthComb"));
        birthComb->setMinimumSize(QSize(145, 40));

        gridLayout_2->addWidget(birthComb, 0, 1, 1, 1);

        label_3 = new QLabel(birthPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        birthText = new QDateEdit(birthPage);
        birthText->setObjectName(QString::fromUtf8("birthText"));
        birthText->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(birthText, 1, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 0, 0, 1, 1);

        stackedWidget->addWidget(birthPage);
        marriedPage = new QWidget();
        marriedPage->setObjectName(QString::fromUtf8("marriedPage"));
        gridLayout_4 = new QGridLayout(marriedPage);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(marriedPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_5);

        marriedComb = new QComboBox(marriedPage);
        marriedComb->addItem(QString());
        marriedComb->addItem(QString());
        marriedComb->setObjectName(QString::fromUtf8("marriedComb"));
        marriedComb->setMinimumSize(QSize(159, 40));

        horizontalLayout_2->addWidget(marriedComb);


        gridLayout_4->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        stackedWidget->addWidget(marriedPage);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 4);

        pushButton_2 = new QPushButton(FindDlg);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(70, 40));

        gridLayout->addWidget(pushButton_2, 0, 3, 1, 1);

        label = new QLabel(FindDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox = new QComboBox(FindDlg);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(130, 40));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        pushButton = new QPushButton(FindDlg);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(70, 40));

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);


        retranslateUi(FindDlg);

        QMetaObject::connectSlotsByName(FindDlg);
    } // setupUi

    void retranslateUi(QDialog *FindDlg)
    {
        FindDlg->setWindowTitle(QCoreApplication::translate("FindDlg", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("FindDlg", "\345\247\223\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("FindDlg", "\345\207\272\347\224\237\350\214\203\345\233\264", nullptr));
        birthComb->setItemText(0, QCoreApplication::translate("FindDlg", "\346\214\211\345\271\264\346\234\210\346\227\245\345\207\272\347\224\237\345\211\215", nullptr));
        birthComb->setItemText(1, QCoreApplication::translate("FindDlg", "\346\214\211\345\271\264\346\234\210\346\227\245\345\207\272\347\224\237\345\220\216", nullptr));

        label_3->setText(QCoreApplication::translate("FindDlg", "\346\227\245\346\234\237", nullptr));
        label_5->setText(QCoreApplication::translate("FindDlg", "\345\251\232\345\247\273\346\203\205\345\206\265", nullptr));
        marriedComb->setItemText(0, QCoreApplication::translate("FindDlg", "\346\234\252\345\251\232", nullptr));
        marriedComb->setItemText(1, QCoreApplication::translate("FindDlg", "\345\267\262\345\251\232", nullptr));

        pushButton_2->setText(QCoreApplication::translate("FindDlg", "\345\217\226\346\266\210\346\237\245\350\257\242", nullptr));
        label->setText(QCoreApplication::translate("FindDlg", "\346\237\245\350\257\242\346\235\241\344\273\266", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("FindDlg", "\345\205\250\344\275\223\345\221\230\345\267\245\346\237\245\350\257\242", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("FindDlg", "\346\214\211\345\247\223\345\220\215\346\237\245\350\257\242", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("FindDlg", "\346\214\211\345\207\272\347\224\237\345\271\264\346\234\210\346\237\245\350\257\242", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("FindDlg", "\346\214\211\345\251\232\345\247\273\346\203\205\345\206\265\346\237\245\350\257\242", nullptr));

        pushButton->setText(QCoreApplication::translate("FindDlg", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindDlg: public Ui_FindDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDDLG_H
