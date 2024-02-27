#ifndef CONNEXION_H
#define CONNEXION_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
class connexion
{
public:
    QSqlDatabase db ;
    connexion();
    bool connect();
    bool check_data_base();
    void close();
};

#endif // CONNEXION_H
