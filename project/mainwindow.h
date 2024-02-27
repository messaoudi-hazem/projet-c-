#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QMainWindow>
#include<QStackedWidget>
#include<QPushButton>
#include<QApplication>
#include<iostream>
#include"client.h"

#include"connexion.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE
using namespace std ;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:

    /*login page*/

    void on_loginButton_clicked();

    void on_quitButton_clicked();

    /*navbar*/

    void on_home_clicked();

    void on_clients_clicked();

    void on_employees_clicked();

    void on_appointements_clicked();

    void on_treatments_clicked();

    void on_stock_clicked();

    void on_settings_clicked();

    void on_about_us_clicked();

    void on_logout_clicked();

    void on_home_2_clicked();

    void on_clients_2_clicked();

    void on_employees_2_clicked();

    void on_appointements_2_clicked();

    void on_treatments_2_clicked();

    void on_stock_2_clicked();

    void on_settings_2_clicked();

    void on_about_us_2_clicked();

    void on_logout_2_clicked();

    void on_home_3_clicked();

    void on_clients_3_clicked();

    void on_employees_3_clicked();

    void on_appointements_3_clicked();

    void on_treatments_3_clicked();

    void on_stock_3_clicked();

    void on_settings_3_clicked();

    void on_about_us_3_clicked();

    void on_logout_3_clicked();

    void on_home_4_clicked();

    void on_clients_4_clicked();

    void on_employees_4_clicked();

    void on_appointements_4_clicked();

    void on_treatments_4_clicked();

    void on_stock_4_clicked();

    void on_settings_4_clicked();

    void on_about_us_4_clicked();

    void on_logout_4_clicked();

    void on_home_5_clicked();

    void on_clients_5_clicked();

    void on_employees_5_clicked();

    void on_appointements_5_clicked();

    void on_treatments_5_clicked();

    void on_stock_5_clicked();

    void on_settings_5_clicked();

    void on_about_us_5_clicked();

    void on_logout_5_clicked();

    void on_home_6_clicked();

    void on_clients_6_clicked();

    void on_employees_6_clicked();

    void on_appointements_6_clicked();

    void on_treatments_6_clicked();

    void on_stock_6_clicked();

    void on_settings_6_clicked();

    void on_about_us_6_clicked();

    void on_logout_6_clicked();

    void on_home_7_clicked();

    void on_clients_7_clicked();

    void on_employees_7_clicked();

    void on_appointements_7_clicked();

    void on_treatments_7_clicked();

    void on_stock_7_clicked();

    void on_settings_7_clicked();

    void on_about_us_7_clicked();

    void on_logout_7_clicked();

    void on_home_8_clicked();

    void on_clients_8_clicked();

    void on_employees_8_clicked();

    void on_appointements_8_clicked();

    void on_treatments_8_clicked();

    void on_stock_8_clicked();

    void on_settings_8_clicked();

    void on_about_us_8_clicked();

    void on_logout_8_clicked();



    void on_addButton_clicked();

    void on_backtolist_clicked();

    void on_updateButton_clicked();

    void on_backtolist_2_clicked();

    void on_deleteButton_clicked();
 void on_add_val_clicked();

 void on_update_val_clicked();

private:
    Ui::MainWindow *ui;
    client myclient;

    connexion c;
    QMessageBox myBox ;

};
#endif // MAINWINDOW_H
