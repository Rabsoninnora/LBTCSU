/********************************************************************************
** Form generated from reading UI file 'registercandidate.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERCANDIDATE_H
#define UI_REGISTERCANDIDATE_H

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

class Ui_RegisterCandidate
{
public:
    QFrame *frame;
    QLineEdit *lineEdit_ID;
    QLineEdit *lineEdit_Fname;
    QLineEdit *lineEdit_Course;
    QLabel *image_field;
    QLineEdit *lineEdit_Department;
    QPushButton *btn_browse_image;
    QPushButton *btn_submit;
    QPushButton *btn_Reset_Lecturer_2;
    QLineEdit *lineEdit_LastName;
    QLineEdit *lineEdit_NRC;
    QComboBox *txtPositionCombo;
    QLabel *label;
    QPushButton *btn_RegisterCandidate_back;
    QPushButton *StudentRegistration_2;
    QPushButton *pushButton;

    void setupUi(QDialog *RegisterCandidate)
    {
        if (RegisterCandidate->objectName().isEmpty())
            RegisterCandidate->setObjectName("RegisterCandidate");
        RegisterCandidate->resize(1154, 694);
        RegisterCandidate->setStyleSheet(QString::fromUtf8("background-color: #2980b9;"));
        frame = new QFrame(RegisterCandidate);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(80, 140, 1011, 521));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        lineEdit_ID = new QLineEdit(frame);
        lineEdit_ID->setObjectName("lineEdit_ID");
        lineEdit_ID->setGeometry(QRect(270, 10, 311, 51));
        lineEdit_ID->setStyleSheet(QString::fromUtf8("   \n"
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
        lineEdit_ID->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_Fname = new QLineEdit(frame);
        lineEdit_Fname->setObjectName("lineEdit_Fname");
        lineEdit_Fname->setGeometry(QRect(610, 10, 311, 51));
        lineEdit_Fname->setStyleSheet(QString::fromUtf8("   \n"
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
        lineEdit_Fname->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_Course = new QLineEdit(frame);
        lineEdit_Course->setObjectName("lineEdit_Course");
        lineEdit_Course->setGeometry(QRect(270, 160, 311, 51));
        lineEdit_Course->setStyleSheet(QString::fromUtf8("   \n"
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
        lineEdit_Course->setAlignment(Qt::AlignmentFlag::AlignCenter);
        image_field = new QLabel(frame);
        image_field->setObjectName("image_field");
        image_field->setGeometry(QRect(10, 30, 231, 181));
        image_field->setStyleSheet(QString::fromUtf8("  \n"
" QLabel {\n"
"  border:2px solid green;\n"
"  border-radius: 10px;\n"
"  padding: 8px 8px;\n"
"  background: rgb(255, 255, 255);\n"
" \n"
"};"));
        lineEdit_Department = new QLineEdit(frame);
        lineEdit_Department->setObjectName("lineEdit_Department");
        lineEdit_Department->setGeometry(QRect(610, 160, 311, 51));
        lineEdit_Department->setStyleSheet(QString::fromUtf8("   \n"
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
        lineEdit_Department->setAlignment(Qt::AlignmentFlag::AlignCenter);
        btn_browse_image = new QPushButton(frame);
        btn_browse_image->setObjectName("btn_browse_image");
        btn_browse_image->setGeometry(QRect(60, 220, 131, 41));
        btn_browse_image->setStyleSheet(QString::fromUtf8("    \n"
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
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::FolderOpen));
        btn_browse_image->setIcon(icon);
        btn_submit = new QPushButton(frame);
        btn_submit->setObjectName("btn_submit");
        btn_submit->setGeometry(QRect(267, 310, 111, 41));
        btn_submit->setStyleSheet(QString::fromUtf8("   \n"
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
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSave));
        btn_submit->setIcon(icon1);
        btn_Reset_Lecturer_2 = new QPushButton(frame);
        btn_Reset_Lecturer_2->setObjectName("btn_Reset_Lecturer_2");
        btn_Reset_Lecturer_2->setGeometry(QRect(810, 310, 111, 41));
        btn_Reset_Lecturer_2->setStyleSheet(QString::fromUtf8("   \n"
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
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::ViewRestore));
        btn_Reset_Lecturer_2->setIcon(icon2);
        lineEdit_LastName = new QLineEdit(frame);
        lineEdit_LastName->setObjectName("lineEdit_LastName");
        lineEdit_LastName->setGeometry(QRect(610, 90, 311, 51));
        lineEdit_LastName->setStyleSheet(QString::fromUtf8("   \n"
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
        lineEdit_LastName->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_NRC = new QLineEdit(frame);
        lineEdit_NRC->setObjectName("lineEdit_NRC");
        lineEdit_NRC->setGeometry(QRect(270, 90, 311, 51));
        lineEdit_NRC->setStyleSheet(QString::fromUtf8("   \n"
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
        lineEdit_NRC->setAlignment(Qt::AlignmentFlag::AlignCenter);
        txtPositionCombo = new QComboBox(frame);
        txtPositionCombo->addItem(QString());
        txtPositionCombo->addItem(QString());
        txtPositionCombo->addItem(QString());
        txtPositionCombo->addItem(QString());
        txtPositionCombo->addItem(QString());
        txtPositionCombo->addItem(QString());
        txtPositionCombo->setObjectName("txtPositionCombo");
        txtPositionCombo->setGeometry(QRect(610, 230, 311, 41));
        QFont font;
        font.setPointSize(11);
        font.setWeight(QFont::Medium);
        font.setItalic(false);
        txtPositionCombo->setFont(font);
        txtPositionCombo->setStyleSheet(QString::fromUtf8("   \n"
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
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(430, 240, 131, 31));
        btn_RegisterCandidate_back = new QPushButton(RegisterCandidate);
        btn_RegisterCandidate_back->setObjectName("btn_RegisterCandidate_back");
        btn_RegisterCandidate_back->setGeometry(QRect(1063, 47, 91, 41));
        btn_RegisterCandidate_back->setStyleSheet(QString::fromUtf8("    \n"
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
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::GoHome));
        btn_RegisterCandidate_back->setIcon(icon3);
        StudentRegistration_2 = new QPushButton(RegisterCandidate);
        StudentRegistration_2->setObjectName("StudentRegistration_2");
        StudentRegistration_2->setGeometry(QRect(300, 90, 641, 41));
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
        pushButton = new QPushButton(RegisterCandidate);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 1154, 41));
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

        retranslateUi(RegisterCandidate);

        QMetaObject::connectSlotsByName(RegisterCandidate);
    } // setupUi

    void retranslateUi(QDialog *RegisterCandidate)
    {
        RegisterCandidate->setWindowTitle(QCoreApplication::translate("RegisterCandidate", "Dialog", nullptr));
        lineEdit_ID->setPlaceholderText(QCoreApplication::translate("RegisterCandidate", "* Enter Candidate ID", nullptr));
        lineEdit_Fname->setPlaceholderText(QCoreApplication::translate("RegisterCandidate", "* Enter  Candidate Name", nullptr));
        lineEdit_Course->setPlaceholderText(QCoreApplication::translate("RegisterCandidate", "* Enter  Candidate Course", nullptr));
        image_field->setText(QString());
        lineEdit_Department->setPlaceholderText(QCoreApplication::translate("RegisterCandidate", "* Enter Department", nullptr));
        btn_browse_image->setText(QCoreApplication::translate("RegisterCandidate", "Browse image", nullptr));
        btn_submit->setText(QCoreApplication::translate("RegisterCandidate", "Submit", nullptr));
        btn_Reset_Lecturer_2->setText(QCoreApplication::translate("RegisterCandidate", "Reset", nullptr));
        lineEdit_LastName->setPlaceholderText(QCoreApplication::translate("RegisterCandidate", "* Enter  Candidate Last Name", nullptr));
        lineEdit_NRC->setPlaceholderText(QCoreApplication::translate("RegisterCandidate", "* Enter  Candidate NRC", nullptr));
        txtPositionCombo->setItemText(0, QCoreApplication::translate("RegisterCandidate", "President", nullptr));
        txtPositionCombo->setItemText(1, QCoreApplication::translate("RegisterCandidate", "Vice President", nullptr));
        txtPositionCombo->setItemText(2, QCoreApplication::translate("RegisterCandidate", "General Secretary", nullptr));
        txtPositionCombo->setItemText(3, QCoreApplication::translate("RegisterCandidate", "Sports Coordinator", nullptr));
        txtPositionCombo->setItemText(4, QCoreApplication::translate("RegisterCandidate", "Entertainment Coordinator", nullptr));
        txtPositionCombo->setItemText(5, QCoreApplication::translate("RegisterCandidate", "Finance Coordinator", nullptr));

        label->setText(QCoreApplication::translate("RegisterCandidate", "Choose Position ===>", nullptr));
        btn_RegisterCandidate_back->setText(QCoreApplication::translate("RegisterCandidate", "Back", nullptr));
        StudentRegistration_2->setText(QCoreApplication::translate("RegisterCandidate", "CANDIDATE REGISTRATION FORM", nullptr));
        pushButton->setText(QCoreApplication::translate("RegisterCandidate", " LBTCSU VOTING  SYSTEM", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterCandidate: public Ui_RegisterCandidate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERCANDIDATE_H
