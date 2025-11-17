/********************************************************************************
** Form generated from reading UI file 'useraddmin.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERADDMIN_H
#define UI_USERADDMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_UserAddmin
{
public:

    void setupUi(QDialog *UserAddmin)
    {
        if (UserAddmin->objectName().isEmpty())
            UserAddmin->setObjectName("UserAddmin");
        UserAddmin->resize(400, 300);

        retranslateUi(UserAddmin);

        QMetaObject::connectSlotsByName(UserAddmin);
    } // setupUi

    void retranslateUi(QDialog *UserAddmin)
    {
        UserAddmin->setWindowTitle(QCoreApplication::translate("UserAddmin", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserAddmin: public Ui_UserAddmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERADDMIN_H
