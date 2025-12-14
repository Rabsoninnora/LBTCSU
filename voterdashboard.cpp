#include "voterdashboard.h"
#include "ui_voterdashboard.h"
#include <QPixmap>

VoterDashboard::VoterDashboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VoterDashboard)
{
    ui->setupUi(this);

    // Load image from your folder
    QString imagePath = "C:/VoltingSystem/VotingSystem/images/perfect.png";
    QPixmap pixmap(imagePath);

    if (!pixmap.isNull()) {
        ui->BodyLabel->setPixmap(pixmap.scaled(ui->BodyLabel->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    } else {
        qDebug() << "Image not found at:" << imagePath;
    }


    ptrCandidates =new Candidates(this);
    ptrCastVote =new CastVote(this);
    ptrCastedVotes = new CastedVotes(this);

}

void VoterDashboard::resizeEvent(QResizeEvent *event)
{
    QDialog::resizeEvent(event);
    QPixmap pixmap("C:/VoltingSystem/VotingSystem/images/perfect.png");
    if (!pixmap.isNull()) {
        ui->BodyLabel->setPixmap(pixmap.scaled(ui->BodyLabel->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    }
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

