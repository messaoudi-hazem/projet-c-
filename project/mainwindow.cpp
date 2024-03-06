#include "mainwindow.h"
#include "./ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->clients);
    qDebug() << QSqlDatabase::drivers();
    QIntValidator* cinValidator = new QIntValidator(0, 99999999, this);
    myBox.setStyleSheet("QMessageBox{"
                        "background-color: white; "
                        "color: white;"
                        ""
                        ""
                        ""
                        "}");
    ui->cin_in->setValidator(cinValidator);
    ui->cin_in->setMaxLength(8);
    ui->phone_in->setValidator(cinValidator);
    ui->phone_in->setMaxLength(8);
    ui->up_phone_in->setValidator(cinValidator);
    ui->up_phone_in->setMaxLength(8);
    ui->adminRadioButton->setChecked(true);
    ui->gender_in->addItem("male");
    ui->gender_in->addItem("female");
    ui->up_gender_in->addItem("male");
    ui->up_gender_in->addItem("female");

    c.connect();
    if (c.check_data_base()) {
            ui->clients_table->setModel(myclient.display_all_clients());
            ui->up_del_cin_in->setModel(myclient.display_all_clients());

    } else {
        qDebug() << "db is not open.";
    }

}
MainWindow::~MainWindow()
{
    delete ui;
}
/*home page navbar*/
void MainWindow::on_home_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->home_page);
}

void MainWindow::on_clients_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->patient_page);
}

void MainWindow::on_employees_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->employees_page);
}
void MainWindow::on_appointements_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->appointments_page);
}

void MainWindow::on_treatments_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->treatments_page);
}

void MainWindow::on_stock_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->stock_page);
}

void MainWindow::on_settings_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->settings_page);
}

void MainWindow::on_about_us_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->about_us_page);
}

void MainWindow::on_logout_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->login_page);
}
/*patient page navbar*/
void MainWindow::on_home_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->home_page);
}

void MainWindow::on_clients_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->patient_page);
}

void MainWindow::on_employees_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->employees_page);
}
void MainWindow::on_appointements_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->appointments_page);
}

void MainWindow::on_treatments_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->treatments_page);
}

void MainWindow::on_stock_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->stock_page);
}

void MainWindow::on_settings_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->settings_page);
}

void MainWindow::on_about_us_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->about_us_page);
}

void MainWindow::on_logout_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->login_page);
}
/*kiné page navbar*/
void MainWindow::on_home_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->home_page);
}

void MainWindow::on_clients_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->patient_page);
}

void MainWindow::on_employees_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->employees_page);
}


void MainWindow::on_appointements_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->appointments_page);
}

void MainWindow::on_treatments_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->treatments_page);
}

void MainWindow::on_stock_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->stock_page);
}

void MainWindow::on_settings_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->settings_page);
}

void MainWindow::on_about_us_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->about_us_page);
}

void MainWindow::on_logout_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->login_page);
}
/*appointment page navbar*/
void MainWindow::on_home_4_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->home_page);
}

void MainWindow::on_clients_4_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->patient_page);
}

void MainWindow::on_employees_4_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->employees_page);
}


void MainWindow::on_appointements_4_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->appointments_page);
}

void MainWindow::on_treatments_4_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->treatments_page);
}

void MainWindow::on_stock_4_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->stock_page);
}

void MainWindow::on_settings_4_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->settings_page);
}

void MainWindow::on_about_us_4_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->about_us_page);
}

void MainWindow::on_logout_4_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->login_page);
}
/*treatment page navbar*/
void MainWindow::on_home_5_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->home_page);
}

void MainWindow::on_clients_5_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->patient_page);
}

void MainWindow::on_employees_5_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->employees_page);
}


void MainWindow::on_appointements_5_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->appointments_page);
}

void MainWindow::on_treatments_5_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->treatments_page);
}

void MainWindow::on_stock_5_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->stock_page);
}

