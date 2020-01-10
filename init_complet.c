#ifndef INIT_COMPLET_C
#define INIT_COMPLET_C

#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include "station.h"
#include "lecture.h"

//cette fonction permet d'initialiser tout les noeuds du graphe, mais sans les arêtes
void initialisation_stop_graphe(station* reseau)
{
    int i = 1 ;
    int max = nombre_de_transports() ;
    while ( i <= max)
    {
    FILE* fichier_stop = ouverture_stop_par_ligne(i) ;
    init_fichier_stop_one_file(fichier_stop,reseau) ;
    i++ ;
    }
}
//ces initialisations sont inutiles finalement
void initialisation_time_graphe(times* stop_times)
{
    int i = 1 ;
    int max = nombre_de_transports() ;
    while ( i <= max)
    {
    FILE* fichier_stop_time = ouverture_stop_times_par_ligne(i) ;
    init_fichier_stop_time_one_file(fichier_stop_time, stop_times) ;
    i++ ;
    }
}
void initialisation_trips_graphe(trip* trips)
{
    int i = 1 ;
    int max = nombre_de_transports() ;
    while ( i <= max)
    {
    FILE* fichier_trips = ouverture_trips_par_ligne(i) ;
    init_fichier_trips_one_file(fichier_trips,trips);
    i++;
    }
}

#endif