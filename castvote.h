#ifndef CASTVOTE_H
#define CASTVOTE_H

#include <QDialog>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QSqlDatabase>
#include "mydb.h"

class CastVote : public QDialog
{
    Q_OBJECT

public:
    explicit CastVote(QWidget *parent = nullptr);
    ~CastVote();

private slots:
    void on_btnSearchVoter_clicked();
    void on_btnSearchCandidate_clicked();
    void on_btnCastVote_clicked();
    void on_btnReset_clicked();

private:
    // UI elements (programmatic UI)
    QLineEdit *lineEditStudentID;
    QLineEdit *lineEditCandidateName;
    QLabel *labelVoterDetails;
    QLabel *labelCandidateDetails;
    QLabel *labelStatus;
    QPushButton *btnSearchVoter;
    QPushButton *btnSearchCandidate;
    QPushButton *btnCastVote;
    QPushButton *btnReset;

    // Selected state for casting vote
    QString selectedStudentID;
    QString selectedCandidateID;
    QString selectedCandidatePosition;

    // Helpers
    void clearCandidateSelection();
    void clearVoterSelection();
    void setStatusError(const QString &msg);
    void setStatusInfo(const QString &msg);
};

#endif // CASTVOTE_H
