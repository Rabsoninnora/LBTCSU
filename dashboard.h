#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QDialog>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include "registercandidate.h"
#include "candidates.h"
#include "voters.h"
#include "registervoter.h"
namespace Ui {
class Dashboard;
}

class Dashboard : public QDialog
{
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = nullptr);
    ~Dashboard();

private slots:


    void on_btn_Add_candidate_clicked();

    void on_btn_cadidates_records_clicked();

    void on_btn_Dashboard_logout_clicked();

    void on_btn_Register_Voter_clicked();

    void on_btn_voter_account_clicked();

    void on_btn_voter_records_clicked();

private:
    QLabel *headerLabel;
    Ui::Dashboard *ui;
    RegisterCandidate *ptrRegisterCandidate;
    Candidates  *ptrCandidates;
    Voters      *ptrVoters;
    RegisterVoter *ptrRegisterVoter;

};

#endif // DASHBOARD_H
