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
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Voters
{
public:

    void setupUi(QDialog *Voters)
    {
        if (Voters->objectName().isEmpty())
            Voters->setObjectName("Voters");
        Voters->resize(873, 587);

        retranslateUi(Voters);

        QMetaObject::connectSlotsByName(Voters);
    } // setupUi

    void retranslateUi(QDialog *Voters)
    {
        Voters->setWindowTitle(QCoreApplication::translate("Voters", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Voters: public Ui_Voters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOTERS_H
