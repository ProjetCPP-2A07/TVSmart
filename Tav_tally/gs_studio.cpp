#include "gs_studio.h"
#include <QSqlQuery>
#include<QtDebug>
#include <QSqlError>
#include<QObject>
#include"connection.h"
#include<QMessageBox>
gs_studio::gs_studio()
{
    Nom_S="", localisation="",equipement="", Status="";
    cout_l=0,ID_S=0,ID_E=0;
    Dispo_de= QDateTime::currentDateTime();
    Dispo_a= QDateTime::currentDateTime();
}


gs_studio::gs_studio(QString Nom_S,int ID_S,QString localisation,QString equipement,int ID_E,QDateTime Dispo_de,QDateTime Dispo_a,float cout_l,QString Status)
{
    this->Nom_S=Nom_S;this->ID_S=ID_S;this->localisation=localisation;this->equipement=equipement;this->ID_E=ID_E;this->Dispo_de=Dispo_de;this->Dispo_a=Dispo_a;this->cout_l=cout_l;this->Status=Status;
}
//getter
QString gs_studio::getNom_S(){return Nom_S; }
int gs_studio::getID_S(){return ID_S;}
QString gs_studio::getlocalisation(){return localisation;}
QString gs_studio::getequipement(){return equipement;}
int gs_studio::getID_E(){return ID_E; }
QDateTime gs_studio::getDispo_de(){return Dispo_de;}
QDateTime gs_studio::getDispo_a(){return Dispo_a;}
float gs_studio::getcout_l(){return cout_l;}
QString gs_studio::getStatus(){return Status;}
//setter
void gs_studio::setNom_S(QString Nom_S) {this->Nom_S = Nom_S;}
void gs_studio::setID_S(int ID_S){this->ID_S=ID_S;}
void gs_studio::setlocalisation(QString localisation){this->localisation=localisation;}
void gs_studio::setequipement(QString equipement){this->equipement=equipement;}
void gs_studio::setID_E(int ID_E) {this->ID_E = ID_E;}
void gs_studio::setDispo_de(QDateTime Dispo_de){this->Dispo_de=Dispo_de;}
void gs_studio::setDispo_a(QDateTime Dispo_a){this->Dispo_a=Dispo_a;}
void gs_studio::setcout_l(float cout_l){this->cout_l=cout_l;}
void gs_studio::setStatus(QString Status){this->Status=Status;}



bool gs_studio::ajouter()
{
    bool test = false;
    QSqlQuery query;
    QString p1=QString::number(ID_S);
    QString p2 =QString::number(ID_E);
    QString p3=QString::number(cout_l);
    query.prepare("INSERT INTO STUDIO (NOM_S, ID_S, LOCALISATION, EQUIPEMENT,ID_E, DISPO_DE, DISPO_A, COUT_L,STATUS) "
                  "VALUES (:NOM_S, :ID_S, :LOCALISATION, :EQUIPEMENT,:ID_E, :DISPO_DE, :DISPO_A, :COUT_L,:STATUS)");
    query.bindValue(":NOM_S", Nom_S);
    query.bindValue(":ID_S", p1);
    query.bindValue(":LOCALISATION", localisation);
    query.bindValue(":EQUIPEMENT", equipement);
    query.bindValue(":ID_E", p2);
    query.bindValue(":DISPO_DE", Dispo_de);
    query.bindValue(":DISPO_A", Dispo_a);
    query.bindValue(":COUT_L", p3);
    query.bindValue(":STATUS", Status);

    if (query.exec()) {
        test = true;  // L'insertion a réussi, définissez test sur true
    } else {
        qDebug() << "Erreur d'insertion : " << query.lastError().text();
    }

    return test;
}


bool gs_studio::supprimer(int ID_S)
{
    QString ID_S1=QString::number(ID_S);
    bool test = false;
    QSqlQuery query1;
    query1.prepare("DELETE FROM STUDIO WHERE ID_S = :ID_S");
    query1.bindValue(":ID_S", ID_S1);
    if (query1.exec())
    {
        test = true; // La suppression a réussi, définissez test sur true
    }
    else
    {
        qDebug() << "Erreur de suppression : " << query1.lastError().text();
    }

    return test;
}



QSqlQueryModel* gs_studio::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();

    model->setQuery("SELECT * FROM STUDIO");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom du Studio"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID Studio"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("Localisation"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("Equipement"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID_E"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("Disponibel de"));
          model->setHeaderData(6, Qt::Horizontal, QObject::tr("Disponibel a"));
          model->setHeaderData(7, Qt::Horizontal, QObject::tr("Cout de Location"));
          model->setHeaderData(8, Qt::Horizontal, QObject::tr("Status"));


    return model;
}



bool gs_studio::modifier()
{
    QString ID_S1 = QString::number(ID_S);
    QString p2 =QString::number(ID_E);
    QString p3=QString::number(cout_l);
    QSqlQuery query;
          query.prepare("UPDATE STUDIO "" SET NOM_S=:NOM_S, ID_S=:ID_S, LOCALISATION=:LOCALISATION , EQUIPEMENT=:EQUIPEMENT,ID_E=:ID_E, DISPO_DE=:DISPO_DE, DISPO_A=:DISPO_A , COUT_L=:COUT_L , STATUS=:STATUS where ID_S='"+ID_S1+"' ");
          query.bindValue(":NOM_S", Nom_S);
          query.bindValue(":ID_S", ID_S1);
          query.bindValue(":LOCALISATION", localisation);
          query.bindValue(":EQUIPEMENT", equipement);
          query.bindValue(":ID_E", p2);
          query.bindValue(":DISPO_DE", Dispo_de);
          query.bindValue(":DISPO_A", Dispo_a);
          query.bindValue(":COUT_L", p3);
          query.bindValue(":STATUS", Status);
     return    query.exec();
}

QSqlQueryModel* gs_studio::trierParSALAIRE()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM STUDIO ORDER BY COUT_L ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom du Studio"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID Studio"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Localisation"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Equipement"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID_E"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Disponibel de"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Disponibel a"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Cout de Location"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("Status"));

    return model;
}

QSqlQueryModel* gs_studio::chercher(int mat)
{
     QString p1=QString::number(mat);
     QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM STUDIO WHERE ID_S LIKE '%" + p1 + "%'");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom du Studio"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID Studio"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Localisation"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Equipement"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID_E"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Disponibel de"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Disponibel a"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Cout de Location"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("Status"));

     return model;
}




