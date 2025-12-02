#include "voterdashboard.h"
#include "ui_voterdashboard.h"
#include <QPixmap>

VoterDashboard::VoterDashboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VoterDashboard)
{
    ui->setupUi(this);
    QPixmap bg(":C:/VoltingSystem/VotingSystem/st.jpg");
    ui->BodyLabel->setPixmap(bg.scaled(ui->BodyLabel->size(),
                                       Qt::KeepAspectRatioByExpanding,
                                       Qt::SmoothTransformation));
    ui->BodyLabel->setScaledContents(true); // ensures it fills the label

    ptrCandidates =new Candidates(this);
    ptrCastVote =new CastVote(this);
    ptrCastedVotes = new CastedVotes(this);

}

VoterDashboard::~VoterDashboard()
{
    delete ui;
    delete ptrCandidates;
    delete ptrCastVote;
    delete ptrCastedVotes;
}

void VoterDashboard::on_btn_logout_clicked()
{
    this->close();
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
    ptrCastedVotes->show();
}

