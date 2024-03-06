#ifndef CLIENT_H
#define CLIENT_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QDebug>
#include <QObject>
#include <QSqlTableModel>
#include <QPixmap>
#include <QFile>
#include <QFileDialog>
#include <QFileInfo>
#include <QBuffer>
#include <QByteArray>
#include <QCoreApplication>
#include "connexion.h"
#include <QPrinter>
#include <QTableView>
#include <QPainter>
#include <QPdfWriter>
#include <QMessageBox>
#include <QDate>

class client
{
private :
   QString cin;
   QString name;
   QString firstName;
   QString dob;
   QString gender;
   QString phoneNumber;
   QString email;
   QDate joinDate;
   QByteArray certificate;
public:
 /*constructor*/
client();
client(QString , QString ,QString ,QString ,QString,QString,QString,QByteArray);
/*destructor*/
~client();
/* getters */
QString getCin();
QString getName();
QString getFirstName();
QString getDateOfBirth();
QString getGender();
QString getPhoneNumber();
QString getEmail();
QByteArray getCertificate();
QDate getJoinDate();
/* setters */
void setCin(QString cin);
void setName(QString name);
void setFirstName(QString firstName);
void setDateOfBirth(QString dob);
void setGender(QString gender);
void setPhoneNumber(QString phone);
void setEmail(QString email);
void setCertificate(QByteArray certificate);
void setJoinDate(QDate joinDate);
/* CRUD */
QSqlQueryModel * display_all_clients();
bool add_client();
bool delete_client(QString cin);
bool update_client(QString CIN , QString firstName , QString name ,QString dob,QString gender,QString phoneNumber , QString email);


/*les fonction */
QSqlQueryModel * search_client_by_gender(QString gender);
QSqlQueryModel * search_client_by_all(QString searchValue);

void exportModelToPdf(QAbstractItemModel* model, const QString &fileName);

void exportToFile(const QString &data, const QString &filename);
void exportToCsv(QSqlQueryModel *model, const QString &filename);
void exportToTxt(QSqlQueryModel *model, const QString &filename);

};

#endif // CLIENT_H
