#include "agent.h"
#include "ui_agent.h"
#include "conge.h"

Agent::Agent()
{
 id=0;
 nom="";
 prenom="";
 age=0;
 salaire=0;
 tel_agent=0;
 role="";
 type_conge="";
}

Agent::Agent(int id,QString nom,QString prenom,int age,int salaire,int tel_agent,QString role,QString type_conge)
{
  this->id=id;
  this->nom=nom;
  this->prenom=prenom;
  this->age=age;
  this->salaire=salaire;
  this->tel_agent=tel_agent;
  this->role=role;
  this->type_conge=type_conge;

}
QString Agent::get_nom(){return  nom;}
QString Agent::get_prenom(){return prenom;}
int Agent::get_age(){return age;}
int Agent::get_salaire(){return salaire;}
int Agent::get_tel_agent(){return tel_agent;}
QString Agent::get_role(){return role;}
QString Agent::get_type_conge(){return  type_conge;}

bool Agent::ajouter()
{
QSqlQuery query;
//QString res= QString::number(id);
query.prepare("INSERT INTO AGENT (id, NOM, PRENOM, AGE, SALAIRE, TEL_AGENT, ROLE, TYPE_CONGE) "
                    "VALUES (:id, :nom, :prenom
