#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"station.h"
#include "lecture.h"


//cette fonction est celle qu'on appellera pour créer le graphe à l'état initial
station * initialisation(void){
    station * reseau=malloc(25479*sizeof(station)); //création des stops
    if(reseau==NULL){
      printf("ERROR MALLOC");
    }
    times * stop_times=malloc(12632608*sizeof(times)); //création des stop_times
    if(stop_times==NULL){
      printf("ERROR MALLOC");
      free(reseau);
    }
    trip * trips=malloc(498833*sizeof(trip)); //création des trips
    if(trips==NULL){
      printf("ERROR MALLOC");
      free(reseau);
      free(stop_times);
    }
    initialisation_stop_graphe(reseau);
    initialisation_time_graphe(stop_times);
    initialisation_trips_graphe(trips);
    return reseau; //on retourne uniquement reseau finalement, puisqu'on utilise pas trips et stop_times
  }
