#ifndef CANDIDATES_H
#define CANDIDATES_H

#include <QDialog>
#include <QSqlQuery>
#include "mydb.h"

namespace Ui {
class Candidates;
}

class Candidates : public QDialog
{
    Q_OBJECT

public:
    explicit Candidates(QWidget *parent = nullptr);
    ~Candidates();


private slots:
    void on_btn_Candidate_back_clicked();

    void on_btn_Reset_Candidate_Search_clicked();

    void on_btn_search_clicked();

    void on_btn_candidate_view_clicked();

private:
    Ui::Candidates *ui;
    void populateTable(QSqlQuery &query);
};

#endif // CANDIDATES_H
