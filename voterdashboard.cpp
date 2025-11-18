#include "voterdashboard.h"
#include "ui_voterdashboard.h"

VoterDashboard::VoterDashboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VoterDashboard)
{
    ui->setupUi(this);
}

VoterDashboard::~VoterDashboard()
{
    delete ui;
}
