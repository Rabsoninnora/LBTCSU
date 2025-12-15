/********************************************************************************
** Form generated from reading UI file 'voterdashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOTERDASHBOARD_H
#define UI_VOTERDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_VoterDashboard
{
public:
    QPushButton *Side_Nav;
    QPushButton *pushButton;
    QPushButton *btn_logout;
    QLabel *BodyLabel;
    QPushButton *btn_view_candidate;
    QPushButton *btn_AccountView;
    QPushButton *btn_CastVote;

    void setupUi(QDialog *VoterDashboard)
    {
        if (VoterDashboard->objectName().isEmpty())
            VoterDashboard->setObjectName("VoterDashboard");
        VoterDashboard->resize(1399, 763);
        Side_Nav = new QPushButton(VoterDashboard);
        Side_Nav->setObjectName("Side_Nav");
        Side_Nav->setGeometry(QRect(0, 0, 221, 763));
        Side_Nav->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(0, 85, 127);\n"
"	border:2px solid green;\n"
"	color:rgb(188, 188, 188);\n"
"    \n"
"}"));
        pushButton = new QPushButton(VoterDashboard);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 1399, 111));
        pushButton->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        pushButton->setStyleSheet(QString::fromUtf8("     \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:2px solid white;\n"
"                    padding: 0 8px;\n"
"                    background-color: green;\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        btn_logout = new QPushButton(VoterDashboard);
        btn_logout->setObjectName("btn_logout");
        btn_logout->setGeometry(QRect(1200, 40, 101, 41));
        btn_logout->setStyleSheet(QString::fromUtf8("    \n"
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
        BodyLabel = new QLabel(VoterDashboard);
        BodyLabel->setObjectName("BodyLabel");
        BodyLabel->setGeometry(QRect(220, 112, 1181, 761));
        BodyLabel->setStyleSheet(QString::fromUtf8(""));
        btn_view_candidate = new QPushButton(VoterDashboard);
        btn_view_candidate->setObjectName("btn_view_candidate");
        btn_view_candidate->setGeometry(QRect(20, 300, 181, 41));
        btn_view_candidate->setStyleSheet(QString::fromUtf8("    \n"
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
        btn_AccountView = new QPushButton(VoterDashboard);
        btn_AccountView->setObjectName("btn_AccountView");
        btn_AccountView->setGeometry(QRect(20, 360, 181, 41));
        btn_AccountView->setStyleSheet(QString::fromUtf8("    \n"
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
        btn_CastVote = new QPushButton(VoterDashboard);
        btn_CastVote->setObjectName("btn_CastVote");
        btn_CastVote->setGeometry(QRect(20, 430, 181, 41));
        btn_CastVote->setStyleSheet(QString::fromUtf8("    \n"
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
        Side_Nav->raise();
        BodyLabel->raise();
        btn_view_candidate->raise();
        btn_AccountView->raise();
        btn_CastVote->raise();
        pushButton->raise();
        btn_logout->raise();

        retranslateUi(VoterDashboard);

        QMetaObject::connectSlotsByName(VoterDashboard);
    } // setupUi

    void retranslateUi(QDialog *VoterDashboard)
    {
        VoterDashboard->setWindowTitle(QCoreApplication::translate("VoterDashboard", "Dialog", nullptr));
        Side_Nav->setText(QString());
        pushButton->setText(QCoreApplication::translate("VoterDashboard", " LBTCSU VOTING  SYSTEM", nullptr));
        btn_logout->setText(QCoreApplication::translate("VoterDashboard", "Logout", nullptr));
        BodyLabel->setText(QString());
        btn_view_candidate->setText(QCoreApplication::translate("VoterDashboard", "View Candidate", nullptr));
        btn_AccountView->setText(QCoreApplication::translate("VoterDashboard", "View Account", nullptr));
        btn_CastVote->setText(QCoreApplication::translate("VoterDashboard", "Cast Vote", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VoterDashboard: public Ui_VoterDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOTERDASHBOARD_H
