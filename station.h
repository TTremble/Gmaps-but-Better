#ifndef STATION_H
#define STATION_H

struct station{
    char * name;
    int id;
    long double lat;
    long double lon;
    int * arete; //liste de taille |V| avec les poids de chaque arête pour cette station à la station indiquée par le numéro de case dans le tableau
};

struct times{
  long trip_id;
  int time;
  int stop_id;
  int stop_sequence;
};

struct trip{
  long route_id;
  long trip_id;
};

#endif /* STATION_H */
