#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include "station.h"
#include "lecture.h"

void init_fichier_trips_one_file(FILE* fichier_trips, trip *trips)
{
    char d ;
    long route_id ;
    int service_id ;
    long trip_id ;
    int trip_headsign ;
    int trip_short_name ;
    int direction_id ;
    int shape_id ;
    int i = 0 ;
    int max = nombre_de_transports() ;
    
    while ((d = fgetc(fichier_trips)) != '\n')
        {
            //On saute la première ligne
        }
    while (1 > 0)
    {
        if (fscanf(fichier_trips,"%ld",&route_id) == EOF)
        {
            break ;
        }
        fscanf(fichier_trips,"%ld",&route_id) ;
        fscanf(fichier_trips,"%d",&service_id) ;
        fscanf(fichier_trips,"%ld",&trip_id) ;
        fscanf(fichier_trips,"%d",&trip_headsign);
        fscanf(fichier_trips,"%d",&trip_short_name) ;
        fscanf(fichier_trips,"%d",&direction_id) ;
        fscanf(fichier_trips,"%d",&shape_id) ;
        createtrip(route_id, trip_id) ;
        while ((d = fgetc(fichier_trips)) != '\n')
        {
            //On vient a la fin de la ligne
        }
        i ++ ;
    }
}
