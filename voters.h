#ifndef VOTERS_H
#define VOTERS_H

#include <QDialog>

namespace Ui {
class Voters;
}

class Voters : public QDialog
{
    Q_OBJECT

public:
    explicit Voters(QWidget *parent = nullptr);
    ~Voters();

private:
    Ui::Voters *ui;
};

#endif // VOTERS_H
