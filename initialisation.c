#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"station.h"
#include "lecture.h"
#include"createstation.h"
#include "init_complet.c"

station * initialisation(void){
    station * reseau=malloc(25479*sizeof(station));
    if(reseau==NULL){
      printf("ERROR MALLOC");
    }
    times * stop_times=malloc(12632608*sizeof(times));
    if(stop_times==NULL){
      printf("ERROR MALLOC");
      free(reseau);
    }
    trip * trips=malloc(498833*sizeof(trip));
    if(trips==NULL){
      printf("ERROR MALLOC");
      free(reseau);
      free(stop_times);
    }
    initialisation_stop_graphe(reseau);
    initialisation_time_graphe(stop_times);
    initialisation_trips_graphe(trips);
    return reseau;
  }
