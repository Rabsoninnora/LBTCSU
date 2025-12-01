/********************************************************************************
** Form generated from reading UI file 'castvote.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASTVOTE_H
#define UI_CASTVOTE_H

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

class Ui_CastVote
{
public:
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
    QLabel *label_2;
    QPushButton *SubHeading;
    QPushButton *btn_back;
    QPushButton *Header;

    void setupUi(QDialog *CastVote)
    {
        if (CastVote->objectName().isEmpty())
            CastVote->setObjectName("CastVote");
        CastVote->resize(1399, 763);
        CastVote->setStyleSheet(QString::fromUtf8("background-color: #2980b9;"));
        BackgroundFrame = new QFrame(CastVote);
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
        VoterDetailFrame->setGeometry(QRect(10, 100, 471, 391));
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
        plainTextEdit->setGeometry(QRect(10, 129, 451, 261));
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
        tableView->setGeometry(QRect(530, 161, 771, 391));
        label = new QLabel(BackgroundFrame);
        label->setObjectName("label");
        label->setGeometry(QRect(550, 120, 91, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label->setFont(font1);
        label_2 = new QLabel(BackgroundFrame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(670, 110, 271, 41));
        label_2->setStyleSheet(QString::fromUtf8("  \n"
" QLabel {\n"
"  border:2px solid green;\n"
"  border-radius: 10px;\n"
"  padding: 8px 8px;\n"
"  background: rgb(255, 255, 255);\n"
" \n"
"};"));
        SubHeading = new QPushButton(CastVote);
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
        btn_back = new QPushButton(CastVote);
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
        Header = new QPushButton(CastVote);
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

        retranslateUi(CastVote);

        QMetaObject::connectSlotsByName(CastVote);
    } // setupUi

    void retranslateUi(QDialog *CastVote)
    {
        CastVote->setWindowTitle(QCoreApplication::translate("CastVote", "Dialog", nullptr));
        btn_search_Voter->setText(QCoreApplication::translate("CastVote", "Search", nullptr));
        txt_Search->setPlaceholderText(QCoreApplication::translate("CastVote", "Enter Your Student ID", nullptr));
        comboBox_Position->setItemText(0, QCoreApplication::translate("CastVote", "President", nullptr));
        comboBox_Position->setItemText(1, QCoreApplication::translate("CastVote", "Vice President", nullptr));
        comboBox_Position->setItemText(2, QCoreApplication::translate("CastVote", "General Secretary", nullptr));
        comboBox_Position->setItemText(3, QCoreApplication::translate("CastVote", "Finance Coordinator", nullptr));
        comboBox_Position->setItemText(4, QCoreApplication::translate("CastVote", "Sports Coordinator", nullptr));

        btn_Reset->setText(QCoreApplication::translate("CastVote", "Reset", nullptr));
        image_field->setText(QString());
        plainTextEdit->setPlainText(QString());
        btn_search_Candidet->setText(QCoreApplication::translate("CastVote", "Search", nullptr));
        label->setText(QCoreApplication::translate("CastVote", "Position :", nullptr));
        label_2->setText(QCoreApplication::translate("CastVote", "TextLabel", nullptr));
        SubHeading->setText(QCoreApplication::translate("CastVote", "SEARCH YOUR RECORD THEN SEARCH CANDIDATE RECORD", nullptr));
        btn_back->setText(QCoreApplication::translate("CastVote", "Back", nullptr));
        Header->setText(QCoreApplication::translate("CastVote", " LBTCSU VOTING  SYSTEM", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CastVote: public Ui_CastVote {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASTVOTE_H
