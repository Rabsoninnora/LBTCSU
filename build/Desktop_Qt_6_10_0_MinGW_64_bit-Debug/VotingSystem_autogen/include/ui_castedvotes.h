/********************************************************************************
** Form generated from reading UI file 'castedvotes.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASTEDVOTES_H
#define UI_CASTEDVOTES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_CastedVotes
{
public:
    QPushButton *Header;
    QFrame *BackgroundFrame;
    QPushButton *btn_search_Voter;
    QLineEdit *txt_Search;
    QComboBox *comboBox_Position;
    QPushButton *btn_Reset;
    QFrame *VoterDetailFrame;
    QLabel *image_field;
    QPlainTextEdit *plainTextEdit;
    QPushButton *btn_search_Candidet;
    QFrame *line;
    QTableView *tableView;
    QLabel *label;
    QLabel *label_Position;
    QPushButton *SubHeading;
    QPushButton *btn_back;

    void setupUi(QDialog *CastedVotes)
    {
        if (CastedVotes->objectName().isEmpty())
            CastedVotes->setObjectName("CastedVotes");
        CastedVotes->resize(1399, 763);
        CastedVotes->setStyleSheet(QString::fromUtf8("background-color: #2980b9;"));
        Header = new QPushButton(CastedVotes);
        Header->setObjectName("Header");
        Header->setGeometry(QRect(0, 0, 1399, 41));
        Header->setStyleSheet(QString::fromUtf8("    \n"
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
        BackgroundFrame = new QFrame(CastedVotes);
        BackgroundFrame->setObjectName("BackgroundFrame");
        BackgroundFrame->setGeometry(QRect(10, 130, 1311, 561));
        BackgroundFrame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"    background-color: rgb(0, 54, 79); \n"
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
        BackgroundFrame->setFrameShape(QFrame::Shape::StyledPanel);
        BackgroundFrame->setFrameShadow(QFrame::Shadow::Raised);
        btn_search_Voter = new QPushButton(BackgroundFrame);
        btn_search_Voter->setObjectName("btn_search_Voter");
        btn_search_Voter->setGeometry(QRect(370, 10, 111, 41));
        QFont font;
        font.setPointSize(11);
        font.setWeight(QFont::Medium);
        font.setItalic(false);
        btn_search_Voter->setFont(font);
        btn_search_Voter->setStyleSheet(QString::fromUtf8("    \n"
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
        btn_search_Voter->setCheckable(true);
        txt_Search = new QLineEdit(BackgroundFrame);
        txt_Search->setObjectName("txt_Search");
        txt_Search->setGeometry(QRect(60, 10, 291, 41));
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
        comboBox_Position = new QComboBox(BackgroundFrame);
        comboBox_Position->addItem(QString());
        comboBox_Position->addItem(QString());
        comboBox_Position->addItem(QString());
        comboBox_Position->addItem(QString());
        comboBox_Position->addItem(QString());
        comboBox_Position->setObjectName("comboBox_Position");
        comboBox_Position->setGeometry(QRect(670, 50, 271, 41));
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
        btn_Reset = new QPushButton(BackgroundFrame);
        btn_Reset->setObjectName("btn_Reset");
        btn_Reset->setGeometry(QRect(1090, 50, 111, 41));
        btn_Reset->setStyleSheet(QString::fromUtf8("   \n"
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
        btn_Reset->setIcon(icon);
        VoterDetailFrame = new QFrame(BackgroundFrame);
        VoterDetailFrame->setObjectName("VoterDetailFrame");
        VoterDetailFrame->setGeometry(QRect(10, 100, 471, 331));
        VoterDetailFrame->setStyleSheet(QString::fromUtf8("background-color: #2980b9;"));
        VoterDetailFrame->setFrameShape(QFrame::Shape::StyledPanel);
        VoterDetailFrame->setFrameShadow(QFrame::Shadow::Raised);
        image_field = new QLabel(VoterDetailFrame);
        image_field->setObjectName("image_field");
        image_field->setGeometry(QRect(140, 4, 161, 121));
        image_field->setStyleSheet(QString::fromUtf8("  \n"
" QLabel {\n"
"  border:2px solid green;\n"
"  border-radius: 10px;\n"
"  padding: 8px 8px;\n"
"  background: rgb(255, 255, 255);\n"
" \n"
"};"));
        plainTextEdit = new QPlainTextEdit(VoterDetailFrame);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(60, 150, 321, 181));
        plainTextEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit{\n"
"\n"
"    background-color: #1B263B;\n"
"    color: #FFFFFF;\n"
"    selection-background-color: #1B98E0;\n"
"    gridline-color: #415A77;\n"
"    border-top-left-radius: 12px;\n"
"    border-top-right-radius: 12px;\n"
"    border-bottom-left-radius: 12px;\n"
"    border-bottom-right-radius: 12px;\n"
"\n"
"\n"
"}"));
        btn_search_Candidet = new QPushButton(BackgroundFrame);
        btn_search_Candidet->setObjectName("btn_search_Candidet");
        btn_search_Candidet->setGeometry(QRect(960, 50, 111, 41));
        btn_search_Candidet->setFont(font);
        btn_search_Candidet->setStyleSheet(QString::fromUtf8("    \n"
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
        btn_search_Candidet->setCheckable(true);
        line = new QFrame(BackgroundFrame);
        line->setObjectName("line");
        line->setGeometry(QRect(500, 0, 20, 561));
        line->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);"));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        tableView = new QTableView(BackgroundFrame);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(580, 200, 701, 341));
        tableView->setStyleSheet(QString::fromUtf8("QTableView{\n"
"\n"
"   color: rgb(255, 255, 255);\n"
"                    border:2px solid white;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 600 11pt ;\n"
"                   \n"
"\n"
"\n"
"}"));
        label = new QLabel(BackgroundFrame);
        label->setObjectName("label");
        label->setGeometry(QRect(550, 120, 91, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label->setFont(font1);
        label_Position = new QLabel(BackgroundFrame);
        label_Position->setObjectName("label_Position");
        label_Position->setGeometry(QRect(670, 110, 271, 41));
        label_Position->setStyleSheet(QString::fromUtf8("  \n"
" QLabel {\n"
"  color: rgb(255, 255, 255);\n"
"                    border:2px solid white;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
" \n"
"};"));
        SubHeading = new QPushButton(CastedVotes);
        SubHeading->setObjectName("SubHeading");
        SubHeading->setGeometry(QRect(330, 80, 641, 41));
        SubHeading->setStyleSheet(QString::fromUtf8("     \n"
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
        btn_back = new QPushButton(CastedVotes);
        btn_back->setObjectName("btn_back");
        btn_back->setGeometry(QRect(1260, 50, 91, 41));
        btn_back->setStyleSheet(QString::fromUtf8("    \n"
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
        btn_back->setIcon(icon1);

        retranslateUi(CastedVotes);

        QMetaObject::connectSlotsByName(CastedVotes);
    } // setupUi

    void retranslateUi(QDialog *CastedVotes)
    {
        CastedVotes->setWindowTitle(QCoreApplication::translate("CastedVotes", "Dialog", nullptr));
        Header->setText(QCoreApplication::translate("CastedVotes", " LBTCSU VOTING  SYSTEM", nullptr));
        btn_search_Voter->setText(QCoreApplication::translate("CastedVotes", "Search", nullptr));
        txt_Search->setPlaceholderText(QCoreApplication::translate("CastedVotes", "Enter Your Student ID", nullptr));
        comboBox_Position->setItemText(0, QCoreApplication::translate("CastedVotes", "President", nullptr));
        comboBox_Position->setItemText(1, QCoreApplication::translate("CastedVotes", "Vice President", nullptr));
        comboBox_Position->setItemText(2, QCoreApplication::translate("CastedVotes", "General Secretary", nullptr));
        comboBox_Position->setItemText(3, QCoreApplication::translate("CastedVotes", "Finance Coordinator", nullptr));
        comboBox_Position->setItemText(4, QCoreApplication::translate("CastedVotes", "Sports Coordinator", nullptr));

        btn_Reset->setText(QCoreApplication::translate("CastedVotes", "Reset", nullptr));
        image_field->setText(QString());
        plainTextEdit->setPlainText(QString());
        btn_search_Candidet->setText(QCoreApplication::translate("CastedVotes", "Search", nullptr));
        label->setText(QCoreApplication::translate("CastedVotes", "Position :", nullptr));
        label_Position->setText(QString());
        SubHeading->setText(QCoreApplication::translate("CastedVotes", "SEARCH YOUR RECORD THEN SEARCH CANDIDATE RECORD", nullptr));
        btn_back->setText(QCoreApplication::translate("CastedVotes", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CastedVotes: public Ui_CastedVotes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASTEDVOTES_H
