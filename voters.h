#ifndef VOTERS_H
#define VOTERS_H

#include <QDialog>
#include "mydb.h"

namespace Ui {
class Voters;
}

class Voters : public QDialog
{
    Q_OBJECT

public:
    explicit Voters(QWidget *parent = nullptr);
    ~Voters();

private slots:
    void on_btn_RegisterVoter_back_clicked();

    void on_btn_browse_image_voter_clicked();

    void on_btn_submit_voter_clicked();

    void on_btn_Reset_Voter_clicked();

private:
    Ui::Voters *ui;
    QByteArray FinalDataToSave;
    // QFileInfo FileInfo;
    QString ImageName;
    QString selectedImagePath;


    QByteArray imageData; // Adding this member variable to store image data
};

#endif // VOTERS_H
