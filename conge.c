#include "conge.h"
#include "ui_conge.h"


int id ;
QString motif;
QString date_debut;
QString date_fin;
QString type;


conge::conge()
{
id=0;
motif="";
date_debut="";
date_fin="";
type="";
}
conge::conge(int id,QString motif,QString date_debut,QString date_fin,QString type)
{
  this->id=id;
  this->motif=motif;
  this->date_debut=date_debut;
  this->date_fin=date_fin;
  this->type=type;
}
QString conge::get_motif(){return  motif;}
QString conge::get_date_debut(){return date_debut;}
QString conge::get_date_fin(){return date_fin;}
QString conge::get_type(){return type;}

bool conge::ajouter()
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("INSERT INTO CONGE (id, MOTIF, DATE_DEBUT, DATE_FIN, TYPE) "
                    "VALUES (:id, :motif, :date_debut, :date_fin, :type)");
query.bindValue(":id", res);
query.bindValue(":motif", motif);
query.bindValue(":date_debut", date_debut);
query.bindValue(":date_fin", date_fin);
query.bindValue(":type", type);
