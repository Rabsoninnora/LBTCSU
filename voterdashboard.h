#ifndef VOTERDASHBOARD_H
#define VOTERDASHBOARD_H

#include <QDialog>
#include "candidates.h"
#include "ui_castvote.h"
#include "castvote.h"
#include "castedvotes.h"

namespace Ui {
class VoterDashboard;
}

class VoterDashboard : public QDialog
{
    Q_OBJECT

public:
    explicit VoterDashboard(QWidget *parent = nullptr);
    ~VoterDashboard();

protected:
    void resizeEvent(QResizeEvent *event) override;

private slots:
    void on_btn_logout_clicked();

    void on_btn_view_candidate_clicked();

    void on_btn_AccountView_clicked();

    void on_btn_CastVote_clicked();

private:
    Ui::VoterDashboard *ui;
    Candidates *ptrCandidates;
    CastVote  *ptrCastVote;
    CastedVotes *ptrCastedVotes;
};

#endif // VOTERDASHBOARD_H
