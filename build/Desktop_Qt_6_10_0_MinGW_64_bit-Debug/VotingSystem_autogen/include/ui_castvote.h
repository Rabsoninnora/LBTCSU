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
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_CastVote
{
public:

    void setupUi(QDialog *CastVote)
    {
        if (CastVote->objectName().isEmpty())
            CastVote->setObjectName("CastVote");
        CastVote->resize(917, 641);

        retranslateUi(CastVote);

        QMetaObject::connectSlotsByName(CastVote);
    } // setupUi

    void retranslateUi(QDialog *CastVote)
    {
        CastVote->setWindowTitle(QCoreApplication::translate("CastVote", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CastVote: public Ui_CastVote {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASTVOTE_H
