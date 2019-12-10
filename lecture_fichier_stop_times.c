#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include "lecture.h"


void lecture_fichier_stop_times()
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
    int max = nombre_de_transports ;
    while (i < max)
    {
        FILE* fichier = ouverture_stop_time_par_ligne(i) ;
        while ((d = fgetc(fichier)) != '\n')
            {
                //On saute la première ligne
            }
        while (1 > 0)
        {
            if (fscanf(fichier,"%ld",&trip_id) == EOF)
                {
                    break ;
                }
            fscanf(fichier,",%d:",&heure) ;
            fscanf(fichier,"%d:",&minutes) ;
            fscanf(fichier,"%d,",&seconde) ;
            // On le double pour déplacé le curseur et on chage pas les variable puisque temps_arrivé = temps_depart 
            fscanf(fichier,"%d:",&heure) ;
            fscanf(fichier,"%d:",&minutes) ;
            fscanf(fichier,"%d,",&seconde) ;
            fscanf(fichier, "%ld",&stop_id);
            fscanf(fichier, ",%d,",&stop_sequence);
            temps_en_minutes = heure*60 + minutes ;
            while ((d = fgetc(fichier)) != '\n')
                {
                    //On vient à la fin de la ligne
                }
            compteur_ligne ++ ;
        }  
    }    
}


