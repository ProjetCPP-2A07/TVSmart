#ifndef EMPLOYE_H
#define EMPLOYE_H
#include<QString>
#include <QSqlQueryModel>
class Employe
{
public:
    Employe();  /*constructeur par defaut*/
    Employe(int,int,QString,QString,QString);
    /***************/
    int getid();
    QString getnom();
    int getsalaire();
    QString getprenom();
      QString gettype();
     /***************/
    void setid(int);
    void setsalaire(int);
    void settype(QString);
    void setnom(QString);
    void setprenom(QString);
    bool ajouter();
    bool  supprimer(int id);
    QSqlQueryModel* afficher();

    bool modifier();

private:
    int id, salaire;
    QString nom, prenom,type;

};
#endif // EMPLOYE_H
