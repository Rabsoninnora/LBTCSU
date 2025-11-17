/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QFrame *frame;
    QPushButton *btn_Add_candidate;
    QPushButton *btn_view_edit_candidate;
    QPushButton *btn_cadidates_records;
    QPushButton *btn_voter_records;
    QPushButton *btn_Dashboard_logout;
    QPushButton *pushButton_5;

    void setupUi(QDialog *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName("Dashboard");
        Dashboard->resize(779, 430);
        frame = new QFrame(Dashboard);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 221, 431));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        btn_Add_candidate = new QPushButton(frame);
        btn_Add_candidate->setObjectName("btn_Add_candidate");
        btn_Add_candidate->setGeometry(QRect(20, 160, 141, 41));
        btn_view_edit_candidate = new QPushButton(frame);
        btn_view_edit_candidate->setObjectName("btn_view_edit_candidate");
        btn_view_edit_candidate->setGeometry(QRect(20, 220, 141, 41));
        btn_cadidates_records = new QPushButton(frame);
        btn_cadidates_records->setObjectName("btn_cadidates_records");
        btn_cadidates_records->setGeometry(QRect(20, 280, 141, 41));
        btn_voter_records = new QPushButton(frame);
        btn_voter_records->setObjectName("btn_voter_records");
        btn_voter_records->setGeometry(QRect(20, 340, 141, 41));
        btn_Dashboard_logout = new QPushButton(Dashboard);
        btn_Dashboard_logout->setObjectName("btn_Dashboard_logout");
        btn_Dashboard_logout->setGeometry(QRect(694, 70, 81, 41));
        pushButton_5 = new QPushButton(Dashboard);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(220, -1, 561, 61));

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QDialog *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "Dialog", nullptr));
        btn_Add_candidate->setText(QCoreApplication::translate("Dashboard", "Add Candidate", nullptr));
        btn_view_edit_candidate->setText(QCoreApplication::translate("Dashboard", "Edit/View Candidate", nullptr));
        btn_cadidates_records->setText(QCoreApplication::translate("Dashboard", "Candidates Records", nullptr));
        btn_voter_records->setText(QCoreApplication::translate("Dashboard", "Voter Records", nullptr));
        btn_Dashboard_logout->setText(QCoreApplication::translate("Dashboard", "Logout", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dashboard", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
