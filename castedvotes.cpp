#include "castedvotes.h"
#include "ui_castedvotes.h"

#include <QStandardItemModel>
#include <QHeaderView>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>
#include <QPixmap>
#include <QIcon>
#include <QFont>
#include <QByteArray>

CastedVotes::CastedVotes(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::CastedVotes)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);
    setWindowTitle("v1.0");

    ui->tableView->setVisible(false);
    ui->label_Position->clear();

    setupTableView();
}

CastedVotes::~CastedVotes()
{
    delete ui;
}

void CastedVotes::setupTableView()
{
    if (m_model) {
        m_model->deleteLater();
        m_model = nullptr;
    }

    m_model = new QStandardItemModel(this);
    m_model->setHorizontalHeaderLabels({"CandidateID", "First Name", "Last Name", "Photo", "Vote"});

    ui->tableView->setModel(m_model);

    // Make table interactive and readable
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Interactive);
    ui->tableView->horizontalHeader()->setStretchLastSection(false);
    ui->tableView->verticalHeader()->setVisible(false);
    ui->tableView->setAlternatingRowColors(true);
    ui->tableView->setStyleSheet("alternate-background-color: #f0f0f0; background-color: #ffffff;");

    // Bigger font and rows for thumbnails
    QFont font = ui->tableView->font();
    font.setPointSize(12);
    ui->tableView->setFont(font);
    ui->tableView->verticalHeader()->setDefaultSectionSize(80);

    // React when a checkbox toggles
    connect(m_model, &QStandardItemModel::itemChanged, this, [this](QStandardItem *item) {
        handleVoteToggle(item);
    });
}

void CastedVotes::clearTableView()
{
    if (m_model) {
        m_model->blockSignals(true);
        m_model->removeRows(0, m_model->rowCount());
        m_model->blockSignals(false);
    }
    ui->tableView->setVisible(false);
}

void CastedVotes::on_btn_back_clicked()
{
    close();
}

void CastedVotes::on_btn_Reset_clicked()
{
    ui->txt_Search->clear();
    ui->plainTextEdit->clear();
    ui->image_field->clear();
    ui->label_Position->clear();
    ui->comboBox_Position->setCurrentIndex(0);

    m_currentStudentID.clear();
    m_currentPosition.clear();

    clearTableView();
}

bool CastedVotes::loadVoterByID(const QString &studentID)
{
    QSqlDatabase db = MyDB::getInstance()->getDBInstance();
    QSqlQuery query(db);
    query.prepare("SELECT StudentID, Fname, Lname, Department, Image_Data "
                  "FROM Voters WHERE StudentID = :id");
    query.bindValue(":id", studentID);

    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Failed to search voter: " + query.lastError().text());
        return false;
    }
    if (!query.next()) {
        QMessageBox::information(this, "Not Found", "No voter found with that Student ID.");
        return false;
    }

    m_currentStudentID = query.value("StudentID").toString();

    const QString details = QString("ID: %1\nFirst Name: %2\nLast Name: %3\nDepartment: %4")
                                .arg(query.value("StudentID").toString())
                                .arg(query.value("Fname").toString())
                                .arg(query.value("Lname").toString())
                                .arg(query.value("Department").toString());
    ui->plainTextEdit->setPlainText(details);

    QByteArray imageData = query.value("Image_Data").toByteArray();
    if (!imageData.isEmpty()) {
        QPixmap pix;
        pix.loadFromData(imageData);
        ui->image_field->setPixmap(pix.scaled(ui->image_field->width(),
                                              ui->image_field->height(),
                                              Qt::KeepAspectRatio,
                                              Qt::SmoothTransformation));
    } else {
        ui->image_field->clear();
    }

    return true;
}

void CastedVotes::on_btn_search_Voter_clicked()
{
    const QString studentID = ui->txt_Search->text().trimmed();
    if (studentID.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter a Student ID.");
        return;
    }

    if (loadVoterByID(studentID)) {
        // Hide candidates until position is picked and search is done
        ui->tableView->setVisible(false);
        ui->label_Position->clear();
    }
}

