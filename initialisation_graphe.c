#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include "lecture.h"

void lecture_fichier_stop(station*reseau)
{
    char d ;
    int i = 0 ;
    int max = nombre_de_transports() ;
    while (i < max)
    ouverture_text_par_ligne(i) ;
    if (station == NULL) 
    {
        exit(0); 
    }
    int i = 0 ;
    while ((d = fgetc(fichier_stop)) != '\n')
        {
            //On saute la première ligne
        }
    while (1 > 0)
    {
        if (fscanf(fichier_stop,"%d",== EOF))
        {
            break ;
        }
        fscanf(fichier_stop," %*s %99[^\"]",reseau[i]->id);
        fscanf(fichier_stop," ,, \" %*s %99[^\"]",reseau[i]->name);
        fscanf(fichier,"%ld",reseau[i]->lon) ;
        fscanf(fichier,"%ld",reseau[i]->lat) ;
        while ((d = fgetc(fichier)) != '\n')
        {
            //On vient a la fin de la ligne
        }
        i ++ ;
    }
