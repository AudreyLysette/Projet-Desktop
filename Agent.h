#ifndef AGENT_H
#define AGENT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>


class Agent
{
public:
   Agent();
   Agent(int,QString,QString,int,int,int,QString,QString);
   QSqlQueryModel *chercher_Agent(QString nom);
   QString get_nom();
   QString get_prenom();
   int get_age();
   int get_salaire();
   int get_tel_agent();
   QString get_role();
   QString get_type_conge();
   int get_id();

    bool ajouter();
    bool modifier(int);
    QSqlQueryModel * afficher();
    QSqlQueryModel * trier_nom();
    QSqlQueryModel * trier_role();
    bool supprimer(int);
    bool affecter_Agent(int ,QString );
    bool on_recherche_textChanged(const QString );
private:
   QString nom,prenom,role,type_conge;
   int id,age,salaire,tel_agent;
};

#endif // AGENT_H
