#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include "lecture.h"
#define IN_FILE_ERROR 1 

FILE* ouverture_trips_par_ligne(int numero_du_fichier)
{    
    struct dirent *de;  // Pointer for directory entry 
  
    // opendir() returns a pointer of DIR type.  
    DIR *dr = opendir("Archives_ratp"); 
  
    if (dr == NULL)  // exit si on ne peut pas ouvrir le dossier
    { 
        printf("Could not open current directory" ); 
        exit(0); 
    }
    int nombre_de_transports = 0 ;  
    numero_du_fichier = numero_du_fichier + 1 ;
    char *fichier_trips_nom =malloc(256* sizeof(char)) ;
    if (fichier_trips_nom == NULL) // Si l'allocation a échoué
    {
        exit(0); // On arrête immédiatement le programme
    }
    while ((de = readdir(dr)) != NULL)     // Refer http://pubs.opengroup.org/onlinepubs/7990989775/xsh/readdir.html for readdir()
    {    
        char* fichier_dans_Archives_ratp = de->d_name ;
        strcpy(fichier_trips_nom, "Archives_ratp/" );
        char* extension = "/trips.txt" ;
        if (numero_du_fichier == nombre_de_transports )
        {
            strcat(fichier_trips_nom,fichier_dans_Archives_ratp) ;
            // On rajoute l'extension
            strcat(fichier_trips_nom,extension) ;
            FILE *fichier_trips = NULL ;
            fichier_trips = fopen(fichier_trips_nom, "r+") ;
            if ((fichier_trips == NULL))
            {   
                printf("Erreur : mauvais chemin pour le fichier d'entree.\n");
                exit(0);
            }
            else
            {
                printf("le fichier est ouvert\n") ;
                return fichier_trips ;
            }
        }
        nombre_de_transports ++ ;
    }
    closedir(dr);     
}