#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"station.h"
#include"createstation.h"

int initialisation(void){
    station * reseau=malloc(25479*sizeof(station));
    if(reseau==NULL){
      printf("ERROR MALLOC");
      return 1;
    }
    times * stop_times=malloc(12632608*sizeof(times));
    if(stop_times==NULL){
      printf("ERROR MALLOC");
      free(reseau);
      return 1;
    }
    trip * trips=malloc(498833*sizeof(trip));
    if(trips==NULL){
      printf("ERROR MALLOC");
      free(reseau);
      free(stop_times);
      return 1
    }
    ini_stations(reseau);
    ini_times(stop_times);
    ini_trip(trips);
    }
    return 0
}
