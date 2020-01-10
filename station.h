#ifndef STATION_H
#define STATION_H

typedef struct station{ //structure qui contient toutes les informations d'un noeud
    char * name;
    int id;
    long double lat;
    long double lon;
    int * arete; //liste de taille |V| avec les poids de chaque arête pour cette station à la station indiquée par le numéro de case dans le tableau
} station;

typedef struct times{ //structure obsolète
  long trip_id;
  int time;
  int stop_id;
  int stop_sequence;
} times;

typedef struct trip{ //structure obsolète
  long route_id;
  long trip_id;
} trip;

#endif
