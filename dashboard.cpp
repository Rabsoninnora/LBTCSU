#include "dashboard.h"
#include "ui_dashboard.h"
#include <QFont>
#include <QMessageBox>
#include "QLabel"
#include "QFrame"
#include "QPixmap"
#include "QPalette"

Dashboard::Dashboard(QWidget *parent)
    : QDialog(parent), ui(new Ui::Dashboard)
{
    setWindowTitle("LBTCSU Voting System");
   // setFixedSize(1270, 667);
    ui->setupUi(this);
    ptrRegisterCandidate = new RegisterCandidate();
    ptrRegisterVoter = new RegisterVoter();
    ptrCandidates =new Candidates();
    ptrVoters = new Voters();
    ptrVoterRecords =new VoterRecords(this);





}

Dashboard::~Dashboard()
{
    delete ui;
    delete ptrCandidates;
    delete ptrRegisterCandidate;
    delete ptrVoters;
    delete ptrRegisterVoter;
    delete ptrVoterRecords;
}


void Dashboard::on_btn_Add_candidate_clicked()
{
    ptrRegisterCandidate->show();
}


void Dashboard::on_btn_cadidates_records_clicked()
{
   ptrCandidates->show();
}


void Dashboard::on_btn_Dashboard_logout_clicked()
{
    this->close();
}


void Dashboard::on_btn_Register_Voter_clicked()
{
    ptrVoters->show();
}


void Dashboard::on_btn_voter_account_clicked()
{
     ptrRegisterVoter->show();
}


void Dashboard::on_btn_voter_records_clicked()
{
     ptrVoterRecords->show();
}