void CastedVotes::populateCandidatesForPosition(const QString &position)
{
    clearTableView();

    QSqlDatabase db = MyDB::getInstance()->getDBInstance();
    QSqlQuery query(db);
    query.prepare("SELECT CandidateID, Fname, Lname, Image_Data "
                  "FROM Candidates WHERE Position = :pos");
    query.bindValue(":pos", position);

    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Failed to load candidates: " + query.lastError().text());
        return;
    }

    int rowCount = 0;
    while (query.next()) {
        QList<QStandardItem*> items;

        // CandidateID
        items << new QStandardItem(query.value("CandidateID").toString());
        // First Name
        items << new QStandardItem(query.value("Fname").toString());
        // Last Name
        items << new QStandardItem(query.value("Lname").toString());

        // Photo (thumbnail icon)
        QStandardItem *photoItem = new QStandardItem();
        QByteArray imageData = query.value("Image_Data").toByteArray();
        if (!imageData.isEmpty()) {
            QPixmap pix;
            pix.loadFromData(imageData);
            photoItem->setIcon(QIcon(pix.scaled(80, 80, Qt::KeepAspectRatio, Qt::SmoothTransformation)));
        }
        items << photoItem;

        // Vote checkbox
        QStandardItem *voteItem = new QStandardItem("Select");
        voteItem->setCheckable(true);
        voteItem->setEditable(true); // allow checkbox interaction
        items << voteItem;

        m_model->appendRow(items);
        ++rowCount;
    }

    if (rowCount > 0) {
        ui->tableView->setVisible(true);
        ui->label_Position->setText(position);
    } else {
        QMessageBox::information(this, "No Candidates", "No candidates found for this position.");
        ui->tableView->setVisible(false);
        ui->label_Position->clear();
    }
}

void CastedVotes::on_btn_search_Candidet_clicked()
{
    if (m_currentStudentID.isEmpty()) {
        QMessageBox::warning(this, "Missing Voter", "Search and select a voter first.");
        return;
    }

    const QString position = ui->comboBox_Position->currentText().trimmed();
    if (position.isEmpty() || position == "All") {
        QMessageBox::warning(this, "Input Error", "Please select a valid position.");
        return;
    }

    m_currentPosition = position;
    populateCandidatesForPosition(position);
}

void CastedVotes::handleVoteToggle(QStandardItem *item)
{
    // Only respond to Vote column checkbox changes to Checked
    if (!item || item->column() != 4) return;
    if (item->checkState() != Qt::Checked) return;

    if (m_currentStudentID.isEmpty() || m_currentPosition.isEmpty()) {
        QMessageBox::warning(this, "Incomplete Context", "Select a voter and position before voting.");
        item->setCheckState(Qt::Unchecked);
        return;
    }

    const int row = item->row();
    const QString candidateID = m_model->item(row, 0)->text();

    // Enforce single selection: uncheck all other rows
    m_model->blockSignals(true);
    for (int r = 0; r < m_model->rowCount(); ++r) {
        if (r != row) {
            if (auto *voteItem = m_model->item(r, 4)) {
                voteItem->setCheckState(Qt::Unchecked);
            }
        }
    }
    m_model->blockSignals(false);

    // Attempt to cast the vote
    if (!castVote(m_currentStudentID, candidateID, m_currentPosition)) {
        // Revert checkbox if insert fails
        m_model->blockSignals(true);
        item->setCheckState(Qt::Unchecked);
        m_model->blockSignals(false);
        return;
    }

    // Success feedback and lock further changes for this position
    QMessageBox::information(this, "Vote Cast", "Your vote has been recorded.");

    m_model->blockSignals(true);
    for (int r = 0; r < m_model->rowCount(); ++r) {
        if (auto *voteItem = m_model->item(r, 4)) {
            voteItem->setEnabled(false);
        }
    }
    m_model->blockSignals(false);
}

bool CastedVotes::castVote(const QString &studentID, const QString &candidateID, const QString &position)
{
    QSqlDatabase db = MyDB::getInstance()->getDBInstance();

    if (!db.transaction()) {
        QMessageBox::critical(this, "DB Error", "Failed to start transaction: " + db.lastError().text());
        return false;
    }

    QSqlQuery voteQuery(db);
    voteQuery.prepare("INSERT INTO VotesTotal (StudentID, CandidateID, Position) "
                      "VALUES (:sid, :cid, :pos)");
    voteQuery.bindValue(":sid", studentID);
    voteQuery.bindValue(":cid", candidateID);
    voteQuery.bindValue(":pos", position);

    if (!voteQuery.exec()) {
        db.rollback();
        const QString err = voteQuery.lastError().text();

        if (err.contains("UNIQUE", Qt::CaseInsensitive)) {
            QMessageBox::warning(this, "Already Voted",
                                 "You have already cast a vote for this position.");
        } else {
            QMessageBox::critical(this, "Vote Error",
                                  "Failed to cast vote: " + err);
        }
        return false;
    }

    if (!db.commit()) {
        db.rollback();
        QMessageBox::critical(this, "DB Error", "Failed to commit vote: " + db.lastError().text());
        return false;
    }

    return true;
}
