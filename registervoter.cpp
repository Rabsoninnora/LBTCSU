#include "registervoter.h"
#include <QVBoxLayout>
#include <QFormLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QPushButton>
#include <QSqlQuery>
#include <QSqlError>
#include <QCryptographicHash>
#include <QMessageBox>

RegisterVoter::RegisterVoter(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle("Create Voter Account");
    setFixedSize(400, 250);
    setWindowFlags(windowFlags()|Qt::WindowStaysOnTopHint);


    dbManager = MyDB::getInstance();

    // Create widgets
    QLabel *usernameLabel = new QLabel("Username:");
    usernameLineEdit = new QLineEdit(this);

    QLabel *passwordLabel = new QLabel("Password:");
    passwordLineEdit = new QLineEdit(this);
    passwordLineEdit->setEchoMode(QLineEdit::Password);

    QLabel *roleLabel = new QLabel("Role:");
    roleComboBox = new QComboBox(this);
    roleComboBox->addItem("Candident");
    roleComboBox->addItem("Student");

    registerButton = new QPushButton("Submit", this);
    cancelButton = new QPushButton("Cancel", this);

    messageLabel = new QLabel("", this);
    messageLabel->setStyleSheet("color: red;");

    // Layout setup
    QFormLayout *formLayout = new QFormLayout();
    formLayout->addRow(usernameLabel, usernameLineEdit);
    formLayout->addRow(passwordLabel, passwordLineEdit);
    formLayout->addRow(roleLabel, roleComboBox);

    QHBoxLayout *buttonLayout = new QHBoxLayout();
    buttonLayout->addWidget(registerButton);
    buttonLayout->addWidget(cancelButton);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addLayout(formLayout);
    mainLayout->addLayout(buttonLayout);
    mainLayout->addWidget(messageLabel);

    setLayout(mainLayout);

    // Connect signals
    connect(registerButton, &QPushButton::clicked, this, &RegisterVoter::on_registerButton_clicked);
    connect(cancelButton, &QPushButton::clicked, this, &RegisterVoter::on_cancelButton_clicked);
}

RegisterVoter::~RegisterVoter()
{
    // Widgets deleted automatically
}

void RegisterVoter::on_registerButton_clicked()
{
    QString username = usernameLineEdit->text().trimmed();
    QString password = passwordLineEdit->text();
    QString role = roleComboBox->currentText();

    if (username.isEmpty() || password.isEmpty()) {
        messageLabel->setText("Please fill all fields.");
        return;
    }

    // Hash password
    QString hashedPassword = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex();

    QSqlDatabase db = dbManager->getDBInstance();
    QSqlQuery query(db);
    query.prepare("INSERT INTO AdminDetails (username, password) VALUES (username:username, password:password)");
    query.addBindValue(username);
    query.addBindValue(hashedPassword);
    query.addBindValue(role);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Account created!");
        this->accept();
    } else {
        messageLabel->setText("Failed Account not created: " + query.lastError().text());
    }
}

void RegisterVoter::on_cancelButton_clicked()
{
    this->reject();
}
