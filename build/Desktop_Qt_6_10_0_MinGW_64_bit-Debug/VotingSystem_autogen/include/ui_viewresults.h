/********************************************************************************
** Form generated from reading UI file 'viewresults.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWRESULTS_H
#define UI_VIEWRESULTS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ViewResults
{
public:
    QPushButton *StudentRegistration_2;
    QPushButton *btn_ViewResult_back;
    QPushButton *pushButton_2;
    QFrame *CenterBackground;
    QComboBox *comboBoxPosition;
    QPushButton *btn_search_Winner;
    QPushButton *btn_View_All;
    QLabel *label_2;
    QPushButton *btn_result_reset;

    void setupUi(QDialog *ViewResults)
    {
        if (ViewResults->objectName().isEmpty())
            ViewResults->setObjectName("ViewResults");
        ViewResults->resize(1399, 763);
        StudentRegistration_2 = new QPushButton(ViewResults);
        StudentRegistration_2->setObjectName("StudentRegistration_2");
        StudentRegistration_2->setGeometry(QRect(330, 100, 641, 41));
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
        btn_ViewResult_back = new QPushButton(ViewResults);
        btn_ViewResult_back->setObjectName("btn_ViewResult_back");
        btn_ViewResult_back->setGeometry(QRect(1260, 50, 91, 41));
        btn_ViewResult_back->setStyleSheet(QString::fromUtf8("    \n"
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
        btn_ViewResult_back->setIcon(icon);
        pushButton_2 = new QPushButton(ViewResults);
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
        CenterBackground = new QFrame(ViewResults);
        CenterBackground->setObjectName("CenterBackground");
        CenterBackground->setGeometry(QRect(170, 240, 971, 411));
        CenterBackground->setStyleSheet(QString::fromUtf8("QFrame{\n"
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
        CenterBackground->setFrameShape(QFrame::Shape::StyledPanel);
        CenterBackground->setFrameShadow(QFrame::Shadow::Raised);
        comboBoxPosition = new QComboBox(ViewResults);
        comboBoxPosition->addItem(QString());
        comboBoxPosition->addItem(QString());
        comboBoxPosition->addItem(QString());
        comboBoxPosition->addItem(QString());
        comboBoxPosition->addItem(QString());
        comboBoxPosition->setObjectName("comboBoxPosition");
        comboBoxPosition->setGeometry(QRect(300, 170, 271, 41));
        comboBoxPosition->setStyleSheet(QString::fromUtf8("    \n"
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
        btn_search_Winner = new QPushButton(ViewResults);
        btn_search_Winner->setObjectName("btn_search_Winner");
        btn_search_Winner->setGeometry(QRect(590, 170, 111, 41));
        QFont font;
        font.setPointSize(11);
        font.setWeight(QFont::Medium);
        font.setItalic(false);
        btn_search_Winner->setFont(font);
        btn_search_Winner->setStyleSheet(QString::fromUtf8("    \n"
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
        btn_search_Winner->setCheckable(true);
        btn_View_All = new QPushButton(ViewResults);
        btn_View_All->setObjectName("btn_View_All");
        btn_View_All->setGeometry(QRect(730, 170, 131, 41));
        btn_View_All->setFont(font);
        btn_View_All->setStyleSheet(QString::fromUtf8("    \n"
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
        btn_View_All->setCheckable(true);
        label_2 = new QLabel(ViewResults);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 170, 81, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label_2->setFont(font1);
        btn_result_reset = new QPushButton(ViewResults);
        btn_result_reset->setObjectName("btn_result_reset");
        btn_result_reset->setGeometry(QRect(900, 170, 111, 41));
        btn_result_reset->setStyleSheet(QString::fromUtf8("   \n"
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
        btn_result_reset->setIcon(icon1);

        retranslateUi(ViewResults);

        QMetaObject::connectSlotsByName(ViewResults);
    } // setupUi

    void retranslateUi(QDialog *ViewResults)
    {
        ViewResults->setWindowTitle(QCoreApplication::translate("ViewResults", "Dialog", nullptr));
        StudentRegistration_2->setText(QCoreApplication::translate("ViewResults", "VIEW WINNING CANDIDENT RECORD", nullptr));
        btn_ViewResult_back->setText(QCoreApplication::translate("ViewResults", "Back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ViewResults", " LUSAKA BUSINESS AND TECHNICAL COLLEGE  LBTCSU   VOTING  SYSTEM", nullptr));
        comboBoxPosition->setItemText(0, QCoreApplication::translate("ViewResults", "President", nullptr));
        comboBoxPosition->setItemText(1, QCoreApplication::translate("ViewResults", "Vice President", nullptr));
        comboBoxPosition->setItemText(2, QCoreApplication::translate("ViewResults", "General Secretary", nullptr));
        comboBoxPosition->setItemText(3, QCoreApplication::translate("ViewResults", "Finance Coordinator", nullptr));
        comboBoxPosition->setItemText(4, QCoreApplication::translate("ViewResults", "Sports Coordinator", nullptr));

        btn_search_Winner->setText(QCoreApplication::translate("ViewResults", "Search", nullptr));
        btn_View_All->setText(QCoreApplication::translate("ViewResults", "View All", nullptr));
        label_2->setText(QCoreApplication::translate("ViewResults", "Position :", nullptr));
        btn_result_reset->setText(QCoreApplication::translate("ViewResults", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewResults: public Ui_ViewResults {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWRESULTS_H
