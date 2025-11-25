#include "voterdashboard.h"
#include "ui_voterdashboard.h"

VoterDashboard::VoterDashboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VoterDashboard)
{
    ui->setupUi(this);
    ptrCandidates =new Candidates(this);

}

VoterDashboard::~VoterDashboard()
{
    delete ui;
    delete ptrCandidates;
}

void VoterDashboard::on_btn_logout_clicked()
{

}


void VoterDashboard::on_btn_view_candidate_clicked()
{
  ptrCandidates->show();
}


void VoterDashboard::on_btn_AccountView_clicked()
{

}


void VoterDashboard::on_btn_CastVote_clicked()
{

}

