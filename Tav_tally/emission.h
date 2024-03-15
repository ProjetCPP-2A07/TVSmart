#ifndef EMISSION_H
#define EMISSION_H
#include<QSqlQueryModel>
#include<QSqlQuery>
#include<QString>
#include<QDate>
#include<QComboBox>

#include <iostream>

class Emission
{
    QString nom,duree;
    int id_emission;
    QString date;


public:
    Emission(){}
    Emission(int id,QString nom,QString duree,QString Date);
    Emission rechercherEmissionParNom(const QString& nom);
    QString getnom (){return nom;}
    QString getduree(){return duree;}
    QString getdate(){return date;}
    int getid(){return id_emission;}


    void setnom(QString n){nom=n;}
    void setduree(QString d){duree=d;}
    void setdate(QString t){date=t;}
    void setid(int id_emission){this->id_emission=id_emission;}

    bool edit_emission(int i);
    bool ajouter_emission();
    QSqlQuery * afficher();
    bool supprimer(int);
    QSqlQueryModel *afficher_em();
    bool supprimer_emission(int id);
    QStringList getEmissionIds();
};

#endif // EMISSION_H
