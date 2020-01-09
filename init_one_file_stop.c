#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include "station.h"
#include "lecture.h"
#include "createstation.h"

void init_fichier_stop_one_file(FILE* fichier_stop, station *reseau)
{
    char d ;
    char adresse[100] ;
    int i = 0 ;
    int id ;
    long double lat ;
    long double lon ;
    char trash ;
    int max = nombre_de_transports() ;
    char * name = malloc(100*sizeof(char)) ;
    if (name == NULL)
    {
        exit(0) ;
    }
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
        fscanf(fichier_stop,"%99[^\"]",&trash);
        fgetc(fichier_stop) ;
        fscanf(fichier_stop,"%99[^\"]",name);
        // On lit l'adresse
        fscanf(fichier_stop,"%99[^\"]",&trash); 
        fgetc(fichier_stop) ;
        fscanf(fichier_stop,"%99[^\"]",adresse);
        fscanf(fichier_stop,"%Le",&lon) ;
        fscanf(fichier_stop,"%Le",&lat) ;
        createstation(name, id , lat, lon) ;
        while ((d = fgetc(fichier_stop)) != '\n')
        {
            //On vient a la fin de la ligne
        }
    }
    free(name) ;
}
