#include "viewresults.h"
#include "ui_viewresults.h"
#include "mydb.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QLabel>
#include <QPixmap>
#include <QIcon>

ViewResults::ViewResults(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ViewResults)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);
    setWindowTitle("v1.0");

    // Background image
    this->setStyleSheet("QDialog { "
                        "background-image: url('C:/VoltingSystem/VotingSystem/images/perfect.png'); "
                        "background-repeat: no-repeat; "
                        "background-position: center; "
                        "background-attachment: fixed; "
                        "}");

    ui->CenterBackground->setVisible(false);
}

ViewResults::~ViewResults()
{
    delete ui;
}

// Utility: clear layout inside CenterBackground
void ViewResults::clearResults()
{
    QLayout *layout = ui->CenterBackground->layout();
    if (layout) {
        QLayoutItem *item;
        while ((item = layout->takeAt(0)) != nullptr) {
            delete item->widget();
            delete item;
        }
        delete layout;
    }
    ui->CenterBackground->setVisible(false);
}

// Show winner for selected position
void ViewResults::on_btn_search_Winner_clicked()
{
    QString position = ui->comboBoxPosition->currentText().trimmed();
    if (position.isEmpty() || position == "All") {
        QMessageBox::warning(this, "Input Error", "Please select a valid position.");
        return;
    }

    clearResults();

    QSqlDatabase db = MyDB::getInstance()->getDBInstance();
    QSqlQuery query(db);
    query.prepare(R"(
        SELECT c.CandidateID, c.Fname, c.Lname, c.Image_Data, v.Position, COUNT(*) AS VoteCount
        FROM VotesTotal v
        JOIN Candidates c ON v.CandidateID = c.CandidateID
        WHERE v.Position = :pos
        GROUP BY c.CandidateID, c.Fname, c.Lname, c.Image_Data, v.Position
        ORDER BY VoteCount DESC
        LIMIT 1
    )");
    query.bindValue(":pos", position);

    if (!query.exec()) {
        QMessageBox::critical(this, "Error", query.lastError().text());
        return;
    }

    if (query.next()) {
        QString candidateID = query.value("CandidateID").toString();
        QString fname       = query.value("Fname").toString();
        QString lname       = query.value("Lname").toString();
        int voteCount       = query.value("VoteCount").toInt();
        QByteArray imageData = query.value("Image_Data").toByteArray();

        ui->CenterBackground->setVisible(true);
        QVBoxLayout *layout = new QVBoxLayout(ui->CenterBackground);

        QLabel *label = new QLabel(
            QString("Winner for %1:\nCandidateID: %2\nName: %3 %4\nVotes: %5")
                .arg(position).arg(candidateID).arg(fname).arg(lname).arg(voteCount)
            );
        label->setStyleSheet("color: white; font-size: 14pt;");
        layout->addWidget(label);

        if (!imageData.isEmpty()) {
            QPixmap pix;
            pix.loadFromData(imageData);
            QLabel *photoLabel = new QLabel;
            photoLabel->setPixmap(pix.scaled(150, 150, Qt::KeepAspectRatio, Qt::SmoothTransformation));
            layout->addWidget(photoLabel);
        }
    } else {
        QMessageBox::information(this, "No Results", "No votes found for this position.");
    }
}

// Show winners for all positions
void ViewResults::on_btn_View_All_clicked()
{
    clearResults();

    QSqlDatabase db = MyDB::getInstance()->getDBInstance();
    QSqlQuery query(db);
    query.prepare(R"(
        SELECT c.CandidateID, c.Fname, c.Lname, c.Image_Data, v.Position, COUNT(*) AS VoteCount
        FROM VotesTotal v
        JOIN Candidates c ON v.CandidateID = c.CandidateID
        GROUP BY c.CandidateID, c.Fname, c.Lname, c.Image_Data, v.Position
        ORDER BY v.Position, VoteCount DESC
    )");

    if (!query.exec()) {
        QMessageBox::critical(this, "Error", query.lastError().text());
        return;
    }

    ui->CenterBackground->setVisible(true);
    QVBoxLayout *layout = new QVBoxLayout(ui->CenterBackground);

    QString currentPos;
    while (query.next()) {
        QString pos        = query.value("Position").toString();
        QString candidateID = query.value("CandidateID").toString();
        QString fname       = query.value("Fname").toString();
        QString lname       = query.value("Lname").toString();
        int voteCount       = query.value("VoteCount").toInt();
        QByteArray imageData = query.value("Image_Data").toByteArray();

        // Only show top candidate per position
        if (pos != currentPos) {
            QLabel *label = new QLabel(
                QString("Winner for %1:\nCandidateID: %2\nName: %3 %4\nVotes: %5")
                    .arg(pos).arg(candidateID).arg(fname).arg(lname).arg(voteCount)
                );
            label->setStyleSheet("color: white; font-size: 14pt;");
            layout->addWidget(label);

            if (!imageData.isEmpty()) {
                QPixmap pix;
                pix.loadFromData(imageData);
                QLabel *photoLabel = new QLabel;
                photoLabel->setPixmap(pix.scaled(150, 150, Qt::KeepAspectRatio, Qt::SmoothTransformation));
                layout->addWidget(photoLabel);
            }

            currentPos = pos;
        }
    }
}

// Reset results
void ViewResults::on_btn_result_reset_clicked()
{
    ui->comboBoxPosition->setCurrentIndex(0);
    clearResults();
}

void ViewResults::on_btn_ViewResult_back_clicked()
{
    this->close();
}
