#include "voters.h"
#include "ui_voters.h"

Voters::Voters(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Voters)
{
    ui->setupUi(this);
}

Voters::~Voters()
{
    delete ui;
}
