#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include "useraddmin.h"
#include "registervoter.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_admin_login_clicked();
    void on_btn_admin_signup_clicked();

private:
    Ui::MainWindow *ui;
    //void setupUI();
  UserAddmin *ptrUserAddmin;
  RegisterVoter *ptrRegisterVoter;
};

#endif // MAINWINDOW_H
