#ifndef CASTEDVOTES_H
#define CASTEDVOTES_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QPixmap>
#include <QStandardItemModel>
#include <QHeaderView>
#include <QIcon>

#include "mydb.h"

namespace Ui {
class CastedVotes;
}

class CastedVotes : public QDialog
{
    Q_OBJECT

public:
    explicit CastedVotes(QWidget *parent = nullptr);
    ~CastedVotes();


private slots:
    void on_btn_back_clicked();
    void on_btn_Reset_clicked();
    void on_btn_search_Candidet_clicked();
    void on_btn_search_Voter_clicked();

private:
    Ui::CastedVotes *ui;
    QStandardItemModel *m_model = nullptr;

    QString m_currentStudentID;
    QString m_currentPosition;

    void setupTableView();
    void clearTableView();
    void populateCandidatesForPosition(const QString &position);
    void handleVoteToggle(QStandardItem *item);
    bool loadVoterByID(const QString &studentID);
    bool castVote(const QString &studentID, const QString &candidateID, const QString &position);
};

#endif // CASTEDVOTES_H
