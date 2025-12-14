#include "registercandidate.h"
#include "ui_registercandidate.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QPixmap>
#include <QImage>
#include <QBuffer>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>
#include <QFileInfo>
#include <QDebug>
#include <QPlainTextEdit>
#include <QLineEdit>
#include "QLabel"
#include "QFrame"
#include "QPixmap"
#include "QPalette"
#include <QPixmap>
#include <QDir>

RegisterCandidate::RegisterCandidate(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterCandidate)
{
    ui->setupUi(this);

    setWindowFlags(windowFlags()|Qt::WindowStaysOnTopHint);
    setWindowTitle("v1.0");

    // Set background image for the whole QDialog
    this->setStyleSheet("QDialog { "
                        "background-image: url('C:/VoltingSystem/VotingSystem/images/perfect.png'); "
                        "background-repeat: no-repeat; "
                        "background-position: center; "
                        "background-attachment: fixed; "
                        "}");
}




RegisterCandidate::~RegisterCandidate()
{
    delete ui;
}

void RegisterCandidate::on_btn_RegisterCandidate_back_clicked()
{
    this->close();
}


void RegisterCandidate::on_btn_browse_image_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this, tr("Open File"), QDir::homePath(), tr("Images (*.png *.jpg *.jpeg *.bmp)"));
    if (!file_name.isEmpty()) {
        QImage img(file_name);
        QPixmap pix = QPixmap::fromImage(img);
        int w = ui->image_field->width();
        int h = ui->image_field->height();
        ui->image_field->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
        selectedImagePath = file_name; // Store for later use
    }
}


void RegisterCandidate::on_btn_submit_clicked()
{

    QString CandidateID = ui->lineEdit_ID->text().trimmed();
    QString Fname = ui->lineEdit_Fname->text().trimmed();
    QString Lname = ui->lineEdit_LastName->text().trimmed();
    QString NRC =ui->lineEdit_NRC->text().trimmed();
    QString Course = ui->lineEdit_Course->text().trimmed();
    QString Department =ui->lineEdit_Department->text().trimmed();
    QString Position =ui->txtPositionCombo->currentText().trimmed();



    QByteArray imageData;
    QString ImageName;

    if (!selectedImagePath.isEmpty()) {
        QPixmap Image(selectedImagePath);
        QBuffer ImageBufferData(&imageData);
        ImageBufferData.open(QIODevice::WriteOnly);
        Image.save(&ImageBufferData, "JPG"); // Save as JPG
        QFileInfo fileInfo(selectedImagePath);
        ImageName = fileInfo.fileName();
        imageData = ImageBufferData.buffer(); // Raw binary

    }

    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    QSqlDatabase::database().transaction();

    query.prepare("INSERT INTO Candidates (CandidateID, Fname, Lname, NRC, Course, Department, Position,Image_Data, Image_Name) "
                  "VALUES (:CandidateID,:Fname, :Lname,:NRC, :Course, :Department,:Position, :Image_Data, :Image_Name)");


    query.bindValue(":CandidateID",CandidateID);
    query.bindValue(":Fname", Fname);
    query.bindValue(":Lname", Lname);
    query.bindValue(":NRC", NRC);
    query.bindValue(":Course", Course);
    query.bindValue(":Department", Department);
    query.bindValue(":Position", Position);
    query.bindValue(":Image_Data", imageData);
    query.bindValue(":Image_Name", ImageName);



    if (query.exec()) {
        QSqlDatabase::database().commit();
        QMessageBox::information(this, "Success", "Candidate registered successfully!");
    } else {
        QSqlDatabase::database().rollback();
        QMessageBox::critical(this, "Error", "Failed to register Candidate: " + query.lastError().text());
    }

    foreach (QLineEdit *widget, this->findChildren<QLineEdit*>()) {
        widget->clear();
    }
    foreach (QPlainTextEdit *widget, this->findChildren<QPlainTextEdit*>()) {
        widget->clear();
    }
    ui->image_field->clear();
    selectedImagePath.clear();


}


void RegisterCandidate::on_btn_Reset_Lecturer_2_clicked()
{
    foreach (QLineEdit *widget, this->findChildren<QLineEdit*>()) {
        widget->clear();
    }
    foreach (QPlainTextEdit *widget, this->findChildren<QPlainTextEdit*>()) {
        widget->clear();
    }
    ui->image_field->clear();
    selectedImagePath.clear();
}

