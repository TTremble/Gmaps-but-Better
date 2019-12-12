#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include "lecture.h"

void initialisation_stop_graphe(reseau)
{
    int i = 1 ;
    int max = nombre_de_transports() ;
    while ( i <= max)
    {
    FILE* fichier_stop = ouverture_text_stop_par_ligne(i) ;
    FILE* fichier_stop_time = ouverture_stop_times_par_ligne(i) ;
    FILE* fichier_trips = ouverture_trips_par_ligne(i) ;
    init_fichier_stop_one_file(fichier_stop,reseau) ;
    init_fichier_stop_time_one_file(fichier_stop_time, reseau) ;
    init_fichier_trips_one_file(fichier_trips,reseau);
    i++ ;
    }
}