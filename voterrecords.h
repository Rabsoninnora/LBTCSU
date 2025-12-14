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


private slots:
    void on_btn_Reset_Voter_clicked();

    void on_btn_voter_view_clicked();

    void on_btn_search_voter_clicked();

    void on_btn_Voter_back_clicked();

private:
    Ui::VoterRecords *ui;
    void populateTable(QSqlQuery &query);
};

#endif // VOTERRECORDS_H
