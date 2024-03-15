#include "emission.h"

Emission::Emission(int id_emission,QString nom,QString duree,QString date)
{
    this->id_emission=id_emission;
    this->nom=nom;
    this->duree=duree;
    this->date=date;

}
bool Emission::ajouter_emission()
{

    QSqlQuery query;
           QString p1=QString::number(id_emission);
       query.prepare("insert into EMISSION (ID_EMISSION,NOM, DATE_DIFF, DUREE)"
                     "values (:ID_EMISSION,:NOM,:DATE_DIFF,:DUREE)");
       query.bindValue(":ID_EMISSION", p1);
       query.bindValue(":NOM", nom);
       query.bindValue(":DATE_DIFF", date);
       query.bindValue(":DUREE", duree);

       return query.exec();


}

QSqlQueryModel *Emission::afficher_em()
{

    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM EMISSION");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date Diffusion"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("date"));



    return model;
}


bool Emission::supprimer_emission(int id)
{

    QSqlQuery query;
    QString res=QString::number(id);
    query.prepare("DELETE from emission where ID_EMISSION=:id");
    query.bindValue(":id",res);
    return query.exec();
}


QStringList Emission::getEmissionIds()
{
    QStringList ids;
    QSqlQuery query("SELECT id_emission FROM EMISSION");
    while (query.next()) {
        ids << query.value(0).toString();
    }
    return ids;
}
Emission Emission::rechercherEmissionParNom(const QString& nom)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM EMISSION WHERE NOM = :nom");
    query.bindValue(":nom", nom);
    if (query.exec() && query.next()) {
        int id_emission = query.value(0).toInt();
        QString nom = query.value(1).toString();
        QString duree = query.value(2).toString();
        QString date = query.value(3).toString();

        Emission emission(id_emission, nom, duree, date);
        return emission;
    }

    // Si l'émission n'est pas trouvée, retourne un objet Emission vide
    return Emission();
}
bool Emission::edit_emission(int i)
{

    QSqlQuery query;
    query.prepare("UPDATE EMISSION SET NOM = :nom, DATE_DIFF = :date , DUREE = :duree WHERE ID_EMISSION = :id");
    query.bindValue(":nom", nom);
    query.bindValue(":date", date);
    query.bindValue(":duree", duree);
    query.bindValue(":id", i);

    return query.exec();
}
