#ifndef VOTERDASHBOARD_H
#define VOTERDASHBOARD_H

#include <QDialog>

namespace Ui {
class VoterDashboard;
}

class VoterDashboard : public QDialog
{
    Q_OBJECT

public:
    explicit VoterDashboard(QWidget *parent = nullptr);
    ~VoterDashboard();

private:
    Ui::VoterDashboard *ui;
};

#endif // VOTERDASHBOARD_H
