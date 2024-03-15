#ifndef GS_STUDIO_H
#define GS_STUDIO_H
#include<QSqlQueryModel>
#include<QString>
#include<QDate>

class gs_studio
{
public:
    gs_studio();
    gs_studio(QString,int,QString,QString,int,QDateTime,QDateTime,float,QString);
    QString getNom_S();
    int getID_S();
    QString getlocalisation();
    QString getequipement();
    int getID_E();
    QDateTime getDispo_de();
    QDateTime getDispo_a();
    float getcout_l();
    QString getStatus();
    void setNom_S(QString );
    void setID_S(int);
    void setlocalisation(QString);
    void setequipement(QString);
    void setID_E(int) ;
    void setDispo_de(QDateTime);
    void setDispo_a(QDateTime);
    void setcout_l(float);
    void setStatus(QString);
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
    bool modifier();

    QSqlQueryModel* trierParSALAIRE();
     QSqlQueryModel *chercher(int mat);
private:
    QString Nom_S, localisation, equipement,Status;
    QDateTime Dispo_de,Dispo_a;
    int ID_S, ID_E;
    float cout_l;
};

#endif // GS_STUDIO_H
