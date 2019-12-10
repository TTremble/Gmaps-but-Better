#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include "lecture.h"

void lecture_fichier_stop(FILE *fichier)
{
    char d ;
    int num_arret  ;
    char *station = malloc(50* sizeof(char)) ;
    char *adresse = malloc(50* sizeof(char)) ;
    if (station == NULL) 
    {
        exit(0); 
    }
    while ((d = fgetc(fichier)) != '\n')
        {
            //On saute la première ligne
        }
        fscanf(fichier,"%d",&num_arret) ;
        fscanf(fichier," %*s %99[^\"]",station);
        printf("%d\n",num_arret);
        printf("%s\n",station);
        //fscanf(fichier,"%d",&trip_id) ;
        //printf("%d\n",trip_id);
        fscanf(fichier_stop," %*s %99[^\"]",station);
        //fscanf(fichier_stop," %*s %99[^\"]",station);