void MainWindow::on_settings_5_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->settings_page);
}

void MainWindow::on_about_us_5_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->about_us_page);
}

void MainWindow::on_logout_5_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->login_page);
}
/*equipments page navbar*/
void MainWindow::on_home_6_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->home_page);
}

void MainWindow::on_clients_6_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->patient_page);
}

void MainWindow::on_employees_6_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->employees_page);
}


void MainWindow::on_appointements_6_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->appointments_page);
}

void MainWindow::on_treatments_6_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->treatments_page);
}

void MainWindow::on_stock_6_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->stock_page);
}

void MainWindow::on_settings_6_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->settings_page);
}

void MainWindow::on_about_us_6_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->about_us_page);
}

void MainWindow::on_logout_6_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->login_page);
}
/*about us page navbar*/
void MainWindow::on_home_7_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->home_page);
}

void MainWindow::on_clients_7_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->patient_page);
}

void MainWindow::on_employees_7_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->employees_page);
}


void MainWindow::on_appointements_7_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->appointments_page);
}

void MainWindow::on_treatments_7_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->treatments_page);
}

void MainWindow::on_stock_7_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->stock_page);
}

void MainWindow::on_settings_7_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->settings_page);
}

void MainWindow::on_about_us_7_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->about_us_page);
}

void MainWindow::on_logout_7_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->login_page);
}
/* settings page navbar*/
void MainWindow::on_home_8_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->home_page);
}

void MainWindow::on_clients_8_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->patient_page);
}

void MainWindow::on_employees_8_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->employees_page);
}


void MainWindow::on_appointements_8_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->appointments_page);
}

void MainWindow::on_treatments_8_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->treatments_page);
}

void MainWindow::on_stock_8_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->stock_page);
}

void MainWindow::on_settings_8_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->settings_page);
}

void MainWindow::on_about_us_8_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->about_us_page);
}

void MainWindow::on_logout_8_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->login_page);
}


void MainWindow::on_quitButton_clicked()
{
    QCoreApplication::quit();
}
void MainWindow::on_add_val_clicked()
{
    myclient.setCin(ui->cin_in->text());
    myclient.setName(ui->name_in->text());
    myclient.setFirstName(ui->firstname_in->text());
    myclient.setDateOfBirth(ui->dob_in->text());
    myclient.setGender(ui->gender_in->currentText());
    myclient.setPhoneNumber(ui->phone_in->text());
    myclient.setEmail(ui->email_in->text());
    myclient.setJoinDate(QDate::currentDate());
    if(myclient.getCin().length() == 8 && myclient.getPhoneNumber().length() == 8){
        ui->cin_error->setText("");
        ui->phone_error->setText("");
        if(myclient.add_client()){
            ui->clients_table->setModel(myclient.display_all_clients());

            ui->clients_table->setModel(myclient.display_all_clients());
            ui->up_del_cin_in->setModel(myclient.display_all_clients());
            ui->patient_operations->setCurrentWidget(ui->list);

            myBox.information(this, "Client Added", QString(myclient.getFirstName() + " added to clients table"));
            ui->cin_in->clear();
            ui->name_in->clear();
            ui->firstname_in->clear();
            ui->dob_in->clear();
            ui->phone_in->clear();
            ui->email_in->clear();
        }
        else{
            myBox.information(this, "Client not Added","error 404");
        }
    }
    else {
        if(myclient.getCin().length() != 8){
            ui->cin_error->setText("the minimum lenght of CIN is 8 numbers");
        }
        if(myclient.getPhoneNumber().length() != 8){
            ui->phone_error->setText("the minimum lenght of phone number is 8 numbers");
        }
    }
}
void MainWindow::on_update_val_clicked()
{
    QString up_cin_in = ui->up_del_cin_in->currentText();
    QString up_first_name_in = ui->up_first_name_in->text();
    QString up_name_in = ui->up_name_in->text();
    QString up_dob_in = ui->up_dob_in->text();
    QString up_gender_in = ui->up_gender_in->currentText();
    QString up_phone_in = ui->up_phone_in->text();
    QString up_email_in = ui->up_email_in->text();
    if (myclient.update_client(up_cin_in,up_first_name_in,up_name_in,up_dob_in,up_gender_in,up_phone_in,up_email_in)){
        ui->clients_table->setModel(myclient.display_all_clients());
        ui->up_del_cin_in->setModel(myclient.display_all_clients());
        ui->patient_operations->setCurrentWidget(ui->list);

        myBox.information(this, "Client Updated", QString("the infos of client : " + up_cin_in + " are updated"));
    }
}

