#ifndef SPONSOR_H
#define SPONSOR_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QObject>
#include <QDate>

class sponsor
{
public:
    sponsor();
    sponsor(int id, QString nom, QDate date_debut, QDate date_fin, float prix_sp, QString marque);

    int getid();
    QString getnom();
    QDate getdate_debut();
    QDate getdate_fin();
    float getprix_sp();
    QString getmarque();

    void setid(int);
    void setnom(QString);
    void setdate_debut(QDate);
    void setdate_fin(QDate);
    void setprix_sp(float);
    void setmarque(QString);
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
    bool modifier();

    QSqlQueryModel* rechercher(QString recherche);
     QSqlQueryModel*trierParPrix();



private:
    int id;
    QString nom, marque;
    QDate date_debut, date_fin;
    float prix_sp;

};

#endif // SPONSOR_H
