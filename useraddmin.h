#ifndef USERADDMIN_H
#define USERADDMIN_H

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QComboBox>
#include "dashboard.h"
#include "voterdashboard.h"
class UserAddmin : public QDialog
{
    Q_OBJECT

public:
    explicit UserAddmin(QWidget *parent = nullptr);

private slots:
    void handleSubmit();
    void handleReset();

private:
    Dashboard *ptrDashboard;
    VoterDashboard *ptrVoterDashboard;

    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QComboBox *roleComboBox;
    QPushButton *submitButton;
    QPushButton *resetButton;

};

#endif // USERADDMIN_H
