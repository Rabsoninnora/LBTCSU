#ifndef VIEWRESULTS_H
#define VIEWRESULTS_H

#include <QDialog>

namespace Ui {
class ViewResults;
}

class ViewResults : public QDialog
{
    Q_OBJECT

public:
    explicit ViewResults(QWidget *parent = nullptr);
    ~ViewResults();

private slots:
    void on_btn_search_Winner_clicked();
    void on_btn_View_All_clicked();
    void on_btn_result_reset_clicked();

    void on_btn_ViewResult_back_clicked();

private:
    Ui::ViewResults *ui;

    // Helper to clear and hide results frame
    void clearResults();
};

#endif // VIEWRESULTS_H
