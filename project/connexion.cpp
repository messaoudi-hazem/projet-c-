#include "connexion.h"
connexion::connexion()
{
}
bool connexion::connect() {
    bool test = false;
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("ProjectDataBase");
    db.setUserName("hazem");
    db.setPassword("hazem");

    if (db.open()) {
        test = true;
    }

    return test;
}
bool connexion::check_data_base(){
    if (db.isValid() && db.isOpen()) {
        return true;
    } else {
        return false;
    }
}
void connexion::close() {
    db.close();
}
