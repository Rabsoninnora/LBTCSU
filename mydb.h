#ifndef MYDB_H
#define MYDB_H
#include <QSql>
#include <QSqlDatabase>
#include <QSqlDriverPlugin>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlField>
#include <QSqlIndex>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QDebug>
#include <QBuffer>
#include <QByteArray>
#include <QFile>
#include <QFileInfo>
#include <QTableWidget>
#include <QObject>
#include <QFileDialog>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintEngine>
#include <QDialog>




class MyDB {
private:
    MyDB();
    static MyDB *instance;
    void init();
    QSqlDatabase db;
public:
    static MyDB* getInstance();
    static void  ResetInstance();


    QSqlDatabase getDBInstance();

    ~MyDB();
};

#endif // MYDB_H
