#ifndef REGISTERCANDIDATE_H
#define REGISTERCANDIDATE_H

#include <QDialog>
#include "mydb.h"

namespace Ui {
class RegisterCandidate;
}

class RegisterCandidate : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterCandidate(QWidget *parent = nullptr);
    ~RegisterCandidate();

private slots:
    void on_btn_RegisterCandidate_back_clicked();

    void on_btn_browse_image_clicked();

    void on_btn_submit_clicked();

    void on_btn_Reset_Lecturer_2_clicked();

private:
    Ui::RegisterCandidate *ui;
    QByteArray FinalDataToSave;
   // QFileInfo FileInfo;
    QString ImageName;
    QString selectedImagePath;


    QByteArray imageData; // Adding this member variable to store image data
};

#endif // REGISTERCANDIDATE_H
