/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *openfile;
    QAction *savefile;
    QAction *add;
    QAction *remove;
    QAction *qurey;
    QAction *modify;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTableView *display_table;
    QMenuBar *menuBar;
    QMenu *infomanage;
    QMenu *file;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(917, 564);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/male_search_user_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        openfile = new QAction(MainWindow);
        openfile->setObjectName(QString::fromUtf8("openfile"));
        savefile = new QAction(MainWindow);
        savefile->setObjectName(QString::fromUtf8("savefile"));
        add = new QAction(MainWindow);
        add->setObjectName(QString::fromUtf8("add"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/new_add_plus_user_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        add->setIcon(icon1);
        remove = new QAction(MainWindow);
        remove->setObjectName(QString::fromUtf8("remove"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/delete_male_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        remove->setIcon(icon2);
        qurey = new QAction(MainWindow);
        qurey->setObjectName(QString::fromUtf8("qurey"));
        qurey->setIcon(icon);
        modify = new QAction(MainWindow);
        modify->setObjectName(QString::fromUtf8("modify"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/human_male_user_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        modify->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        display_table = new QTableView(centralWidget);
        display_table->setObjectName(QString::fromUtf8("display_table"));

        gridLayout->addWidget(display_table, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 917, 21));
        infomanage = new QMenu(menuBar);
        infomanage->setObjectName(QString::fromUtf8("infomanage"));
        file = new QMenu(menuBar);
        file->setObjectName(QString::fromUtf8("file"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setIconSize(QSize(30, 30));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        mainToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(file->menuAction());
        menuBar->addAction(infomanage->menuAction());
        infomanage->addAction(add);
        infomanage->addAction(remove);
        infomanage->addAction(qurey);
        infomanage->addAction(modify);
        file->addAction(openfile);
        file->addAction(savefile);
        mainToolBar->addAction(add);
        mainToolBar->addSeparator();
        mainToolBar->addAction(remove);
        mainToolBar->addSeparator();
        mainToolBar->addAction(qurey);
        mainToolBar->addSeparator();
        mainToolBar->addAction(modify);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        openfile->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        savefile->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\201\214\345\267\245", nullptr));
        remove->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\201\214\345\267\245", nullptr));
        qurey->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\350\201\214\345\267\245", nullptr));
        modify->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\350\201\214\345\267\245\344\277\241\346\201\257", nullptr));
        infomanage->setTitle(QCoreApplication::translate("MainWindow", "\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        file->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\346\223\215\344\275\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
