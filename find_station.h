#ifndef FIND_STATION_H
#define FIND_STATION_H

#include<stdio.h>
#include<stdlib.h>
#include "station.h"
//fonction qui permet de retrouver l'emplacement d'une station dans le tableau à partir de son ID
int find_station(int id_search, station * reseau){
  for(int i=0;i<25479;i++){
    if(reseau[i].id=id_search){
      return i;
    }
  }
  printf("ERROR NON EXISTANT");
  exit(0);
}

void transfert_possible(int id, int num_fichier, station* reseau) ;

#endif