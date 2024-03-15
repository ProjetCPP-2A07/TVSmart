#include "interface_employe.h"
#include "ui_interface_employe.h"
#include"employe.h"
#include<QMessageBox>
interface_employe::interface_employe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::interface_employe)
{
    ui->setupUi(this);
}

interface_employe::~interface_employe()
{
    delete ui;
}


void interface_employe::on_pushButton_clicked()
{
    int id=ui->id->text().toInt();
    int salaire=ui->salaire->text().toInt();

    QString type=ui->type->text();
     QString nom=ui->nom->text();
      QString prenom=ui->prenom->text();
    Employe C(id,salaire,nom,prenom,type);

        bool test=C.ajouter();
        if(test)
              {    QMessageBox::information(nullptr, QObject::tr("ajout avec succes"),
                                            QObject::tr("ajout successful.\n"
                                                        "Click Cancel to exit."), QMessageBox::Cancel);
                             ui->tableView->setModel(C.afficher());
              }
                            else
                                QMessageBox::critical(nullptr, QObject::tr("Ajout errer"),
                                            QObject::tr("ajout failed.\n"
                                                        "Click Cancel to exit."), QMessageBox::Cancel);

             ui->id->clear();
             ui->salaire->clear();
             ui->type->clear();
             ui->prenom->clear();
             ui->nom->clear();

}


void interface_employe::on_pushButton_2_clicked()
{   Employe C;
    ui->tableView->setModel(C.afficher());
}

void interface_employe::on_pushButton_3_clicked()
{   Employe v,C;
    int id=ui->id_2->text().toInt();
    bool test=v.supprimer(id);
    if(test)
    {      ui->tableView->setModel(C.afficher());
            QMessageBox::information(nullptr, QObject::tr("suppression avec succes"),
                                      QObject::tr("suppression successful.\n"
                                                  "Click Cancel to exit."), QMessageBox::Cancel);

        }
                      else

                          QMessageBox::critical(nullptr, QObject::tr("suppression errer"),
                                      QObject::tr("suppression failed.\n"
                                                  "Click Cancel to exit."), QMessageBox::Cancel);
}

void interface_employe::on_pushButton_4_clicked()
{
    int id=ui->id->text().toInt();
    int salaire=ui->salaire->text().toInt();

    QString type=ui->type->text();
     QString nom=ui->nom->text();
      QString prenom=ui->prenom->text();
    Employe C(id,salaire,nom,prenom,type);
        bool test=C.modifier();
        if(test)
              {    QMessageBox::information(nullptr, QObject::tr("modifier avec succes"),
                                            QObject::tr("modification successful.\n"
                                                        "Click Cancel to exit."), QMessageBox::Cancel);
                             ui->tableView->setModel(C.afficher());
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
