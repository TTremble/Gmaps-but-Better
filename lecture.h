#ifndef LECTURE_H
#define LECTURE_H

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
void lecture_fichier_stop() ;
void init_fichier_trips_one_file(FILE* fichier_trips, trip *trips) ; 
void init_fichier_stop_one_file(FILE* fichier_stop, station* reseau) ;
void init_fichier_stop_time_one_file(FILE* fichier_stop_time, times* stop_times);
void initialisation_stop_graphe(station* reseau) ;
void initialisation_time_graphe(times* stop_times) ;
void initialisation_trips_graphe(trip* trips) ;
station * initialisation(void) ;
station createstation(char * namea,int ida,long double lata,long double lona) ;
times createtime(long id,int timex,int stop_idx,int stop_sequencex) ;
trip createtrip(long rid, long tid);
int find_station(int id_search, station * reseau) ;
void transfert_possible(int id, int num_fichier, station* reseau) ;
void update_aretes(int num_station ,int time, station* reseau) ;
int prochains(station A, station * reseau, int time);

#endif