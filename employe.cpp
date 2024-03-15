#include "employe.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
Employe::Employe()
{
id=0; salaire=0; nom=""; prenom="",type="";
}

Employe::Employe(int id,int salaire,QString nom,QString prenom,QString type)
{this->id=id; this->salaire=salaire; this->nom=nom; this->prenom=prenom, this->type=type;}


/******************************/



int Employe::getid()
{return id;}
int Employe::getsalaire()
{return salaire;}
QString Employe::getnom()
{return nom;}
QString Employe::getprenom()
{return prenom;}
QString Employe::gettype()
{return type;}
/*************************************/


void Employe::setid(int id)
{this->id=id;}
void Employe::setsalaire(int salaire)
{this->salaire=salaire;}
void Employe::setnom(QString nom)
{this->nom=nom;}
void Employe::settype(QString type)
{this->type=type;}
void Employe::setprenom(QString prenom)
{this->prenom=prenom;}
/****************************/




    bool Employe::ajouter()
    {
        QString id_string = QString::number(id);
        QString salaire_string = QString::number(salaire);
        QSqlQuery query;

        query.prepare("SELECT COUNT(*) FROM employe WHERE id = :id");
        query.bindValue(":id", id_string);
        if (query.exec() && query.next())
        {
            int idCount = query.value(0).toInt();
            if (idCount > 0)
            {

                return false;
            }
        }
        else
        {

            return false;
        }


        if (id <= 0 || salaire < 0 || nom.isEmpty() || prenom.isEmpty() ||
            (type != "croniqueur" && type != "animateur" && type != "technicien"))
        {
            return false;
        }


        query.prepare("INSERT INTO employe (id, salaire, nom, prenom, type) "
                      "VALUES (:id, :salaire, :nom, :prenom, :type)");
        query.bindValue(":id", id_string);
        query.bindValue(":nom", nom);
        query.bindValue(":salaire", salaire_string);
        query.bindValue(":type", type);
        query.bindValue(":prenom", prenom);
        return query.exec();
    }





QSqlQueryModel* Employe::afficher()
{
  QSqlQueryModel* model=new QSqlQueryModel();


model->setQuery("SELECT* FROM employe");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("salaire"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("type"));
return model;
}
bool  Employe::supprimer(int id)
{
 QSqlQuery query;
QString res= QString::number(id);
 query.prepare("Delete from employe where ID = :ID");
 query.bindValue(":ID", res);
return    query.exec();
}
/******************************/
bool Employe::modifier()
{

  QString id_string= QString::number(id);
  QString salaire_string= QString::number(salaire);
  QSqlQuery query;
       query.prepare("UPDATE EMPLOYE SET salaire=:salaire,nom=:nom,prenom=:prenom,type=:type where id=:id");
          query.bindValue(":id", id_string);
          query.bindValue(":nom", nom);
          query.bindValue(":salaire", salaire_string);
          query.bindValue(":type", type);
          query.bindValue(":prenom", prenom);
         return query.exec();

}


