#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QDialog>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include "registercandidate.h"
#include "candidates.h"
namespace Ui {
class Dashboard;
}

class Dashboard : public QDialog
{
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = nullptr);
    ~Dashboard();

private slots:


    void on_btn_Add_candidate_clicked();

    void on_btn_cadidates_records_clicked();

    void on_btn_Dashboard_logout_clicked();

private:
    QLabel *headerLabel;
    Ui::Dashboard *ui;
    RegisterCandidate *ptrRegisterCandidate;
    Candidates  *ptrCandidates;

};

#endif // DASHBOARD_H
