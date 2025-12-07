/********************************************************************************
** Form generated from reading UI file 'voterrecords.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOTERRECORDS_H
#define UI_VOTERRECORDS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_VoterRecords
{
public:
    QPushButton *pushButton_2;
    QPushButton *btn_Candidate_back;
    QPushButton *StudentRegistration_2;
    QFrame *frame_2;
    QPushButton *btn_search_voter;
    QLineEdit *txt_Search_Voter;
    QPushButton *btn_voter_view;
    QPushButton *btn_Reset_Voter;
    QTableWidget *tableWidget_2;

    void setupUi(QDialog *VoterRecords)
    {
        if (VoterRecords->objectName().isEmpty())
            VoterRecords->setObjectName("VoterRecords");
        VoterRecords->resize(1399, 763);
        VoterRecords->setStyleSheet(QString::fromUtf8("background-color: #2980b9;"));
        pushButton_2 = new QPushButton(VoterRecords);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 0, 1399, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("    \n"
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
        btn_Candidate_back = new QPushButton(VoterRecords);
        btn_Candidate_back->setObjectName("btn_Candidate_back");
        btn_Candidate_back->setGeometry(QRect(1260, 50, 91, 41));
        btn_Candidate_back->setStyleSheet(QString::fromUtf8("    \n"
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
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::GoHome));
        btn_Candidate_back->setIcon(icon);
        StudentRegistration_2 = new QPushButton(VoterRecords);
        StudentRegistration_2->setObjectName("StudentRegistration_2");
        StudentRegistration_2->setGeometry(QRect(330, 140, 641, 41));
        StudentRegistration_2->setStyleSheet(QString::fromUtf8("     \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid green;\n"
"                    border-radius: 6px;\n"
"                    padding: 0 8px;\n"
"                    background-color: green;\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        frame_2 = new QFrame(VoterRecords);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(80, 190, 1241, 561));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame{\n"
"    background-color: rgb(0, 54, 79); /* Your header color */\n"
"    border-top-left-radius: 0px;\n"
"    border-top-right-radius: 0px;\n"
"    border-bottom-left-radius: 12px;\n"
"    border-bottom-right-radius: 12px;\n"
"    color: white;\n"
"}\n"
"QTableView {\n"
"    background-color: #1B263B;\n"
"    color: #FFFFFF;\n"
"    selection-background-color: #1B98E0;\n"
"    gridline-color: #415A77;\n"
"    border-top-left-radius: 12px;\n"
"    border-top-right-radius: 12px;\n"
"    border-bottom-left-radius: 12px;\n"
"    border-bottom-right-radius: 12px;\n"
"}\n"
"QPushButton {\n"
"    background-color: #1B98E0;\n"
"    color: white;\n"
"    border-radius: 6px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QLineEdit {\n"
"    background-color: #2E3A59;\n"
"    color: white;\n"
"	border-radius: 7px;\n"
"	border: 1 solid blue;\n"
"}\n"
"QComboBox {\n"
"	background-color: #2E3A59;\n"
"    color: white;\n"
"	border-radius: 7px;\n"
"	border: 1 solid blue;\n"
"}"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        btn_search_voter = new QPushButton(frame_2);
        btn_search_voter->setObjectName("btn_search_voter");
        btn_search_voter->setGeometry(QRect(520, 10, 111, 41));
        QFont font;
        font.setPointSize(11);
        font.setWeight(QFont::Medium);
        font.setItalic(false);
        btn_search_voter->setFont(font);
        btn_search_voter->setStyleSheet(QString::fromUtf8("    \n"
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
        btn_search_voter->setCheckable(true);
        txt_Search_Voter = new QLineEdit(frame_2);
        txt_Search_Voter->setObjectName("txt_Search_Voter");
        txt_Search_Voter->setGeometry(QRect(20, 10, 491, 41));
        txt_Search_Voter->setFont(font);
        txt_Search_Voter->setStyleSheet(QString::fromUtf8("    \n"
"QLineEdit{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:2px solid  green;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        txt_Search_Voter->setAlignment(Qt::AlignmentFlag::AlignCenter);
        btn_voter_view = new QPushButton(frame_2);
        btn_voter_view->setObjectName("btn_voter_view");
        btn_voter_view->setGeometry(QRect(650, 10, 171, 41));
        btn_voter_view->setFont(font);
        btn_voter_view->setStyleSheet(QString::fromUtf8("    \n"
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
        btn_voter_view->setCheckable(true);
        btn_Reset_Voter = new QPushButton(frame_2);
        btn_Reset_Voter->setObjectName("btn_Reset_Voter");
        btn_Reset_Voter->setGeometry(QRect(830, 10, 111, 41));
        btn_Reset_Voter->setStyleSheet(QString::fromUtf8("   \n"
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
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::ViewRestore));
        btn_Reset_Voter->setIcon(icon1);
        tableWidget_2 = new QTableWidget(frame_2);
        if (tableWidget_2->columnCount() < 6)
            tableWidget_2->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(20, 61, 941, 481));

        retranslateUi(VoterRecords);

        QMetaObject::connectSlotsByName(VoterRecords);
    } // setupUi

    void retranslateUi(QDialog *VoterRecords)
    {
        VoterRecords->setWindowTitle(QCoreApplication::translate("VoterRecords", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("VoterRecords", " LBTCSU VOTING  SYSTEM", nullptr));
        btn_Candidate_back->setText(QCoreApplication::translate("VoterRecords", "Back", nullptr));
        StudentRegistration_2->setText(QCoreApplication::translate("VoterRecords", "SEARCH VOTER RECORD", nullptr));
        btn_search_voter->setText(QCoreApplication::translate("VoterRecords", "Search", nullptr));
        txt_Search_Voter->setPlaceholderText(QCoreApplication::translate("VoterRecords", "Enter Student ID | Valid Search Query", nullptr));
        btn_voter_view->setText(QCoreApplication::translate("VoterRecords", "View All Records", nullptr));
        btn_Reset_Voter->setText(QCoreApplication::translate("VoterRecords", "Reset", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("VoterRecords", "StudentID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("VoterRecords", "Fname", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("VoterRecords", "Lname", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("VoterRecords", "Department", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("VoterRecords", "ImageData", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("VoterRecords", "ImageName", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VoterRecords: public Ui_VoterRecords {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOTERRECORDS_H
