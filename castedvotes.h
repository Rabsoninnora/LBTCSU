#ifndef CASTEDVOTES_H
#define CASTEDVOTES_H

#include <QDialog>

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
};

#endif // CASTEDVOTES_H
