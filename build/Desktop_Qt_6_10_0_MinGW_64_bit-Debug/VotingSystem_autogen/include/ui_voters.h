/********************************************************************************
** Form generated from reading UI file 'voters.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOTERS_H
#define UI_VOTERS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Voters
{
public:
    QPushButton *pushButton;
    QPushButton *Voters_Registration;
    QPushButton *btn_RegisterVoter_back;
    QFrame *frame;
    QLineEdit *lineEdit_SudentID_Voter;
    QLineEdit *lineEdit_Fname_voter;
    QLabel *image_field;
    QPushButton *btn_browse_image_voter;
    QPushButton *btn_submit_voter;
    QPushButton *btn_Reset_Voter;
    QLineEdit *lineEdit_Lname_voter;
    QComboBox *txtDepartmentCombo;

    void setupUi(QDialog *Voters)
    {
        if (Voters->objectName().isEmpty())
            Voters->setObjectName("Voters");
        Voters->resize(1154, 694);
        Voters->setStyleSheet(QString::fromUtf8("background-color: #2980b9;"));
        pushButton = new QPushButton(Voters);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 1154, 41));
        pushButton->setStyleSheet(QString::fromUtf8("    \n"
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
        Voters_Registration = new QPushButton(Voters);
        Voters_Registration->setObjectName("Voters_Registration");
        Voters_Registration->setGeometry(QRect(300, 90, 641, 41));
        Voters_Registration->setStyleSheet(QString::fromUtf8("     \n"
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
        btn_RegisterVoter_back = new QPushButton(Voters);
        btn_RegisterVoter_back->setObjectName("btn_RegisterVoter_back");
        btn_RegisterVoter_back->setGeometry(QRect(1040, 60, 91, 41));
        btn_RegisterVoter_back->setStyleSheet(QString::fromUtf8("    \n"
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
        btn_RegisterVoter_back->setIcon(icon);
        frame = new QFrame(Voters);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(60, 160, 1011, 521));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        lineEdit_SudentID_Voter = new QLineEdit(frame);
        lineEdit_SudentID_Voter->setObjectName("lineEdit_SudentID_Voter");
        lineEdit_SudentID_Voter->setGeometry(QRect(390, 10, 311, 51));
        lineEdit_SudentID_Voter->setStyleSheet(QString::fromUtf8("   \n"
"QLineEdit{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:2px solid black;\n"
"                    border-radius: 0px;\n"
"                    padding: 0 8px;\n"
"                    \n"
"                    \n"
"	                font: 700 9pt \"Segoe UI\";\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        lineEdit_SudentID_Voter->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_Fname_voter = new QLineEdit(frame);
        lineEdit_Fname_voter->setObjectName("lineEdit_Fname_voter");
        lineEdit_Fname_voter->setGeometry(QRect(390, 90, 311, 51));
        lineEdit_Fname_voter->setStyleSheet(QString::fromUtf8("   \n"
"QLineEdit{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:2px solid black;\n"
"                    border-radius: 0px;\n"
"                    padding: 0 8px;\n"
"                    \n"
"                    \n"
"	                font: 700 9pt \"Segoe UI\";\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        lineEdit_Fname_voter->setAlignment(Qt::AlignmentFlag::AlignCenter);
        image_field = new QLabel(frame);
        image_field->setObjectName("image_field");
        image_field->setGeometry(QRect(90, 30, 231, 181));
        image_field->setStyleSheet(QString::fromUtf8("  \n"
" QLabel {\n"
"  border:2px solid green;\n"
"  border-radius: 10px;\n"
"  padding: 8px 8px;\n"
"  background: rgb(255, 255, 255);\n"
" \n"
"};"));
        btn_browse_image_voter = new QPushButton(frame);
        btn_browse_image_voter->setObjectName("btn_browse_image_voter");
        btn_browse_image_voter->setGeometry(QRect(140, 220, 131, 41));
        btn_browse_image_voter->setStyleSheet(QString::fromUtf8("    \n"
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
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::FolderOpen));
        btn_browse_image_voter->setIcon(icon1);
        btn_submit_voter = new QPushButton(frame);
        btn_submit_voter->setObjectName("btn_submit_voter");
        btn_submit_voter->setGeometry(QRect(390, 300, 111, 41));
        btn_submit_voter->setStyleSheet(QString::fromUtf8("   \n"
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
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSave));
        btn_submit_voter->setIcon(icon2);
        btn_Reset_Voter = new QPushButton(frame);
        btn_Reset_Voter->setObjectName("btn_Reset_Voter");
        btn_Reset_Voter->setGeometry(QRect(590, 300, 111, 41));
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
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::ViewRestore));
        btn_Reset_Voter->setIcon(icon3);
        lineEdit_Lname_voter = new QLineEdit(frame);
        lineEdit_Lname_voter->setObjectName("lineEdit_Lname_voter");
        lineEdit_Lname_voter->setGeometry(QRect(390, 160, 311, 51));
        lineEdit_Lname_voter->setStyleSheet(QString::fromUtf8("   \n"
"QLineEdit{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:2px solid black;\n"
"                    border-radius: 0px;\n"
"                    padding: 0 8px;\n"
"                    \n"
"                    \n"
"	                font: 700 9pt \"Segoe UI\";\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        lineEdit_Lname_voter->setAlignment(Qt::AlignmentFlag::AlignCenter);
        txtDepartmentCombo = new QComboBox(frame);
        txtDepartmentCombo->addItem(QString());
        txtDepartmentCombo->addItem(QString());
        txtDepartmentCombo->addItem(QString());
        txtDepartmentCombo->addItem(QString());
        txtDepartmentCombo->setObjectName("txtDepartmentCombo");
        txtDepartmentCombo->setGeometry(QRect(390, 230, 311, 41));
        QFont font;
        font.setPointSize(11);
        font.setWeight(QFont::Medium);
        font.setItalic(false);
        txtDepartmentCombo->setFont(font);
        txtDepartmentCombo->setStyleSheet(QString::fromUtf8("   \n"
"QComboBox{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:2px solid green;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: #2980b9;\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));

        retranslateUi(Voters);

        QMetaObject::connectSlotsByName(Voters);
    } // setupUi

    void retranslateUi(QDialog *Voters)
    {
        Voters->setWindowTitle(QCoreApplication::translate("Voters", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Voters", " LBTCSU VOTING  SYSTEM", nullptr));
        Voters_Registration->setText(QCoreApplication::translate("Voters", "VOTERS REGISTRATION FORM", nullptr));
        btn_RegisterVoter_back->setText(QCoreApplication::translate("Voters", "Back", nullptr));
        lineEdit_SudentID_Voter->setPlaceholderText(QCoreApplication::translate("Voters", "* Enter Student ID", nullptr));
        lineEdit_Fname_voter->setPlaceholderText(QCoreApplication::translate("Voters", "* Enter  First Name", nullptr));
        image_field->setText(QString());
        btn_browse_image_voter->setText(QCoreApplication::translate("Voters", "Browse image", nullptr));
        btn_submit_voter->setText(QCoreApplication::translate("Voters", "Submit", nullptr));
        btn_Reset_Voter->setText(QCoreApplication::translate("Voters", "Reset", nullptr));
        lineEdit_Lname_voter->setPlaceholderText(QCoreApplication::translate("Voters", "* Enter  Last Name", nullptr));
        txtDepartmentCombo->setItemText(0, QCoreApplication::translate("Voters", "Business", nullptr));
        txtDepartmentCombo->setItemText(1, QCoreApplication::translate("Voters", "Engineering", nullptr));
        txtDepartmentCombo->setItemText(2, QCoreApplication::translate("Voters", "Hospitality", nullptr));
        txtDepartmentCombo->setItemText(3, QCoreApplication::translate("Voters", "Cosmotology", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Voters: public Ui_Voters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOTERS_H
