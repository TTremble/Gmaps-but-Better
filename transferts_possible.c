#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include "lecture.h"
#include "station.h"

void transfert_possible(int id, int num_fichier, station* reseau)
{
    char d ;
    int b ;
    char adresse[100] ;
    int i = 0 ;
    int from_stop_id ;
    int to_stop_id ;
    int transfert_type;
    int transfert_time ;
    FILE* fichier_stop = NULL ;
    int a = find_station(id, reseau);
    station star = reseau[a] ;

        FILE* fichier_stop = ouverture_trips_par_ligne(num_fichier) ;
        while ((d = fgetc(fichier_stop)) != '\n')
            {
                //On saute la première ligne
            }
        while (1 > 0)
        {
            if ((fscanf(fichier_stop,"%d",&from_stop_id) == EOF))
            {
                break ;
            }
            fscanf(fichier_stop,"%d",&to_stop_id) ;
            fscanf(fichier_stop,"%d",&transfert_type);
            fscanf(fichier_stop,"%d",&transfert_time);
            if (to_stop_id == id)
            {
                b = find_station(id, reseau);
                int transfert_time_save = transfert_time/60 ;
                star.arete[b] = transfert_time_save ;
            }
            if (from_stop_id == id)
            {
                b = find_station(id, reseau);
                int transfert_time_save = transfert_time/60 ;
                star.arete[b] = transfert_time_save ;
            }
    }
}
