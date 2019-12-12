#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include "lecture.h"
#include "station.h"

void lecture_fichier_stop()
{
    char d ;
    char adresse[100] ;
    int i = 0 ;
    char trash[10] ;
    char * name =malloc(100*sizeof(char)) ;
    if (name == NULL)
    {
        exit(0) ;
    }
    int id ;
    long double lat ;
    long double lon ;
    FILE* fichier_stop = NULL ;
    int max = nombre_de_transports() ;

    while (i < max)
    {
        FILE* fichier_stop = ouverture_stop_par_ligne(i) ;
        while ((d = fgetc(fichier_stop)) != '\n')
            {
                //On saute la première ligne
            }
        while (1 > 0)
        {
            if (fscanf(fichier_stop,"%d",&id) == EOF)
            {
            break ;
            }
            // On lit le nom de la station
            fscanf(fichier_stop,"%99[^\"]",trash);
            fgetc(fichier_stop) ;
            fscanf(fichier_stop,"%99[^\"]",name);
            // On lit l'adresse
            fscanf(fichier_stop,"%99[^\"]",trash); 
            fgetc(fichier_stop) ;
            fscanf(fichier_stop,"%99[^\"]",adresse);
            // On lit la longitude et latitude
            fscanf(fichier_stop,"%Le",&lon) ;
            fscanf(fichier_stop,"%Le",&lat) ;
            while ((d = fgetc(fichier_stop)) != '\n')
            {
            //On vient a la fin de la ligne
            }
            i ++ ;
        }
    }
}
