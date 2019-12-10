#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>


void lecture_fichier_stop_times(FILE *fichier, char *str)
{
    char d ;
    int num_arret  ;
    char *station =malloc(30* sizeof(char)) ;
    if (station== NULL) 
    {
        exit(0); 
    }
    while ((d = fgetc(fichier)) != '\n')
        {
            //printf("%d", d); On saute la première ligne
        }
        fscanf(fichier,"%d",&num_arret) ;
        fscanf(fichier," ,,\"%s\",,",station);
        printf("%d\n",num_arret);
        printf("%s\n",station);
        //fscanf(fichier,"%d",&trip_id) ;
        //printf("%d\n",trip_id);
        //fscanf(fichier_stop," %*s %99[^\"]",station);
        //fscanf(fichier_stop," %*s %99[^\"]",station);