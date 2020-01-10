#include<stdio.h>
#include<stdlib.h>
#include"station.h"

station createstation(char * namea,int ida,long double lata,long double lona){
  station new;
  new.id = ida;
  new.lat = lata;
  new.lon = lona;
  new.name = namea;
  new.arete = malloc(25479);
  return new;
};

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
