#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QAbstractItemModel>
#include <QStandardItemModel>
#include <QDateTime>
#include <QMessageBox>
#include <QSqlDatabase>
#include "gs_studio.h"
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QSqlTableModel>
#include "spectator.h"

#include<QIntValidator>
#include<QModelIndex>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tab_stud->setModel(G.afficher());
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_stidio_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_9_clicked()
{
    QModelIndex index = ui->tab_stud->currentIndex();
       int row = index.row();
       QModelIndex col1Index = index.sibling(row, 0);
       QModelIndex col2Index = index.sibling(row, 1);
       QModelIndex col3Index = index.sibling(row, 2);
       QModelIndex col4Index = index.sibling(row, 3);
       QModelIndex col5Index = index.sibling(row, 4);
       QModelIndex col6Index = index.sibling(row, 5);
       QModelIndex col7Index = index.sibling(row, 6);
       QModelIndex col8Index = index.sibling(row, 7);

       QString data1 = ui->tab_stud->model()->data(col1Index).toString();
       QString data2 = ui->tab_stud->model()->data(col2Index).toString();
       QString data3 = ui->tab_stud->model()->data(col3Index).toString();
       QString data4 = ui->tab_stud->model()->data(col4Index).toString();
       QString data5 = ui->tab_stud->model()->data(col5Index).toString();
       QDateTime data6 = ui->tab_stud->model()->data(col6Index).toDateTime();
       QDateTime data7 = ui->tab_stud->model()->data(col7Index).toDateTime();
       QString data8 = ui->tab_stud->model()->data(col8Index).toString();

       ui->nom_3->setText(data1);
       ui->id1_3->setText(data2);
       ui->loc_3->setText(data3);
       ui->eq_3->setText(data4);
       ui->id2_3->setText(data5);
       ui->date1_3->setDateTime(data6);
       ui->date2_3->setDateTime(data7);
       ui->cout_3->setText(data8);

        ui->stackedWidget->setCurrentIndex(6);


}

void MainWindow::on_pushButton_8_clicked()
{
    QModelIndex index=ui->tab_stud->currentIndex();
        int i=index.row();
        QModelIndex in=index.sibling(i,1);
        int val=ui->tab_stud->model()->data(in).toInt();
        gs_studio S1;
        bool test=S1.supprimer(val);
        ui->tab_stud->setModel(G.afficher());
        if (test)
        {
            QMessageBox::information(nullptr, QObject::tr("OK"),
                                     QObject::tr("suppression effectué:\n"
                                                 "Cliquez sur Annuler pour quitter."),
                                     QMessageBox::Cancel);
         //   ui->tab_stud->setModel(G1.afficher());
        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                                  QObject::tr("suppression non effectué:\n"
                                              "Cliquez sur Annuler pour quitter."),
                                  QMessageBox::Cancel);
        }
}




void MainWindow::on_pushButton_10_clicked()
{
    ui->tab_stud->setModel(G.afficher());

}

