#include "voterrecords.h"
#include "ui_voterrecords.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
#include <QPixmap>
#include <QByteArray>
#include <QLabel>

VoterRecords::VoterRecords(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::VoterRecords)
{
    ui->setupUi(this);

    setWindowFlags(windowFlags()|Qt::WindowStaysOnTopHint);
    setWindowTitle("v1.0");

    ui->tableWidget_2->setVisible(false); // hide table initially
    ui->tableWidget_2->setIconSize(QSize(64,64)); // thumbnail size
}

VoterRecords::~VoterRecords()
{
    delete ui;
}

void VoterRecords::on_btn_Reset_Voter_clicked()
{
    ui->txt_Search_Voter->clear();
    ui->tableWidget_2->clear();
    ui->tableWidget_2->setVisible(false);

}


void VoterRecords::on_btn_voter_view_clicked()
{

}


void VoterRecords::on_btn_search_voter_clicked()
{

}


void VoterRecords::on_btn_Voter_back_clicked()
{

}

