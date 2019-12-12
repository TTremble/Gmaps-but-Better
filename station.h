#include "lecture.h"
struct station{
    char * name;
    int id;
    long double lat;
    long double lon;
    int * arete; //liste de taille |V| avec les poids de chaque arête pour cette station à la station indiquée par le numéro de case dans le tableau
};
<<<<<<< HEAD

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
=======
>>>>>>> 7daf464d2863d37d10e8ed516bbf15707aa33ba4