void MainWindow::on_pushButton_11_clicked()
{
    QString Nom_S = ui->nom->text();
    int ID_S = ui->id1->text().toInt();
    QString localisation = ui->loc->text();
    QString equipement = ui->eq->text();
    int ID_E = ui->id2->text().toInt();
    QDateTime Dispo_de = ui->date1->dateTime();
    QDateTime Dispo_a = ui->date2->dateTime();
    float cout_l = ui->cout->text().toFloat();
    QString Status = ui->stat->currentText();
    gs_studio S(Nom_S, ID_S, localisation, equipement, ID_E, Dispo_de, Dispo_a, cout_l, Status);
    bool test = S.ajouter();
    if (test)
    {
        // Si l'ajout est réussi, affichez les valeurs dans le message d'information.
        QMessageBox::information(this, tr("OK"),
                                 tr("Ajout effectué:\n"
                                    "Cliquez sur Annuler pour quitter."),
                        QMessageBox::Cancel);
    }
    else
    {
        // En cas d'échec, affichez également les valeurs.
        QMessageBox::critical(this, tr("Erreur"),
                               tr("Ajout non effectué:\n"
                                  "Cliquez sur Annuler pour quitter."),
                      QMessageBox::Cancel);
    }
    ui->tab_stud->setModel(G.afficher());
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_pushButton_12_clicked()
{
    QString Nom_S = ui->nom_3->text();
    int ID_S = ui->id1_3->text().toInt();
    QString localisation = ui->loc_3->text();
    QString equipement = ui->eq_3->text();
    int ID_E = ui->id2_3->text().toInt();
    QDateTime Dispo_de = ui->date1_3->dateTime();
    QDateTime Dispo_a = ui->date2_3->dateTime();
    float cout_l = ui->cout_3->text().toFloat();
    QString Status = ui->stat_3->currentText();
    gs_studio S(Nom_S, ID_S, localisation, equipement, ID_E, Dispo_de, Dispo_a, cout_l, Status);
    bool test = S.modifier();
    if (test)
    {
        // Si l'ajout est réussi, affichez les valeurs dans le message d'information.
        QMessageBox::information(this, tr("OK"),
                                 tr("modification effectué:\n"
                                    "Cliquez sur Annuler pour quitter."));
    }
    else
    {
        // En cas d'échec, affichez également les valeurs.
        QMessageBox::critical(this, tr("Erreur"),
                               tr("modification non effectué:\n"
                                  "Cliquez sur Annuler pour quitter."));
    }
    ui->tab_stud->setModel(G.afficher());
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_pushButton_spon_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    // Créez un QSortFilterProxyModel et configurez-le pour fonctionner avec votre modèle de données
    proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(S.afficher());
    ui->tablespon->setModel(proxyModel);
}

void MainWindow::on_ajoutersponsor_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}
//mod
void MainWindow::on_pushButton_26_clicked()
{


        QModelIndex index = ui->tablespon->currentIndex();
        int row = index.row();
        QModelIndex col1Index = index.sibling(row, 0);
        QModelIndex col2Index = index.sibling(row, 1);
        QModelIndex col3Index = index.sibling(row, 2);
        QModelIndex col4Index = index.sibling(row, 3);
        QModelIndex col5Index = index.sibling(row, 4);
        QModelIndex col6Index = index.sibling(row, 5);
        QString data1 = ui->tablespon->model()->data(col1Index).toString();
        QString data2 = ui->tablespon->model()->data(col2Index).toString();
        QDate data3 = ui->tablespon->model()->data(col3Index).toDate();
        QDate data4 = ui->tablespon->model()->data(col4Index).toDate();
        QString data5 = ui->tablespon->model()->data(col5Index).toString();
        QString data6 = ui->tablespon->model()->data(col6Index).toString();


        ui->id1_4->setText(data1);
        ui->nom_4->setText(data2);
        ui->date1_4->setDate(data3);
        ui->date2_4->setDate(data4);
        ui->marq->setText(data6);
        ui->prix->setText(data5);


         ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_pushButton_25_clicked()
{
    int ID_S = ui->id1_5->text().toInt();
    QString nom = ui->nom_5->text();
    float prix_sp = ui->prix_2->text().toFloat();
    QString marque = ui->marq_2->text();
    QDate date_debut = ui->date1_5->date();
    QDate date_fin = ui->date2_5->date();
    sponsor s(ID_S,nom, date_debut,date_fin, prix_sp, marque);
    bool test = s.ajouter();
    if(test)
   {
     QMessageBox::information(nullptr, QObject::tr("Ok"),
                              QObject::tr("Ajout avec succés.\n "
                                          "click cancel to exit . "),QMessageBox::Cancel);

    }
    else

        QMessageBox::information(nullptr, QObject::tr("Not Ok"),
                                 QObject::tr("Ajout impossible.\n "
                                             "click cancel to exit . "),QMessageBox::Cancel);
        ui->tablespon->setModel(S.afficher());




  //nom
        QRegExp regexnom("[A-Za-z]+$");
            if (!nom.contains(regexnom)) {
                QMessageBox::critical(this, tr("Erreur"), tr("Le champ nom ne doit contenir que des lettres."), QMessageBox::Cancel);
                return;
            }

  //marque


            QRegExp regexmarq("[A-Za-z]+$");
            if (!marque.contains(regexmarq)) {
             QMessageBox::critical(this, tr("Erreur"), tr("Le champ marque ne doit contenir que des lettres."), QMessageBox::Cancel);
             return;
            }

    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_24_clicked()
{
    int ID_S = ui->id1_4->text().toInt();
    QString Nom_S = ui->nom_4->text();
    QDate Date_de = ui->date1_4->date();
    QDate Date_a = ui->date2_4->date();
    QString marque = ui->marq->text();
    float prix = ui->prix->text().toFloat();
    sponsor s1(ID_S,Nom_S,Date_de,Date_a, prix , marque);
    bool test = s1.modifier();
    if (test)
    {
        // Si l'ajout est réussi, affichez les valeurs dans le message d'information.
        QMessageBox::information(this, tr("OK"),
                                 tr("modification effectué:\n"
                                    "Cliquez sur Annuler pour quitter."));
    }
    else
    {
        // En cas d'échec, affichez également les valeurs.
        QMessageBox::critical(this, tr("Erreur"),
                               tr("modification non effectué:\n"
                                  "Cliquez sur Annuler pour quitter."));
    }
    ui->tablespon->setModel(S.afficher());
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_23_clicked()
{
    QModelIndex index=ui->tablespon->currentIndex();
        int i=index.row();
        QModelIndex in=index.sibling(i,0);
        int val=ui->tablespon->model()->data(in).toInt();
       sponsor s;
        bool test=s.supprimer(val);
        ui->tablespon->setModel(S.afficher());
        if (test)
        {
            QMessageBox::information(nullptr, QObject::tr("OK"),
                                     QObject::tr("suppression effectué:\n"
                                                 "Cliquez sur Annuler pour quitter."),
                                     QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                                  QObject::tr("suppression non effectué:\n"
                                              "Cliquez sur Annuler pour quitter."),
                                  QMessageBox::Cancel);
        }
}

void MainWindow::on_ref_clicked()
{
    ui->tablespon->setModel(S.afficher());
}
void MainWindow::on_rechercher_clicked()
{
    QString recherche = ui->lineEdit_recherche->text();
    QSqlQueryModel* model = S.rechercher(recherche);
    ui->tablespon->setModel(model);
}


void MainWindow::on_trier_clicked()
{

    ui->tablespon->setModel(S.trierParPrix());


}




void MainWindow::on_pushButton_spectateur_clicked()
{
    ui->le_id_2->setValidator( new QIntValidator(0, 99999, this));
    //ui->le_num->setValidator( new QIntValidator(20000000, 99999999 , this));
    ui->le_num_2->setValidator(new QRegExpValidator(QRegExp("^\\d{8}$"), this));
    // Populate the TableView with initial data
    QSqlTableModel *model = new QSqlTableModel(this);
    model->setTable("SPECTATEUR");
    model->select();
    ui->tablespect->setModel(model);
    ui->stackedWidget->setCurrentIndex(9);
}

void MainWindow::on_pb_ajouter_2_clicked()
{
    // Extract data from UI elements
    int cin = ui->le_id_2->text().toInt();
    QString nom = ui->le_nom_2->text();
    QString prenom = ui->le_prenom_2->text();
    QString email = ui->le_mail_2->text();
    QString adresse = ui->le_adresse_2->text();
    int phone = ui->le_num_2->text().toInt();
    int age = ui->age->text().toInt();

    //Spectator newSpectator(cin, age, phone, adresse, email, nom, prenom);
    Spectator S2(cin,age,phone,adresse,email,nom,prenom);
    QRegularExpression re("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");
    QRegularExpressionMatch match = re.match(email);

    // QString num_string = QString::number(numtelephone);
    QRegularExpression re1("^(2|3|4|5|7)\\d{7}$");
   // QRegularExpressionMatch match1 = re1.match(phone);

    QRegularExpression re2("^[A-Za-z\\s]{1,20}$");
    QRegularExpressionMatch match2 = re2.match(nom);
    QRegularExpressionMatch match3 = re2.match(prenom);

    if ((!match.hasMatch()) ||  (!match2.hasMatch()) || (!match3.hasMatch())) {
        if(!match.hasMatch())
            QMessageBox::critical(this, "Error", "Invalid email format.");
        // else if(!match1.hasMatch())
          //  QMessageBox::critical(this, "Error", "Invalid numero telephone");
        else if((!match2.hasMatch()))
            QMessageBox::critical(this, "Error", "Invalid Nom format.");
        else if((!match3.hasMatch()))
            QMessageBox::critical(this, "Error", "Invalid Prenom format.");

    }

    else{
    bool test=S2.ajouterSpectator();
    if(test)
    {
        QMessageBox::information(nullptr , QObject::tr("OK"),
                                 QObject::tr("Ajout effectué\n ""Click Cancel to exit."), QMessageBox::Cancel);
        ui->tablespect->setModel(S2.afficherSpectator());

        ui->le_id_2->setText("");
        ui->le_nom_2->setText("");
        ui->le_prenom_2->setText("");
        ui->le_mail_2->setText("");
        ui->le_adresse_2->setText("");
        ui->le_num_2->setText("");
        ui->age->setText("");



    }

    else
        QMessageBox::critical(nullptr , QObject::tr("Not OK"),
                              QObject::tr("Ajout non effectué.\n" " Click Cancel to exit."), QMessageBox::Cancel);
    // The email input is valid. Proceed with the confirmation.
    }

}

void MainWindow::on_BoutonSupprimer_2_clicked()
{
    if(selected_service == -1)
    {
        QMessageBox::warning(this, "Error", "Nothing is selected!");
        return;
    }

    int id = ui->tablespect->model()->index(selected_service,0).data().toInt();

    if(S1.deleteSpectator(id))
    {
        QMessageBox::information(this, "Success", "Spectator deleted successfull");
        selected_service=-1;
        ui->tablespect->setModel(S1.afficherSpectator());
    }
    else
    {
        QMessageBox::warning(this, "Error", "Error while deleting a Spectator ");
    }

}

void MainWindow::on_BoutonModifier_2_clicked()
{
    int cin = ui->le_id_2->text().toInt();
    QString nom = ui->le_nom_2->text();
    QString prenom = ui->le_prenom_2->text();
    QString email = ui->le_mail_2->text();
    QString adresse = ui->le_adresse_2->text();
    int phone = ui->le_num_2->text().toInt();
    int age = ui->age->text().toInt();

    QRegularExpression re("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");
    QRegularExpressionMatch match = re.match(email);

    // QString num_string = QString::number(numtelephone);
    QRegularExpression re1("^(2|3|4|5|7)\\d{7}$");
    // QRegularExpressionMatch match1 = re1.match(phone);

    QRegularExpression re2("^[A-Za-z\\s]{1,20}$");
    QRegularExpressionMatch match2 = re2.match(nom);
    QRegularExpressionMatch match3 = re2.match(prenom);

    if ((!match.hasMatch()) ||  (!match2.hasMatch()) || (!match3.hasMatch())) {
        if(!match.hasMatch())
            QMessageBox::critical(this, "Error", "Invalid email format.");
        // else if(!match1.hasMatch())
        //  QMessageBox::critical(this, "Error", "Invalid numero telephone");
        else if((!match2.hasMatch()))
            QMessageBox::critical(this, "Error", "Invalid Nom format.");
        else if((!match3.hasMatch()))
            QMessageBox::critical(this, "Error", "Invalid Prenom format.");

    }
    else{
    bool test=S1.updateSpectator(cin,nom, prenom, email , adresse,phone ,age);
    if(test)
    {
        QMessageBox::information(nullptr , QObject::tr("OK"),
                                 QObject::tr("Modification effectué\n ""Click Cancel to exit."), QMessageBox::Cancel);
        ui->tablespect->setModel(S1.afficherSpectator());

        ui->le_id_2->setText("");
        ui->le_nom_2->setText("");
        ui->le_prenom_2->setText("");
        ui->le_mail_2->setText("");
        ui->le_adresse_2->setText("");
        ui->le_num_2->setText("");
        ui->age->setText("");


    }
    else
        QMessageBox::critical(nullptr , QObject::tr("Not OK"),
                              QObject::tr("Modification non effectué.\n" " Click Cancel to exit."), QMessageBox::Cancel);
    }




}

void MainWindow::on_pb_gotomodifier_clicked()
{
    if(selected_service == -1)
    {
        QMessageBox::warning(this, "Error", "Nothing is selected!");
        return;
    }
    // long numtelephone=ui->le_num->text().toInt();
    ui->le_id_2->setText(ui->tablespect->model()->index(selected_service,0).data().toString());
    ui->le_nom_2->setText(ui->tablespect->model()->index(selected_service,1).data().toString());
    ui->le_prenom_2->setText(ui->tablespect->model()->index(selected_service,2).data().toString());
    ui->le_mail_2->setText(ui->tablespect->model()->index(selected_service,3).data().toString());
    ui->le_adresse_2->setText(ui->tablespect->model()->index(selected_service,4).data().toString());
    ui->le_num_2->setText(ui->tablespect->model()->index(selected_service,5).data().toString());
    ui->age->setText(ui->tablespect->model()->index(selected_service,6).data().toString());

        //ui->le_passeword->setText(ui->tab_employe->model()->index(selected_service,7).data().toString());

    //ui->stackedWidget->setCurrentIndex(2);
    ui->Employer->setCurrentWidget(ui->Ajouter_2);
}

void MainWindow::on_tablespect_clicked(const QModelIndex &index)
{
    selected_service = index.row();
}

void MainWindow::on_pushButton_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_empole_clicked()
{
     ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_14_clicked()
{
    int id=ui->id->text().toInt();
    int salaire=ui->salaire->text().toInt();
    QString type=ui->type->text();
    QString nom=ui->nom_2->text();
    QString prenom=ui->prenom->text();
    Employe C(id,salaire,nom,prenom,type);

        bool test= C.ajouter();
        if(test)
              {    QMessageBox::information(nullptr, QObject::tr("ajout avec succes"),
                                            QObject::tr("ajout successful.\n"
                                                        "Click Cancel to exit."), QMessageBox::Cancel);
                             ui->tabemppp->setModel(C.afficher());
              }
                            else
                                QMessageBox::critical(nullptr, QObject::tr("Ajout errer"),
                                            QObject::tr("ajout failed.\n"
                                                        "Click Cancel to exit."), QMessageBox::Cancel);

             ui->id->clear();
             ui->salaire->clear();
             ui->type->clear();
             ui->prenom->clear();
             ui->nom_2->clear();

}

void MainWindow::on_pushButton_13_clicked()
{
    int id=ui->id->text().toInt();
    int salaire=ui->salaire->text().toInt();
    QString type=ui->type->text();
    QString nom=ui->nom_2->text();
    QString prenom=ui->prenom->text();
    Employe C(id,salaire,nom,prenom,type);
        bool test=C.modifier();
        if(test)
              {    QMessageBox::information(nullptr, QObject::tr("modifier avec succes"),
                                            QObject::tr("modification successful.\n"
                                                        "Click Cancel to exit."), QMessageBox::Cancel);
                             ui->tabemppp->setModel(C.afficher());
              }
                            else
                                QMessageBox::critical(nullptr, QObject::tr("modifier errer"),
                                            QObject::tr("modifier failed.\n"
                                                        "Click Cancel to exit."), QMessageBox::Cancel);

             ui->id->clear();
             ui->salaire->clear();
             ui->type->clear();
             ui->prenom->clear();
             ui->nom->clear();
}

void MainWindow::on_pushButton_15_clicked()
{
    Employe C;
    ui->tabemppp->setModel(C.afficher());
}

void MainWindow::on_pushButton_16_clicked()
{
    Employe v,C;
       int id=ui->id_2->text().toInt();
       bool test=v.supprimer(id);
       if(test)
       {      ui->tabemppp->setModel(C.afficher());
               QMessageBox::information(nullptr, QObject::tr("suppression avec succes"),
                                         QObject::tr("suppression successful.\n"
                                                     "Click Cancel to exit."), QMessageBox::Cancel);

           }
                         else

                             QMessageBox::critical(nullptr, QObject::tr("suppression errer"),
                                         QObject::tr("suppression failed.\n"
                                                     "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_showList_em_clicked()
{
     ui->stackedWidget->setCurrentIndex(10);
     QTableView* tableViewEm = ui->emission_tableview;
     tableViewEm->setModel(Em.afficher_em());
}

void MainWindow::on_pushButton_17_clicked()
{
     ui->stackedWidget->setCurrentIndex(11);
}

void MainWindow::on_pushButton_18_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);
}

void MainWindow::on_done_clicked()
{
    int id=ui->nom_13->text().toInt();
    QString nom=ui->nom_6->text();
    QString duree=ui->duree->text();
    QString date=ui->date->dateTime().toString("yyyy-MM-dd HH:mm:ss");
    Emission e(id,nom,duree,date);
    bool test=e.ajouter_emission();
    if (test){
        QMessageBox::information(nullptr,QObject::tr("ok"),
                                QObject::tr("done"),QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr,QObject::tr("not Ok"),
                              QObject::tr("non aff"),QMessageBox::Cancel);
    ui->stackedWidget->setCurrentIndex(10);
    QTableView* tableViewEm = ui->emission_tableview;
    tableViewEm->setModel(Em.afficher_em());
}

void MainWindow::on_pushButton_confirmer_clicked()
{

    QComboBox* comboBoxDel = ui->comboBox_DelEmission;
    QString selectedItemText = comboBoxDel->currentText();

    int id = selectedItemText.toInt();

    //QLineEdit* lineEdit_nom = ui->stackedWidget->findChild<QLineEdit*>("lineEdit_nom");
    QString nom = ui->lineEdit_nom->text();

    //QTimeEdit* timeEdit_duree = ui->stackedWidget->findChild<QTimeEdit*>("timeEdit_duree");
    QString duree = ui->timeEdit_duree->text();

    //QDateTimeEdit* dateTimeEdit_date = ui->stackedWidget->findChild<QDateTimeEdit*>("dateTimeEdit_date");
    QString date = ui->dateTimeEdit_date->dateTime().toString("yyyy-MM-dd HH:mm:ss");
    Emission em(id, nom, duree, date);
    bool success = em.edit_emission(id);

    if (success) {
        QTableView* tableViewEm = ui->emission_tableview;
        tableViewEm->setModel(Em.afficher_em());
        QMessageBox::information(nullptr, QObject::tr("Updated!"),
                                 QObject::tr("The element is updated.\nClick OK to exit."),
                                 QMessageBox::Ok);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Edit Failed"),
                              QObject::tr("Failed to edit emission."),
                              QMessageBox::Ok);
    }
    ui->stackedWidget->setCurrentIndex(10);
    QTableView* tableViewEm = ui->emission_tableview;
    tableViewEm->setModel(Em.afficher_em());
}

void MainWindow::on_rechh_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);
}

void MainWindow::on_recherche_emm_clicked()
{
    QComboBox * comoboDel=ui->comboBox_DelEmission;
    QString selectedItemText = comoboDel -> currentText();
    QString nom = ui->searchLineEdit->text();
       Emission emissionTrouvee = Em.rechercherEmissionParNom(nom);
       if (!emissionTrouvee.getnom().isEmpty()) {
           // Émission trouvée
           // Faites quelque chose avec l'objet emissionTrouvee
           QTableView * Tableviewem = ui->emission_tableview;
           Tableviewem -> setModel(Em.afficher_em());
           //ui->stackedWidget->setCurrentIndex(3);
           QMessageBox::information(nullptr, QObject::tr("Émission trouvée"),
               QObject::tr("Nom : %1\nDurée : %2\nDate : %3")
                   .arg(emissionTrouvee.getnom())
                   .arg(emissionTrouvee.getduree())
                   .arg(emissionTrouvee.getdate()),
               QMessageBox::Ok);
           comoboDel -> clear();
       } else {
           // Émission non trouvée
           QMessageBox::information(nullptr, QObject::tr("Émission non trouvée"),
               QObject::tr("Aucune émission trouvée avec le nom : %1").arg(nom),
               QMessageBox::Ok);
       }
}

void MainWindow::on_pushButton_19_clicked()
{
    QComboBox * comoboDel=ui->comboBox_DelEmission;
    QString selectedItemText = comoboDel -> currentText();
      int ID = selectedItemText.toInt();
      bool test1 = Em.supprimer_emission(ID);

      if (test1) {

          QTableView * Tableviewem = ui->emission_tableview;
          Tableviewem -> setModel(Em.afficher_em());

          QMessageBox::information(nullptr, QObject::tr("Deleted!"),
            QObject::tr("The element is deleted \n"
              "Click ok to exit."),
            QMessageBox::Ok);
          comoboDel -> clear();
          comoboDel -> addItems(Em.getEmissionIds());


        } else {
          QMessageBox::critical(nullptr, QObject::tr("Error"),
            QObject::tr("The element is refused \n"
              "Click ok to exit."),
            QMessageBox::Ok);
        }
}

void MainWindow::on_rech_2_textChanged(const QString &arg1)
{
    if(arg1=="")
    {
        ui->tab_stud->setModel(G.afficher());
    }
    else
    {
        int val=arg1.toInt();
        ui->tab_stud->setModel(G.chercher(val));
    }
}

void MainWindow::on_pushButton_45_clicked()
{
    QSqlQueryModel *model = G.trierParSALAIRE(); // Assurez-vous que la méthode s'appelle trierParSalaire dans votre classe employee

    if (model->rowCount() > 0) { // Utilisez rowCount() pour vérifier si le modèle contient des données
        ui->tab_stud->setModel(model); // Mettez à jour le modèle de votre vue tableau (ajustez le nom si nécessaire)
        QMessageBox::information(this, "Tri par cout_l", "Le studio ont été triés ");
    } else {
        QMessageBox::information(this, "Tri par cout_l", "Aucun studio trouvé.");
    }
}
