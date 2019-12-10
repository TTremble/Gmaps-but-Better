#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include "lecture.h"


void lecture_fichier_stop_times(FILE *fichier)
{

    char d ;
    while ((d = fgetc(fichier)) != '\n')
        {
            //printf("%d", d); On saute la première ligne
        }
    int compteur_ligne = 0 ;
    long trip_id;
    while (1 > 0)
    {
        long trip_id ;
        int heure ;
        int minutes ;
        int seconde ;
        long stop_id;
        int stop_sequence ;
        int temps_en_minutes ;
        if (fscanf(fichier,"%ld",&trip_id) == EOF)
            {
                break ;
            }
        printf("%ld\n",trip_id);
        fscanf(fichier,",%d:",&heure) ;
        fscanf(fichier,"%d:",&minutes) ;
        fscanf(fichier,"%d,",&seconde) ;
        // On le double pour déplacé le curseur et on chage pas les variable puisque temps_arrivé = temps_depart 
        fscanf(fichier,"%d:",&heure) ;
        //printf("%d\n",heure);
        fscanf(fichier,"%d:",&minutes) ;
        //printf("%d\n",minutes);
        fscanf(fichier,"%d,",&seconde) ;
        fscanf(fichier, "%ld",&stop_id);
        //printf("%ld\n",stop_id);
        fscanf(fichier, ",%d,",&stop_sequence);
        //printf("%d\n",stop_sequence);
        temps_en_minutes = heure*60 + minutes ;
        //printf("%d\n", temps_en_minutes) ;
        //printf("**********************************\n") ;
        // On se remet au debut de la ligne
        while ((d = fgetc(fichier)) != '\n')
            {
                //printf("%d", d); On saute la ligne
            }
        compteur_ligne ++ ;
        printf(" %d\n", compteur_ligne);
    }
        
}