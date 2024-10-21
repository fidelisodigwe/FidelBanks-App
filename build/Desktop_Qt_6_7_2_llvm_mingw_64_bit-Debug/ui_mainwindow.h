/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *lblAdmin;
    QLabel *lblAdminName;
    QLabel *lblAdminPassword;
    QLineEdit *leAdminName;
    QLineEdit *leAdminPassword;
    QPushButton *btnAdmin;
    QLineEdit *leAdminPassword_2;
    QPushButton *btnUser;
    QLabel *lblUser;
    QLabel *lblAUserName;
    QLabel *lblUserPassword;
    QLineEdit *leUserName;
    QLineEdit *leUserPassword;
    QLabel *lblFidelBanks;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lblAdmin = new QLabel(centralwidget);
        lblAdmin->setObjectName("lblAdmin");
        lblAdmin->setGeometry(QRect(580, 90, 54, 17));
        lblAdminName = new QLabel(centralwidget);
        lblAdminName->setObjectName("lblAdminName");
        lblAdminName->setGeometry(QRect(440, 120, 54, 17));
        lblAdminPassword = new QLabel(centralwidget);
        lblAdminPassword->setObjectName("lblAdminPassword");
        lblAdminPassword->setGeometry(QRect(430, 160, 71, 20));
        leAdminName = new QLineEdit(centralwidget);
        leAdminName->setObjectName("leAdminName");
        leAdminName->setGeometry(QRect(520, 120, 113, 23));
        leAdminPassword = new QLineEdit(centralwidget);
        leAdminPassword->setObjectName("leAdminPassword");
        leAdminPassword->setGeometry(QRect(520, 150, 113, 23));
        btnAdmin = new QPushButton(centralwidget);
        btnAdmin->setObjectName("btnAdmin");
        btnAdmin->setGeometry(QRect(570, 190, 75, 25));
        leAdminPassword_2 = new QLineEdit(centralwidget);
        leAdminPassword_2->setObjectName("leAdminPassword_2");
        leAdminPassword_2->setGeometry(QRect(520, 150, 113, 23));
        btnUser = new QPushButton(centralwidget);
        btnUser->setObjectName("btnUser");
        btnUser->setGeometry(QRect(580, 380, 75, 25));
        lblUser = new QLabel(centralwidget);
        lblUser->setObjectName("lblUser");
        lblUser->setGeometry(QRect(580, 270, 54, 17));
        lblAUserName = new QLabel(centralwidget);
        lblAUserName->setObjectName("lblAUserName");
        lblAUserName->setGeometry(QRect(440, 300, 54, 17));
        lblUserPassword = new QLabel(centralwidget);
        lblUserPassword->setObjectName("lblUserPassword");
        lblUserPassword->setGeometry(QRect(440, 340, 61, 17));
        leUserName = new QLineEdit(centralwidget);
        leUserName->setObjectName("leUserName");
        leUserName->setGeometry(QRect(520, 300, 113, 23));
        leUserPassword = new QLineEdit(centralwidget);
        leUserPassword->setObjectName("leUserPassword");
        leUserPassword->setGeometry(QRect(520, 340, 113, 23));
        lblFidelBanks = new QLabel(centralwidget);
        lblFidelBanks->setObjectName("lblFidelBanks");
        lblFidelBanks->setGeometry(QRect(500, 50, 121, 17));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lblAdmin->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        lblAdminName->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        lblAdminPassword->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        btnAdmin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        btnUser->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        lblUser->setText(QCoreApplication::translate("MainWindow", "User", nullptr));
        lblAUserName->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        lblUserPassword->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        lblFidelBanks->setText(QCoreApplication::translate("MainWindow", "FIDELBANKS APP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
