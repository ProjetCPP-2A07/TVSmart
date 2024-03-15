#include <iostream>
#include <vector>
#include <QSqlQuery>
#include <QtDebug>
#include <QString>
#include <QIntValidator>
#include <QObject>
#include <QMessageBox>
#include <QTextDocument>
#include <QTextStream>
#include <QComboBox>
#include <QTabWidget>
#include <QSqlTableModel>
#include <QDate>
#include "sponsor.h"


sponsor::sponsor()
{
    nom = "";
    marque = "";
}

sponsor::sponsor(int id, QString nom, QDate date_debut, QDate date_fin, float prix_sp, QString marque)
{
    this->id = id;
    this->nom = nom;
    this->date_debut = date_debut;
    this->date_fin = date_fin;
    this->prix_sp = prix_sp;
    this->marque = marque;
}

int sponsor::getid() { return id; }
QDate sponsor::getdate_debut() { return date_debut; }
QDate sponsor::getdate_fin() { return date_fin; }
QString sponsor::getnom() { return nom; }
float sponsor::getprix_sp() { return prix_sp; }
QString sponsor::getmarque() { return marque; }

void sponsor::setid(int id) { this->id = id; }
void sponsor::setnom(QString nom) { this->nom = nom; }
void sponsor::setdate_debut(QDate date_debut) { this->date_debut = date_debut; }
void sponsor::setdate_fin(QDate date_fin) { this->date_fin = date_fin; }
void sponsor::setprix_sp(float prix_sp) { this->prix_sp = prix_sp; }
void sponsor::setmarque(QString marque) { this->marque = marque; }

bool sponsor::ajouter()
{
    QString p1 = QString::number(prix_sp);
    QString p2 = QString::number(id);
    QSqlQuery query;
    query.prepare("INSERT INTO SPONSOR (ID_SPONSOR,NOM, DATE_DEBUT,DATE_FIN,PRIX_SP,MARQUE) "
                  "VALUES (:ID_SPONSOR ,:nom, :date_debut,:date_fin, :prix_sp, :marque)");
    query.bindValue(":ID_SPONSOR", p2);
    query.bindValue(":nom", nom);
    query.bindValue(":date_debut", date_debut);
    query.bindValue(":date_fin", date_fin);
    query.bindValue(":prix_sp", p1);
    query.bindValue(":marque", marque);
    return query.exec();
}

bool sponsor::supprimer(int id)
{
    QString p2 = QString::number(id);
    bool test = false;
    QSqlQuery query1;
    query1.prepare("DELETE FROM SPONSOR WHERE ID_SPONSOR = :ID_SPONSOR");
    query1.bindValue(":ID_SPONSOR", p2);

    if (query1.exec())
    {
        test = true; // La suppression a réussi, définissez test sur true
    }
    else
    {
        qDebug() << "Erreur de suppression : ";
    }

    return test;
}

QSqlQueryModel* sponsor::afficher()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    model->setQuery("SELECT * FROM SPONSOR");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE_DEBUT"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATE_FIN"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("PRIX_SP"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("MARQUE"));

    return model;
}

bool sponsor::modifier()
{
    QString p1 = QString::number(prix_sp);
    QString p2 = QString::number(id);
    QSqlQuery query;
    query.prepare("UPDATE SPONSOR SET ID_SPONSOR=:ID_SPONSOR, NOM=:NOM, DATE_DEBUT=:DATE_DEBUT, DATE_FIN=:DATE_FIN, PRIX_SP=:PRIX_SP, MARQUE=:MARQUE WHERE ID_SPONSOR=:OLD_ID");
    query.bindValue(":ID_SPONSOR", p2);
    query.bindValue(":NOM", nom);
    query.bindValue(":DATE_DEBUT", date_debut);
    query.bindValue(":DATE_FIN", date_fin);
    query.bindValue(":PRIX_SP", p1);
    query.bindValue(":MARQUE", marque);
    query.bindValue(":OLD_ID", p2);
    return query.exec();
}

QSqlQueryModel* sponsor::rechercher(QString recherche)
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QString queryStr = "SELECT * FROM SPONSOR WHERE NOM LIKE '%" + recherche + "%'"  ;

    model->setQuery(queryStr);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE_DEBUT"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATE_FIN"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("PRIX_SP"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("MARQUE"));
    return model;
}
QSqlQueryModel* sponsor::trierParPrix()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM SPONSOR ORDER BY PRIX_SP ASC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE_DEBUT"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATE_FIN"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("PRIX_SP"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("MARQUE"));

    // Afficher le modèle trié
    // ...

    return  model; // N'oubliez pas de supprimer le modèle lorsque vous avez fini de l'utiliser

}