void MainWindow::on_export_to_pdf_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(nullptr, "Save PDF", "", "PDF Files (*.pdf);;All Files (*)");
           if (!fileName.isEmpty()) {
               myclient.exportModelToPdf(myclient.display_all_clients(), fileName);
           }
}

void MainWindow::on_export_to_exel_clicked()
{
    QString csvFileName = QFileDialog::getSaveFileName(nullptr, "Save CSV", "", "CSV Files (*.csv);;All Files (*)");
        if (!csvFileName.isEmpty()) {
            myclient.exportToCsv(myclient.display_all_clients(), csvFileName);
        }
}
void MainWindow::on_export_to_txt_clicked()
{
    QString txtFileName = QFileDialog::getSaveFileName(nullptr, "Save txt", "", "TXT Files (*.txt);;All Files (*)");
        if (!txtFileName.isEmpty()) {
            myclient.exportToTxt(myclient.display_all_clients(),txtFileName);
        }
}


void MainWindow::on_all_search_in_textChanged()
{
    QString searchValue = ui->all_search_in->text();
    if(myclient.search_client_by_all(searchValue) == NULL){
        ui->clients_table->setModel(myclient.display_all_clients());
        ui->up_del_cin_in->setModel(myclient.display_all_clients());
    }
    else {
       ui->clients_table->setModel(myclient.search_client_by_all(searchValue));
       ui->up_del_cin_in->setModel(myclient.search_client_by_all(searchValue));
    }
}

void MainWindow::on_addButton_clicked()
{
    ui->patient_operations->setCurrentWidget(ui->add);
}

void MainWindow::on_backtolist_clicked()
{
     ui->patient_operations->setCurrentWidget(ui->list);
}

void MainWindow::on_updateButton_clicked()
{       QString cin = ui->up_del_cin_in->currentText();
        QSqlQuery query ;
        query.prepare("SELECT * FROM CLIENTS WHERE CIN = :cin");
        query.bindValue(":cin", cin);
        if(query.exec()){
            while(query.next()){
                ui->up_cin_in->setText(query.value(0).toString());
                ui->up_name_in->setText(query.value(2).toString());
                ui->up_first_name_in->setText(query.value(1).toString());
                ui->up_dob_in->setText(query.value(3).toString());
                ui->up_gender_in->setCurrentText(query.value(4).toString());
                ui->up_phone_in->setText(query.value(5).toString());
                ui->up_email_in->setText(query.value(6).toString());
                myclient.setCertificate(query.value(7).toByteArray());
            }
        }
    ui->patient_operations->setCurrentWidget(ui->update);
}

void MainWindow::on_backtolist_2_clicked()
{
    ui->patient_operations->setCurrentWidget(ui->list);
}
void MainWindow::on_deleteButton_clicked()
{
    QString del_cin = ui->up_del_cin_in->currentText();
    if(myclient.delete_client(del_cin)){
                ui->clients_table->setModel(myclient.display_all_clients());
                ui->up_del_cin_in->setModel(myclient.display_all_clients());

                myBox.information(this, "Client Deleted", QString(" The client : " + del_cin + " is deleted"));
            } else {
                qDebug() << "database is not open";
            }
}


