#include "voters.h"
#include "ui_voters.h"
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

Voters::Voters(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Voters)
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

Voters::~Voters()
{
    delete ui;
}

void Voters::on_btn_RegisterVoter_back_clicked()
{
    this->close();
}


void Voters::on_btn_browse_image_voter_clicked()
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


void Voters::on_btn_submit_voter_clicked()
{
    QString StudentID = ui->lineEdit_SudentID_Voter->text().trimmed();
    QString Fname = ui->lineEdit_Fname_voter->text().trimmed();
    QString Lname = ui->lineEdit_Lname_voter->text().trimmed();
    QString Department =ui->txtDepartmentCombo->currentText().trimmed();



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

    query.prepare("INSERT INTO Voters (StudentID, Fname, Lname, Department,Image_Data, Image_Name) "
                  "VALUES (:StudentID,:Fname, :Lname, :Department, :Image_Data, :Image_Name)");


    query.bindValue(":StudentID",StudentID);
    query.bindValue(":Fname", Fname);
    query.bindValue(":Lname", Lname);
    query.bindValue(":Department", Department);
    query.bindValue(":Image_Data", imageData);
    query.bindValue(":Image_Name", ImageName);



    if (query.exec()) {
        QSqlDatabase::database().commit();
        QMessageBox::information(this, "Success", "Voter registered successfully!");
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


void Voters::on_btn_Reset_Voter_clicked()
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

