#include "useraddmin.h"
#include <QMessageBox>

#include "mydb.h"
#include <QCryptographicHash>

UserAddmin::UserAddmin(QWidget *parent)
    : QDialog(parent)
{

    setWindowTitle("Login");
    resize(400, 250);  // This to Increase my dialog size

    setWindowFlags(windowFlags()| Qt::WindowStaysOnTopHint);
    ptrVoterDashboard = new VoterDashboard(this);

    // this to Create  my input widgets
    usernameLineEdit = new QLineEdit(this);
    passwordLineEdit = new QLineEdit(this);
    roleComboBox = new QComboBox(this);

    // This to Configure my  widgets
    passwordLineEdit->setEchoMode(QLineEdit::Password);
    roleComboBox->addItems({"Admin", "Student"});

    usernameLineEdit->setMinimumHeight(30);
    passwordLineEdit->setMinimumHeight(30);
    roleComboBox->setMinimumHeight(30);

    submitButton = new QPushButton("Submit", this);
    resetButton = new QPushButton("Reset", this);

    submitButton->setStyleSheet("background-color: #2980b9; color: white; padding: 6px;");
    resetButton->setStyleSheet("background-color: #7f8c8d; color: white; padding: 6px;");

    // Layout setup
    QFormLayout *formLayout = new QFormLayout;
    formLayout->addRow("Username:", usernameLineEdit);
    formLayout->addRow("Password:", passwordLineEdit);
    formLayout->addRow("Role:", roleComboBox);

    QHBoxLayout *buttonLayout = new QHBoxLayout;
    buttonLayout->addWidget(submitButton);
    buttonLayout->addWidget(resetButton);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addLayout(formLayout);
    mainLayout->addLayout(buttonLayout);

    // Signal-slot connections
    connect(submitButton, &QPushButton::clicked, this, &UserAddmin::handleSubmit);
    connect(resetButton, &QPushButton::clicked, this, &UserAddmin::handleReset);
}







void UserAddmin::handleSubmit()
{
    QString username = usernameLineEdit->text().trimmed();
    QString password = passwordLineEdit->text().trimmed();
    QString role = roleComboBox->currentText().trimmed();

    if (username.isEmpty() || password.isEmpty() || role.isEmpty()) {
        QMessageBox::warning(this, "Missing Info", "Please fill in all fields.");
        return;
    }



    /////////////////////////////////////////////////////////////////////
    // Hash the password
    QByteArray hashedPassword = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex();
    //Check againist the appropriate table based on the role
    QSqlQuery GetUser(MyDB::getInstance()->getDBInstance());

    if (role=="Admin"){
        GetUser .prepare("SELECT * FROM AdminDetails WHERE username = :username AND password = :password");
    }else if(role=="Student"){
        GetUser .prepare("SELECT * FROM AdminDetails WHERE username = :username AND password = :password");
    } else{
        QMessageBox::warning(this, "Warning!", "Please select a valid account type.");
        return; // Exit if no valid role is selected
    }


    ////////////////////////////////////////////////////////////////////////////////////////////
    GetUser.bindValue(":username", username);
    GetUser.bindValue(":password", password);// use hashed password


    if (GetUser.exec()) {
        int UserFindCount = 0;
        while (GetUser.next()) {
            UserFindCount++;
        }
        if (UserFindCount == 1) {
            if (role == "Admin") {
                ptrDashboard = new Dashboard(this);
                ptrDashboard->show();
            } else if (role == "Student") {
            ptrVoterDashboard->show();


            }
            this->hide();
        } else {
            QMessageBox::warning(this, "Warning!", "Invalid Username or Password.");
        }
    } else {
        QMessageBox::critical(this, "Database Error", "Failed to execute query: " + GetUser.lastError().text());
    }


}

void UserAddmin::handleReset()
{
    usernameLineEdit->clear();
    passwordLineEdit->clear();
    roleComboBox->setCurrentIndex(0);
}
