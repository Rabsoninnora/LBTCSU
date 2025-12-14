#include "voterrecords.h"
#include "ui_voterrecords.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
#include <QPixmap>
#include <QByteArray>
#include <QLabel>

VoterRecords::VoterRecords(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::VoterRecords)
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

    ui->tableWidget_2->setVisible(false); // hide table initially
    ui->tableWidget_2->setIconSize(QSize(64,64)); // thumbnail size
}

VoterRecords::~VoterRecords()
{
    delete ui;
}

void VoterRecords::on_btn_Reset_Voter_clicked()
{
    ui->txt_Search_Voter->clear();
    ui->tableWidget_2->clear();
    ui->tableWidget_2->setVisible(false);
    ui->frame_2->setVisible(false);

}

void VoterRecords::populateTable(QSqlQuery &query){
    ui->tableWidget_2->clear();
    ui->tableWidget_2->setRowCount(0);
    ui->tableWidget_2->setColumnCount(5); // StudentID, Fname, Lname, Department, Image_Data, Thumbnail

    QStringList headers = {"StudentID", "First Name", "Last Name", "Department", "Photo"};
    ui->tableWidget_2->setHorizontalHeaderLabels(headers);

    int row = 0;
    while (query.next()) {
        ui->tableWidget_2->insertRow(row);
        ui->tableWidget_2->setItem(row, 0, new QTableWidgetItem(query.value("StudentID").toString()));
        ui->tableWidget_2->setItem(row, 1, new QTableWidgetItem(query.value("Fname").toString()));
        ui->tableWidget_2->setItem(row, 2, new QTableWidgetItem(query.value("Lname").toString()));
        ui->tableWidget_2->setItem(row, 3, new QTableWidgetItem(query.value("Department").toString()));
        ui->tableWidget_2->setItem(row, 4, new QTableWidgetItem(query.value("Image_Data").toString()));

        // Handle image thumbnail
        QByteArray imageData = query.value("Image_Data").toByteArray();
        if (!imageData.isEmpty()) {
            QPixmap pix;
            pix.loadFromData(imageData);
            QTableWidgetItem *imgItem = new QTableWidgetItem;
            imgItem->setIcon(QIcon(pix.scaled(64,64, Qt::KeepAspectRatio, Qt::SmoothTransformation)));
            ui->tableWidget_2->setItem(row, 4, imgItem);
        }

        row++;
    }

    if (row > 0) {
        ui->tableWidget_2->setVisible(true); // show table only if results found
    } else {
        QMessageBox::information(this, "No Results", "No candidates found.");
        ui->tableWidget_2->setVisible(false);
    }
}



void VoterRecords::on_btn_voter_view_clicked()
{
    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    query.prepare("SELECT StudentID, Fname, Lname, Department, Image_Data FROM Voters");

    if (query.exec()) {
        populateTable(query);
    } else {
        QMessageBox::critical(this, "Error", "Failed to load candidates: " + query.lastError().text());
    }

}


void VoterRecords::on_btn_search_voter_clicked()
{
    QString searchText = ui->txt_Search_Voter->text().trimmed();

    QSqlQuery query(MyDB::getInstance()->getDBInstance());

    QString sql = "SELECT StudentID, Fname, Lname, Department, Image_Data "
                  "FROM Voters WHERE 1=1 ";

    if (!searchText.isEmpty()) {
        sql += "AND (StudentID LIKE :search OR Fname LIKE :search OR Lname LIKE :search OR Department LIKE :search) ";
    }


    query.prepare(sql);

    if (!searchText.isEmpty()) {
        query.bindValue(":search", "%" + searchText + "%");
    }

    if (query.exec()) {
        populateTable(query);
    } else {
        QMessageBox::critical(this, "Error", "Search failed: " + query.lastError().text());
    }
}


void VoterRecords::on_btn_Voter_back_clicked()
{
    this->close();
}

