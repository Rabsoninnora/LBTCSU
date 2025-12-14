#include "candidates.h"
#include "ui_candidates.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
#include <QPixmap>
#include <QByteArray>
#include <QLabel>

Candidates::Candidates(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Candidates)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags()|Qt::WindowStaysOnTopHint);
    setWindowTitle("v1.0");

    ui->tableWidget->setVisible(false); // hide table initially
    ui->tableWidget->setIconSize(QSize(64,64)); // thumbnail size

    ////////////
    // Set background image for the whole QDialog
    this->setStyleSheet("QDialog { "
                        "background-image: url('C:/VoltingSystem/VotingSystem/images/perfect.png'); "
                        "background-repeat: no-repeat; "
                        "background-position: center; "
                        "background-attachment: fixed; "
                        "}");


}

Candidates::~Candidates()
{
    delete ui;
}

void Candidates::on_btn_Candidate_back_clicked()
{
    this->close();
}

void Candidates::on_btn_Reset_Candidate_Search_clicked()
{
    ui->txt_Search->clear();
    ui->comboBox_Position->setCurrentIndex(0); // reset to "All"
    ui->tableWidget->clear();
    ui->tableWidget->setVisible(false);
}

void Candidates::populateTable(QSqlQuery &query)
{
    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(9); // CandidateID, Fname, Lname, NRC, Course, Department, Position, Image_Name, Thumbnail

    QStringList headers = {"ID", "First Name", "Last Name", "NRC", "Course", "Department", "Position", "Image Name", "Photo"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    int row = 0;
    while (query.next()) {
        ui->tableWidget->insertRow(row);
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(query.value("CandidateID").toString()));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(query.value("Fname").toString()));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(query.value("Lname").toString()));
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(query.value("NRC").toString()));
        ui->tableWidget->setItem(row, 4, new QTableWidgetItem(query.value("Course").toString()));
        ui->tableWidget->setItem(row, 5, new QTableWidgetItem(query.value("Department").toString()));
        ui->tableWidget->setItem(row, 6, new QTableWidgetItem(query.value("Position").toString()));
        ui->tableWidget->setItem(row, 7, new QTableWidgetItem(query.value("Image_Name").toString()));

        // Handle image thumbnail
        QByteArray imageData = query.value("Image_Data").toByteArray();
        if (!imageData.isEmpty()) {
            QPixmap pix;
            pix.loadFromData(imageData);
            QTableWidgetItem *imgItem = new QTableWidgetItem;
            imgItem->setIcon(QIcon(pix.scaled(64,64, Qt::KeepAspectRatio, Qt::SmoothTransformation)));
            ui->tableWidget->setItem(row, 8, imgItem);
        }

        row++;
    }

    if (row > 0) {
        ui->tableWidget->setVisible(true); // show table only if results found
    } else {
        QMessageBox::information(this, "No Results", "No candidates found.");
        ui->tableWidget->setVisible(false);
    }
}

void Candidates::on_btn_search_clicked()
{
    QString searchText = ui->txt_Search->text().trimmed();
    QString position = ui->comboBox_Position->currentText().trimmed();

    QSqlQuery query(MyDB::getInstance()->getDBInstance());

    QString sql = "SELECT CandidateID, Fname, Lname, NRC, Course, Department, Position, Image_Name, Image_Data "
                  "FROM Candidates WHERE 1=1 ";

    if (!searchText.isEmpty()) {
        sql += "AND (CandidateID LIKE :search OR Fname LIKE :search OR Lname LIKE :search OR NRC LIKE :search OR Course LIKE :search OR Department LIKE :search) ";
    }
    if (!position.isEmpty() && position != "All") {
        sql += "AND Position = :position ";
    }

    query.prepare(sql);

    if (!searchText.isEmpty()) {
        query.bindValue(":search", "%" + searchText + "%");
    }
    if (!position.isEmpty() && position != "All") {
        query.bindValue(":position", position);
    }

    if (query.exec()) {
        populateTable(query);
    } else {
        QMessageBox::critical(this, "Error", "Search failed: " + query.lastError().text());
    }
}

void Candidates::on_btn_candidate_view_clicked()
{
    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    query.prepare("SELECT CandidateID, Fname, Lname, NRC, Course, Department, Position, Image_Name, Image_Data FROM Candidates");

    if (query.exec()) {
        populateTable(query);
    } else {
        QMessageBox::critical(this, "Error", "Failed to load candidates: " + query.lastError().text());
    }
}
