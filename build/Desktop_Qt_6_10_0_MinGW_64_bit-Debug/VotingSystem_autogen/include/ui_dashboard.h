/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QPushButton *pushButton;
    QPushButton *btn_Dashboard_logout;
    QPushButton *btn_Add_candidate;
    QPushButton *btn_Register_Voter;
    QPushButton *btn_cadidates_records;
    QPushButton *btn_voter_records;
    QLabel *BodyLabel;
    QPushButton *btn_voter_account;
    QPushButton *Side_Nav;

    void setupUi(QDialog *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName("Dashboard");
        Dashboard->resize(1380, 763);
        Dashboard->setStyleSheet(QString::fromUtf8("\n"
"QDialog{\n"
"\n"
"\n"
"\n"
"}"));
        pushButton = new QPushButton(Dashboard);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(220, 0, 1161, 111));
        pushButton->setStyleSheet(QString::fromUtf8("     \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:2px solid  white;\n"
"                    border-radius: 1px;\n"
"                    padding: 0 8px;\n"
"                    background-color: green;\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        btn_Dashboard_logout = new QPushButton(Dashboard);
        btn_Dashboard_logout->setObjectName("btn_Dashboard_logout");
        btn_Dashboard_logout->setGeometry(QRect(1150, 30, 101, 41));
        btn_Dashboard_logout->setStyleSheet(QString::fromUtf8("    \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:2px solid white;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        btn_Add_candidate = new QPushButton(Dashboard);
        btn_Add_candidate->setObjectName("btn_Add_candidate");
        btn_Add_candidate->setGeometry(QRect(10, 220, 181, 41));
        btn_Add_candidate->setStyleSheet(QString::fromUtf8("    \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:2px solid green;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        btn_Register_Voter = new QPushButton(Dashboard);
        btn_Register_Voter->setObjectName("btn_Register_Voter");
        btn_Register_Voter->setGeometry(QRect(10, 340, 181, 41));
        btn_Register_Voter->setStyleSheet(QString::fromUtf8("    \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:2px solid green;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        btn_cadidates_records = new QPushButton(Dashboard);
        btn_cadidates_records->setObjectName("btn_cadidates_records");
        btn_cadidates_records->setGeometry(QRect(10, 280, 181, 41));
        btn_cadidates_records->setStyleSheet(QString::fromUtf8("    \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:2px solid green;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        btn_voter_records = new QPushButton(Dashboard);
        btn_voter_records->setObjectName("btn_voter_records");
        btn_voter_records->setGeometry(QRect(10, 400, 181, 41));
        btn_voter_records->setStyleSheet(QString::fromUtf8("    \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:2px solid green;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        BodyLabel = new QLabel(Dashboard);
        BodyLabel->setObjectName("BodyLabel");
        BodyLabel->setGeometry(QRect(220, 110, 1161, 763));
        BodyLabel->setStyleSheet(QString::fromUtf8("background-color: #2980b9;"));
        btn_voter_account = new QPushButton(Dashboard);
        btn_voter_account->setObjectName("btn_voter_account");
        btn_voter_account->setGeometry(QRect(10, 460, 181, 41));
        btn_voter_account->setStyleSheet(QString::fromUtf8("    \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:2px solid green;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        Side_Nav = new QPushButton(Dashboard);
        Side_Nav->setObjectName("Side_Nav");
        Side_Nav->setGeometry(QRect(0, 0, 221, 763));
        Side_Nav->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(0, 85, 127);\n"
"	border-radius:0px;\n"
"	color:rgb(188, 188, 188);\n"
"}"));
        Side_Nav->raise();
        pushButton->raise();
        btn_Dashboard_logout->raise();
        btn_Add_candidate->raise();
        btn_Register_Voter->raise();
        btn_cadidates_records->raise();
        btn_voter_records->raise();
        BodyLabel->raise();
        btn_voter_account->raise();

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QDialog *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Dashboard", " LBTCSU VOTING  SYSTEM", nullptr));
        btn_Dashboard_logout->setText(QCoreApplication::translate("Dashboard", "Logout", nullptr));
        btn_Add_candidate->setText(QCoreApplication::translate("Dashboard", "Add Candidate", nullptr));
        btn_Register_Voter->setText(QCoreApplication::translate("Dashboard", "Register Voters", nullptr));
        btn_cadidates_records->setText(QCoreApplication::translate("Dashboard", "Candidates Records", nullptr));
        btn_voter_records->setText(QCoreApplication::translate("Dashboard", "Voter Records", nullptr));
        BodyLabel->setText(QString());
        btn_voter_account->setText(QCoreApplication::translate("Dashboard", "Create Voter Account", nullptr));
        Side_Nav->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
