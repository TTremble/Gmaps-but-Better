#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include "lecture.h"

void lecture_fichier_stop(FILE * fichier)
{
    int i = 0 ;
    int max = nombre_de_transports() ;
    char d ;
    int num_arret  ;
    long stop_lat ;
    long stop_lon ;
    char *station = malloc(50* sizeof(char)) ;
    char *adresse = malloc(50* sizeof(char)) ;
    while (i < max)
    {
        FILE * fichier = ouverture_stop_par_ligne(i) ;
        if (station == NULL) 
        {
            exit(0); 
        }
        while ((d = fgetc(lecture_fichier_stop)) != '\n')
            {
                //On saute la première ligne
            }
        while (1 > 0)
        {
            if (fscanf(lecture_fichier_stop,"%d",&num_arret == EOF))
            {
                break ;
            }
            fscanf(fichier," %*s %99[^\"]",station);
            fscanf(fichier," ,, \" %*s %99[^\"]",adresse);
            fscanf(fichier,"%ld",&stop_lat) ;
            fscanf(fichier,"%ld",&stop_lon) ;
            while ((d = fgetc(fichier)) != '\n')
            {
            //On vient a la fin de la ligne
            }
        }
    }