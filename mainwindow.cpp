#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QVBoxLayout"
#include "QHBoxLayout"
#include "QMessageBox"
#include "QPushButton"
#include "QLabel"
#include "QFrame"
#include "QPixmap"
#include "QPalette"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("v1.0");
    ptrUserAddmin = new UserAddmin();

    // Creating a central widget
    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    // Creating a main layout
    QHBoxLayout *mainLayout = new QHBoxLayout(centralWidget);

    // Creating a side navigation frame
    QFrame *sideNavFrame = new QFrame(this);
    sideNavFrame->setFrameShape(QFrame::StyledPanel);
    sideNavFrame->setFixedWidth(150);
    sideNavFrame->setStyleSheet("background-color:white;");

    QVBoxLayout *sideNavLayout = new QVBoxLayout(sideNavFrame);

    // Creating buttons for side nav
    QPushButton *btnSettings = new QPushButton("    ", this);
    QPushButton *btnAdminLogin = new QPushButton("Login", this);

    // Set styles for buttons
    btnSettings->setStyleSheet("font-size: 10px; padding: 10px; background-color: rgb(0, 81, 121); border: none; border-radius: 5px;");
    btnAdminLogin->setStyleSheet("font-size: 18px; padding: 10px; background-color: rgb(0, 81, 121); color: white; border: none; border-radius: 5px;");

    // Setting cursor for buttons
    btnSettings->setCursor(Qt::PointingHandCursor);
    btnAdminLogin->setCursor(Qt::PointingHandCursor);
    //Connect the login button to the slot
    connect(btnAdminLogin, &QPushButton::clicked, this, &MainWindow::on_btn_admin_login_clicked);
    connect(btnSettings, &QPushButton::clicked, this, &MainWindow::on_btn_admin_signup_clicked);
    // Adding buttons to the side navigation layout
    sideNavLayout->addWidget(btnSettings);
    sideNavLayout->addWidget(btnAdminLogin);
    sideNavLayout->addStretch();

    // Create a header
    QLabel *headingLabel = new QLabel("Welcome to LBTCSU Voting System");
    headingLabel->setAlignment(Qt::AlignCenter);
    headingLabel->setStyleSheet("font-size: 15px; font-weight: bold; padding: 10px; color: white;");

    // Create body label with background image
    QLabel *BodyLabel = new QLabel(" ", this);
    BodyLabel->setStyleSheet("background-color: rgb(81, 81, 121);");
    BodyLabel->setAlignment(Qt::AlignTop);
    QPixmap bodyLabelPixmap("C:/VoltingSystem/elections_12.jpg");
    BodyLabel->setPixmap(bodyLabelPixmap.scaled(size(), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation));
    BodyLabel->setScaledContents(true);
    BodyLabel->setAttribute(Qt::WA_TransparentForMouseEvents);

    // Create copyright footer
    QLabel *footerLabel = new QLabel("LBTCSU VOTING SYSTEM © Copyright 2025 All rights reserved.", this);
    footerLabel->setAlignment(Qt::AlignCenter);
    footerLabel->setStyleSheet("font-size: 12px; color: white; padding: 5px;");

    // Adding side navigation and content to the main layout
    mainLayout->addWidget(sideNavFrame);

    QVBoxLayout *contentLayout = new QVBoxLayout();
    contentLayout->addWidget(headingLabel);
    contentLayout->addWidget(BodyLabel);
    contentLayout->addWidget(footerLabel); // Add footer at the bottom

    mainLayout->addLayout(contentLayout);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete ptrUserAddmin;
    delete ptrRegisterVoter;
}
void MainWindow::on_btn_admin_login_clicked()
{
    //ptrAdminlogin->show();
    ptrUserAddmin->show();
}

void MainWindow::on_btn_admin_signup_clicked(){
   //
}

