#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include "station.h"

int nombre_de_transports() ;
FILE* ouverture_stop_par_ligne(int numero_du_fichier) ;
FILE* ouverture_stop_times_par_ligne(int numero_du_fichier) ;
FILE* ouverture_trips_par_ligne(int numero_du_fichier) ;
void lecture_fichier_stop_times() ;
void init_fichier_trips_one_file(FILE* fichier_trips, station* reseau) ;
void init_fichier_stop_one_file(FILE* fichier_stop, station* reseau) ;
void init_fichier_stop_time_one_file(FILE* fichier_stop_time, station* reseau) ;

