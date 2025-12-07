#ifndef VOTERRECORDS_H
#define VOTERRECORDS_H

#include <QDialog>
#include <QSqlQuery>
#include "mydb.h"

namespace Ui {
class VoterRecords;
}

class VoterRecords : public QDialog
{
    Q_OBJECT

public:
    explicit VoterRecords(QWidget *parent = nullptr);
    ~VoterRecords();

private:
    Ui::VoterRecords *ui;
};

#endif // VOTERRECORDS_H
