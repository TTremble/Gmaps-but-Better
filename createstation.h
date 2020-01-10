#include<stdio.h>
#include<stdlib.h>
#include"station.h"

//cette fonction crée une nouvelle station (noeud du graphe)
station createstation(char * namea,int ida,long double lata,long double lona){
  station new;
  new.id = ida;
  new.lat = lata;
  new.lon = lona;
  new.name = namea;
  new.arete = malloc(25479); //on crée un tableau comme décrit dans la structure (25479 est le nombre d'ID de stations différents)
  return new;
};
//les 2 prochaines fonctions sont utilisées dans l'initialisation des tableaux times et trips, que nous n'utiliserons pas finalement
//elles sont donc inutiles
times createtime(long id,int timex,int stop_idx,int stop_sequencex){
  times new;
  new.stop_id=id;
  new.time=timex;
  new.stop_id=stop_idx;
  new.stop_sequence=stop_sequencex;
  return new;
};

trip createtrip(long rid, long tid){
  trip new;
  new.route_id=rid;
  new.trip_id=tid;
  return new;
};
