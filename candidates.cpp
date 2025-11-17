#include "candidates.h"
#include "ui_candidates.h"

Candidates::Candidates(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Candidates)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags()|Qt::WindowStaysOnTopHint);
    setWindowTitle("v1.0");
}

Candidates::~Candidates()
{
    delete ui;
}

void Candidates::on_btn_Candidate_back_clicked()
{
    this->close();
}


void Candidates::on_btn_Reset_Candidate_Search_clicked()
{

}


void Candidates::on_btn_search_clicked()
{

}

