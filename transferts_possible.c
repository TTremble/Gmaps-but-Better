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
    int i = 0 ;
    int from_stop_id ;
    int to_stop_id ;
    int transfert_type;
    int transfert_time ;
    FILE* fichier_transfer = NULL ;
    int a = find_station(id, reseau);
    station star = reseau[a] ;

        fichier_transfer = ouverture_trips_par_ligne(num_fichier) ;//on connait la ligne sur laquelle on est
        while ((d = fgetc(fichier_transfer)) != '\n')
            {
                //On saute la première ligne
            }
        while (1 > 0)
        {
            if ((fscanf(fichier_transfer,"%d",&from_stop_id) == EOF))
            {
                break ;
            }
            fscanf(fichier_transfer,"%d",&to_stop_id) ;
            fscanf(fichier_transfer,"%d",&transfert_type);
            fscanf(fichier_transfer,"%d",&transfert_time);
            if (to_stop_id == id)
            {
                b = find_station(from_stop_id, reseau); //On trouve la place dans la structure où est l'id 
                int transfert_time_save = transfert_time/60 ;
                star.arete[b] = transfert_time_save ; // on stock le temps dans l'arete
            }
            if (from_stop_id == id)
            {
                b = find_station(to_stop_id, reseau);
                int transfert_time_save = transfert_time/60 ;
                star.arete[b] = transfert_time_save ;
            }
    }
}
