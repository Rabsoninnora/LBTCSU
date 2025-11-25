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

    //setStyleSheet("background-color: #F5F5F5;");
    /*

      ui->btn_Dashboard_logout->setStyleSheet("background-color: #2980b9; color: white; padding: 6px;");
      ui->btn_Add_candidate->setStyleSheet("background-color: #2980b9; color: white; padding: 6px;");
      ui->btn_cadidates_records->setStyleSheet("background-color: #2980b9; color: white; padding: 6px;");
      ui->btn_view_edit_candidate->setStyleSheet("background-color: #2980b9; color: white; padding: 6px;");
      ui->btn_voter_records->setStyleSheet("background-color: #2980b9; color: white; padding: 6px;");

*/





}

Dashboard::~Dashboard()
{
    delete ui;
    delete ptrCandidates;
    delete ptrRegisterCandidate;
    delete ptrVoters;
    delete ptrRegisterVoter;
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

}

