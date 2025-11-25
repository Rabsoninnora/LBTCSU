#include "castvote.h"
#include <QVBoxLayout>
#include <QFormLayout>
#include <QHBoxLayout>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>

CastVote::CastVote(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle("Cast Vote");
    setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);
    setFixedSize(520, 300);

    // Build UI
    lineEditStudentID = new QLineEdit(this);
    lineEditStudentID->setPlaceholderText("Enter Student ID");

    lineEditCandidateName = new QLineEdit(this);
    lineEditCandidateName->setPlaceholderText("Enter Candidate name (First or Last)");

    labelVoterDetails = new QLabel(this);
    labelCandidateDetails = new QLabel(this);
    labelStatus = new QLabel(this);
    labelStatus->setStyleSheet("color:#b00020;"); // error color by default

    btnSearchVoter = new QPushButton("Search Voter", this);
    btnSearchCandidate = new QPushButton("Search Candidate", this);
    btnCastVote = new QPushButton("Cast Vote", this);
    btnReset = new QPushButton("Reset", this);

    btnCastVote->setEnabled(false); // enabled only when both voter and candidate are selected

    // Layout
    QFormLayout *form = new QFormLayout();
    form->addRow("Student ID:", lineEditStudentID);
    form->addRow("Candidate Name:", lineEditCandidateName);

    QHBoxLayout *searchButtons = new QHBoxLayout();
    searchButtons->addWidget(btnSearchVoter);
    searchButtons->addWidget(btnSearchCandidate);

    QVBoxLayout *infoLayout = new QVBoxLayout();
    infoLayout->addWidget(new QLabel("Voter Details:"));
    infoLayout->addWidget(labelVoterDetails);
    infoLayout->addWidget(new QLabel("Candidate Details:"));
    infoLayout->addWidget(labelCandidateDetails);

    QHBoxLayout *actionButtons = new QHBoxLayout();
    actionButtons->addWidget(btnCastVote);
    actionButtons->addWidget(btnReset);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addLayout(form);
    mainLayout->addLayout(searchButtons);
    mainLayout->addLayout(infoLayout);
    mainLayout->addLayout(actionButtons);
    mainLayout->addWidget(labelStatus);

    setLayout(mainLayout);

    // Connections
    connect(btnSearchVoter, &QPushButton::clicked, this, &CastVote::on_btnSearchVoter_clicked);
    connect(btnSearchCandidate, &QPushButton::clicked, this, &CastVote::on_btnSearchCandidate_clicked);
    connect(btnCastVote, &QPushButton::clicked, this, &CastVote::on_btnCastVote_clicked);
    connect(btnReset, &QPushButton::clicked, this, &CastVote::on_btnReset_clicked);
}

CastVote::~CastVote()
{
    // Qt will clean up child widgets
}

void CastVote::setStatusError(const QString &msg)
{
    labelStatus->setStyleSheet("color:#b00020;");
    labelStatus->setText(msg);
}

void CastVote::setStatusInfo(const QString &msg)
{
    labelStatus->setStyleSheet("color:#005f2d;");
    labelStatus->setText(msg);
}

void CastVote::clearVoterSelection()
{
    selectedStudentID.clear();
    labelVoterDetails->clear();
}

void CastVote::clearCandidateSelection()
{
    selectedCandidateID.clear();
    selectedCandidatePosition.clear();
    labelCandidateDetails->clear();
}

void CastVote::on_btnSearchVoter_clicked()
{
    clearVoterSelection();
    btnCastVote->setEnabled(false);

    const QString studentID = lineEditStudentID->text().trimmed();
    if (studentID.isEmpty()) {
        setStatusError("Please enter a Student ID.");
        return;
    }

    QSqlDatabase db = MyDB::getInstance()->getDBInstance();
    QSqlQuery q(db);
    q.prepare("SELECT Fname, Lname, Department FROM Voters WHERE StudentID = :sid");
    q.bindValue(":sid", studentID);

    if (!q.exec()) {
        setStatusError("Database error searching voter: " + q.lastError().text());
        return;
    }

    if (!q.next()) {
        setStatusError("No voter found with Student ID: " + studentID);
        return;
    }

    const QString fname = q.value(0).toString();
    const QString lname = q.value(1).toString();
    const QString dept  = q.value(2).toString();

    selectedStudentID = studentID;
    labelVoterDetails->setText(QString("%1 %2 | %3").arg(fname, lname, dept));
    setStatusInfo("Voter found. Now search candidate.");

    // Enable cast if candidate already selected
    btnCastVote->setEnabled(!selectedCandidateID.isEmpty());
}

