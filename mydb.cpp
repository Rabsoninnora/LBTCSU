#include "mydb.h"

MyDB*  MyDB::instance = nullptr;

MyDB::MyDB()
{
    init();
}

void MyDB::init()
{
    db = QSqlDatabase::addDatabase("QSQLITE", "Data");
    db.setDatabaseName("C:/VoltingSystem/VotingSystem/VotingDB.db");

    if(QFile::exists("C:/VoltingSystem/VotingSystem/VotingDB.db"))
        qDebug() << "DB file";
    else
        qDebug() <<"Hi Dev sorry I can't find the Database file";

    if(!db.open())
        qDebug() << db.lastError().text();
    else
        qDebug() <<"Hi Dev Database loaded successfuly happy coding";
}

MyDB *MyDB::getInstance()
{
    qDebug()<< "in MyDB::getInstance()";

    if(instance== nullptr)
        instance= new MyDB();

    return instance;
}

QSqlDatabase MyDB::getDBInstance()
{
    return db;
}

void MyDB::ResetInstance()
{
    delete instance;
    instance = nullptr;
}


MyDB::~MyDB()
{
    db.close();
}



