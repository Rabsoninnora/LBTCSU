#include "castedvotes.h"
#include "ui_castedvotes.h"

CastedVotes::CastedVotes(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CastedVotes)
{
    ui->setupUi(this);
}

CastedVotes::~CastedVotes()
{
    delete ui;
}

void CastedVotes::on_btn_back_clicked()
{
    this->close();
}


void CastedVotes::on_btn_Reset_clicked()
{

}


void CastedVotes::on_btn_search_Candidet_clicked()
{

}


void CastedVotes::on_btn_search_Voter_clicked()
{

}