void CastVote::on_btnSearchCandidate_clicked()
{
    clearCandidateSelection();
    btnCastVote->setEnabled(false);

    const QString nameQuery = lineEditCandidateName->text().trimmed();
    if (nameQuery.isEmpty()) {
        setStatusError("Please enter a candidate name (first or last).");
        return;
    }

    QSqlDatabase db = MyDB::getInstance()->getDBInstance();
    QSqlQuery q(db);
    // Search by first OR last name (exact match). You may switch to LIKE for partial matches.
    q.prepare("SELECT CandidateID, Fname, Lname, Position "
              "FROM Candidates "
              "WHERE Fname = :name OR Lname = :name");
    q.bindValue(":name", nameQuery);

    if (!q.exec()) {
        setStatusError("Database error searching candidate: " + q.lastError().text());
        return;
    }

    if (!q.next()) {
        setStatusError("No candidate found with this name.");
        return;
    }

    selectedCandidateID = q.value(0).toString();
    const QString fname = q.value(1).toString();
    const QString lname = q.value(2).toString();
    selectedCandidatePosition = q.value(3).toString();

    labelCandidateDetails->setText(QString("%1 %2 | Position: %3")
                                       .arg(fname, lname, selectedCandidatePosition));
    setStatusInfo("Candidate found. You can cast your vote.");

    // Enable cast if voter already selected
    btnCastVote->setEnabled(!selectedStudentID.isEmpty());
}

void CastVote::on_btnCastVote_clicked()
{
    if (selectedStudentID.isEmpty()) {
        setStatusError("Select a voter first (search by Student ID).");
        return;
    }
    if (selectedCandidateID.isEmpty() || selectedCandidatePosition.isEmpty()) {
        setStatusError("Select a candidate first (search by name).");
        return;
    }

    QSqlDatabase db = MyDB::getInstance()->getDBInstance();
    QSqlQuery q(db);

    // Enforce "no double vote per position" using a uniqueness check or relying on DB constraint
    QSqlQuery chk(db);
    chk.prepare("SELECT COUNT(*) FROM VotesTotal WHERE StudentID = :sid AND Position = :pos");
    chk.bindValue(":sid", selectedStudentID);
    chk.bindValue(":pos", selectedCandidatePosition);
    if (!chk.exec() || !chk.next()) {
        setStatusError("Database error validating vote uniqueness: " + chk.lastError().text());
        return;
    }
    if (chk.value(0).toInt() > 0) {
        setStatusError("You have already voted for this position.");
        return;
    }

    // Cast vote
    db.transaction();
    q.prepare("INSERT INTO VotesTotal (StudentID, CandidateID, Position) "
              "VALUES (:sid, :cid, :pos)");
    q.bindValue(":sid", selectedStudentID);
    q.bindValue(":cid", selectedCandidateID);
    q.bindValue(":pos", selectedCandidatePosition);

    if (!q.exec()) {
        db.rollback();
        setStatusError("Failed to cast vote: " + q.lastError().text());
        return;
    }

    db.commit();
    QMessageBox::information(this, "Success", "Vote cast successfully!");
    on_btnReset_clicked();
}

void CastVote::on_btnReset_clicked()
{
    lineEditStudentID->clear();
    lineEditCandidateName->clear();
    clearVoterSelection();
    clearCandidateSelection();
    setStatusInfo("Form reset. Enter Student ID and candidate name to continue.");
    btnCastVote->setEnabled(false);
}
