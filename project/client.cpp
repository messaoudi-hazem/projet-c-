#include "client.h"
// parameterized constructor
client::client(QString cin , QString name , QString firstName , QString dob , QString gender , QString phoneNumber , QString email , QByteArray certificate)
{
    this->cin = cin;
    this->name = name;
    this->firstName = firstName ;
    this->dob = dob ;
    this->gender = gender ;
    this->phoneNumber = phoneNumber ;
    this->email = email ;
    this->certificate = certificate ;
}
//default constructor
client::~client(){

}
client::client()
{
    cin = "";
    name = "";
    firstName = "";
    dob = "";
    gender= "";
    phoneNumber ="";
    email ="";
    certificate ="";
}
/* definition of getters */
QString client::getCin(){
    return cin;
}
QString client::getName(){
    return name;
}
QString client::getFirstName(){
    return firstName;
}
QString client::getDateOfBirth(){
    return dob;
}
QString client::getGender(){
    return gender;
}
QString client::getPhoneNumber(){
    return phoneNumber;
}
QString client::getEmail(){
    return email ;
}
QByteArray client::getCertificate(){
    return certificate ;
}
QDate client::getJoinDate(){
    return joinDate ;
}
/* definition of setters */
void client::setCin(QString cin){
    this->cin = cin ;
}
void client::setName(QString name){
    this->name = name  ;
}
void client::setFirstName(QString firstName){
    this->firstName = firstName  ;
}
void client::setDateOfBirth(QString dob){
    this->dob = dob ;
}
void client::setGender(QString gender){
    this->gender = gender ;
}
void client::setPhoneNumber(QString phoneNumber){
    this->phoneNumber = phoneNumber;
}
void client::setEmail(QString email){
    this->email = email;
}
void client::setCertificate(QByteArray certificate){
    this->certificate = certificate;
}
void client::setJoinDate(QDate joinDate){
    this->joinDate = joinDate ;
}
/* definition of CRUD */
/*DISPLAY*/
QSqlQueryModel * client::display_all_clients(){
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT CIN, FIRSTNAME, NAME, DOB, GENDER, PHONE, EMAIL FROM CLIENTS");
    if (model->lastError().isValid()) {
        qDebug() << "Error executing query:" << model->lastError().text();
        delete model;
    }
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDENTIFIANT"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("FIRST NAME"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NAME"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATE OF BIRTH"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("GENDER"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("PHONE NUMBER"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("EMAIL"));

return model ;
}
/*ADD*/
bool client::add_client() {
    QSqlQuery query;
    query.prepare("INSERT INTO CLIENTS (CIN,FIRSTNAME,NAME,DOB,GENDER,PHONE,EMAIL,CERTIFICATE,JOINDATE)"
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?)");
    query.bindValue(0, cin);
    query.bindValue(1, firstName);
    query.bindValue(2, name);
    query.bindValue(3, dob);
    query.bindValue(4, gender);
    query.bindValue(5, phoneNumber);
    query.bindValue(6, email);
    query.bindValue(7, certificate);
    query.bindValue(8, joinDate);
    return query.exec();
}
/*DELETE*/
bool client::delete_client(QString cin) {
    QSqlQuery query;
    query.prepare("DELETE FROM CLIENTS WHERE CIN = :cin");
    query.bindValue(0, cin);
    if (query.exec()) {
         // check the number of affected rows
        int numRowsAffected = query.numRowsAffected();

        if (numRowsAffected > 0) {
            // deletion successful
            qDebug() << "Client with CIN" << cin << "deleted successfully";
            return true;
        } else {
            // no rows were affected
            qDebug() << "No client found with CIN" << cin;
            return false;
        }
    } else {
        // error of deleting client
        qDebug() << "Error deleting client with CIN" << cin << "Error:" << query.lastError().text();
        return false;
    }
}
/*UPDATE*/
bool client::update_client(QString CIN , QString firstName , QString name ,QString dob,QString gender,QString phoneNumber ,QString email) {
    QSqlQuery query;
    query.prepare("UPDATE CLIENTS SET FIRSTNAME = :firstName, NAME = :name, DOB = :dob, GENDER = :gender, PHONE = :phoneNumber, EMAIL = :email, CERTIFICATE = :certificate  WHERE CIN = :cin");
    query.bindValue(":cin", CIN);
    query.bindValue(":firstName", firstName);
    query.bindValue(":name", name);
    query.bindValue(":dob", dob);
    query.bindValue(":gender", gender);
    query.bindValue(":phoneNumber", phoneNumber);
    query.bindValue(":email", email);
    query.bindValue(":certificate", this->certificate);
    if (!query.exec()) {
        //qDebug() << "Query execution error:" << query.lastError().text();
    }
    return query.exec();
}
