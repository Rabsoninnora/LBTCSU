#ifndef REGISTERVOTER_H
#define REGISTERVOTER_H

#include <QDialog>
#include <QComboBox>
#include "mydb.h"

class RegisterVoter : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterVoter(QWidget *parent = nullptr);
    ~RegisterVoter();

private slots:
    void on_registerButton_clicked();
    void on_cancelButton_clicked();

private:
    MyDB *dbManager;

    QLineEdit *studentIDLineEdit;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QComboBox *roleComboBox;
    QPushButton *registerButton;
    QPushButton *cancelButton;
    QLabel *messageLabel;
};

#endif // REGISTERVOTER_H
