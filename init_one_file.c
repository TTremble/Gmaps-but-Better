#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include "lecture.h"
#include "station.h"

void init_fichier_stop_one_file(FILE* fichier_stop, station *reseau)
{
    char d ;
    char adresse[100] ;
    int i = 0 ;
    char * name =malloc(100*sizeof(char))
    if (name == NULL)
    {
        exit(0)
    }
    int id ;
    long double lat ;
    long double lon ;
    
    int max = nombre_de_transports() ;
    while (i < max)
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
        if (fscanf(fichier_stop,"%d",&id) == EOF)// un de trop pbm à régler
        {
            break ;
        }
        fscanf(fichier_stop," %*s %99[^\"]",name);
        fscanf(fichier_stop," ,, \" %*s %99[^\"]",adresse);
        fscanf(fichier_stop,"%ld",&lon) ;
        fscanf(fichier_stop,"%ld",&lat) ;
        reseau[i] = createstation(name, id , lat, lon)
        while ((d = fgetc(fichier_stop)) != '\n')
        {
            //On vient a la fin de la ligne
        }
        i ++ ;
    }
