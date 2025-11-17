#ifndef CANDIDATES_H
#define CANDIDATES_H

#include <QDialog>

namespace Ui {
class Candidates;
}

class Candidates : public QDialog
{
    Q_OBJECT

public:
    explicit Candidates(QWidget *parent = nullptr);
    ~Candidates();

private slots:
    void on_btn_Candidate_back_clicked();

    void on_btn_Reset_Candidate_Search_clicked();

    void on_btn_search_clicked();

private:
    Ui::Candidates *ui;
};

#endif // CANDIDATES_H
