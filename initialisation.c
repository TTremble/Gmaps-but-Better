#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"station.h"
#include"createstation.h"

int initialisation(void){
    station * reseau=malloc(25479*sizeof(station));
    ini_stations(reseau);
    ini_times(reseau);
    }
}
