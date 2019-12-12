#include<stdio.h>
#include<stdlib.h>
#include"station.h"

station createstation(char * name,int id,long lat,long lon){
  station new;
  new.stop_id = id;
  new.stop_lat = lat;
  new.stop_lon = lon;
  new.stop_name = name;
  new.arete = malloc(25479);
  return new;
};

times createtime(long id,int timex,int stop_idx,int stop_sequencex){
  times new;
  new.stop_id=id;
  new.time=timex;
  new.stop_id=stop_idx;
  new.stop_sequence=stop_sequencex;
  return times;
};

trip createtrip(long rid, long tid){
  trip new;
  new.route_id=rid;
  new.trip_id=tid;
  return trip;
};
