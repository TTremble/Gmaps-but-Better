#include<stdio.h>
#include<stdlib.h>
#include"station.h"

station createstation(char * name,int id,long lat,long lon){
  station new;
  new->stop_id = id;
  new->stop_lat = lat;
  new->stop_lon = lon;
  new->stop_name = name;
  new->arete = malloc(25479);
  return new;
}
