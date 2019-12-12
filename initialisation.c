#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"station.h"
#include"createstation.h"

int initialisation(void){
    station * reseau=malloc(25479*sizeof(station));
    times * stop_times=malloc(12632608*sizeof(times));
    trip * trips=malloc(498833*sizeof(trip));
    ini_stations(reseau);
    ini_times(stop_times);
    ini_trip(trips);
    }
}
