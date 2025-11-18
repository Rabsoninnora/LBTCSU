/********************************************************************************
** Form generated from reading UI file 'candidates.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANDIDATES_H
#define UI_CANDIDATES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Candidates
{
public:
    QFrame *frame_2;
    QPushButton *btn_search;
    QLineEdit *txt_Search;
    QLabel *label;
    QComboBox *comboBox_Position;
    QPushButton *btn_candidate_view;
    QPushButton *btn_Reset_Candidate_Search;
    QTableWidget *tableWidget;
    QPushButton *pushButton_2;
    QPushButton *btn_Candidate_back;
    QPushButton *StudentRegistration_2;

    void setupUi(QDialog *Candidates)
    {
        if (Candidates->objectName().isEmpty())
            Candidates->setObjectName("Candidates");
        Candidates->resize(1399, 763);
        Candidates->setStyleSheet(QString::fromUtf8("background-color: #2980b9;"));
        frame_2 = new QFrame(Candidates);
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
        btn_search = new QPushButton(frame_2);
        btn_search->setObjectName("btn_search");
        btn_search->setGeometry(QRect(20, 10, 111, 41));
        QFont font;
        font.setPointSize(11);
        font.setWeight(QFont::Medium);
        font.setItalic(false);
        btn_search->setFont(font);
        btn_search->setStyleSheet(QString::fromUtf8("    \n"
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
        btn_search->setCheckable(true);
        txt_Search = new QLineEdit(frame_2);
        txt_Search->setObjectName("txt_Search");
        txt_Search->setGeometry(QRect(150, 10, 291, 41));
        txt_Search->setFont(font);
        txt_Search->setStyleSheet(QString::fromUtf8("    \n"
"QLineEdit{\n"
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
        txt_Search->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(450, 20, 81, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label->setFont(font1);
        comboBox_Position = new QComboBox(frame_2);
        comboBox_Position->addItem(QString());
        comboBox_Position->addItem(QString());
        comboBox_Position->addItem(QString());
        comboBox_Position->addItem(QString());
        comboBox_Position->addItem(QString());
        comboBox_Position->setObjectName("comboBox_Position");
        comboBox_Position->setGeometry(QRect(540, 10, 271, 41));
        comboBox_Position->setStyleSheet(QString::fromUtf8("    \n"
"QComboBox{\n"
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
        btn_candidate_view = new QPushButton(frame_2);
        btn_candidate_view->setObjectName("btn_candidate_view");
        btn_candidate_view->setGeometry(QRect(830, 10, 171, 41));
        btn_candidate_view->setFont(font);
        btn_candidate_view->setStyleSheet(QString::fromUtf8("    \n"
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
        btn_candidate_view->setCheckable(true);
        btn_Reset_Candidate_Search = new QPushButton(frame_2);
        btn_Reset_Candidate_Search->setObjectName("btn_Reset_Candidate_Search");
        btn_Reset_Candidate_Search->setGeometry(QRect(1050, 10, 111, 41));
        btn_Reset_Candidate_Search->setStyleSheet(QString::fromUtf8("   \n"
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
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::ViewRestore));
        btn_Reset_Candidate_Search->setIcon(icon);
        tableWidget = new QTableWidget(frame_2);
        if (tableWidget->columnCount() < 9)
            tableWidget->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(20, 61, 1201, 481));
        pushButton_2 = new QPushButton(Candidates);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 0, 1399, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("    \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:2px solid green;\n"
"                    border-radius: 1px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        btn_Candidate_back = new QPushButton(Candidates);
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
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::GoHome));
        btn_Candidate_back->setIcon(icon1);
        StudentRegistration_2 = new QPushButton(Candidates);
        StudentRegistration_2->setObjectName("StudentRegistration_2");
        StudentRegistration_2->setGeometry(QRect(330, 140, 641, 41));
        StudentRegistration_2->setStyleSheet(QString::fromUtf8("     \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid green;\n"
"                    border-radius: 6px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));

        retranslateUi(Candidates);

        QMetaObject::connectSlotsByName(Candidates);
    } // setupUi

    void retranslateUi(QDialog *Candidates)
    {
        Candidates->setWindowTitle(QCoreApplication::translate("Candidates", "Dialog", nullptr));
        btn_search->setText(QCoreApplication::translate("Candidates", "Search", nullptr));
        txt_Search->setPlaceholderText(QCoreApplication::translate("Candidates", "Search for a Candidate here...", nullptr));
        label->setText(QCoreApplication::translate("Candidates", "Position :", nullptr));
        comboBox_Position->setItemText(0, QCoreApplication::translate("Candidates", "President", nullptr));
        comboBox_Position->setItemText(1, QCoreApplication::translate("Candidates", "Vice President", nullptr));
        comboBox_Position->setItemText(2, QCoreApplication::translate("Candidates", "General Secretary", nullptr));
        comboBox_Position->setItemText(3, QCoreApplication::translate("Candidates", "Finance Coordinator", nullptr));
        comboBox_Position->setItemText(4, QCoreApplication::translate("Candidates", "Spots Coordinator", nullptr));

        btn_candidate_view->setText(QCoreApplication::translate("Candidates", "View All Records", nullptr));
        btn_Reset_Candidate_Search->setText(QCoreApplication::translate("Candidates", "Reset", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Candidates", "Candidate_ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Candidates", "Fname", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Candidates", "Lname", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Candidates", "NRC", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Candidates", "Course", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Candidates", "Department", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Candidates", "Position", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Candidates", "ImageData", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Candidates", "ImageName", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Candidates", " LBTCSU VOTING  SYSTEM", nullptr));
        btn_Candidate_back->setText(QCoreApplication::translate("Candidates", "Back", nullptr));
        StudentRegistration_2->setText(QCoreApplication::translate("Candidates", "SEARCH CANDIDATE RECORD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Candidates: public Ui_Candidates {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANDIDATES_H
