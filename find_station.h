#include<stdio.h>
#include<stdlib.h>
#include "station.h"

int find_station(int id_search, station * reseau){
  for(int i=0;i<25479;i++){
    if(reseau[i].id=id_search){
      return i;
    }
  }
  printf("ERROR NON EXISTANT");
  station error;
  return error;
}

void transfert_possible(int id, int num_fichier, station* reseau) ;
