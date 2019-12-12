#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include "lecture.h"
#include "station.h"

void init_fichier_stop_time_one_file(FILE* fichier_stop_time, station *reseau)
{
    char d ;
    int compteur_ligne = 0 ;
    long trip_id;
    int heure ;
    int minutes ;
    int seconde ;
    long stop_id;
    int stop_sequence ;
    int temps_en_minutes ;
    int i = 0 ;
    int max = nombre_de_transports() ;
    
    while ((d = fgetc(fichier_stop_time)) != '\n')
        {
                //On saute la première ligne
        }
    while (1 > 0)
    {
        if (fscanf(fichier_stop_time,"%ld",&trip_id) == EOF)
            {
                    break ;
            }
        fscanf(fichier_stop_time,",%d:",&heure) ;
        fscanf(fichier_stop_time,"%d:",&minutes) ;
        fscanf(fichier_stop_time,"%d,",&seconde) ;
        // On le double pour déplacé le curseur et on chage pas les variable puisque temps_arrivé = temps_depart 
        fscanf(fichier_stop_time,"%d:",&heure) ;
        fscanf(fichier_stop_time,"%d:",&minutes) ;
        fscanf(fichier_stop_time,"%d,",&seconde) ;
        fscanf(fichier_stop_time, "%ld",&stop_id);
        fscanf(fichier_stop_time, ",%d,",&stop_sequence);
        temps_en_minutes = heure*60 + minutes ;
        while ((d = fgetc(fichier_stop_time)) != '\n')
        {
                //On vient à la fin de la ligne
        }
        createtime(trip_id,temps_en_minutes,stop_id,stop_sequence) ;
        compteur_ligne ++ ;
    }  
    
}


