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

private:
    Ui::ViewResults *ui;
};

#endif // VIEWRESULTS_H
