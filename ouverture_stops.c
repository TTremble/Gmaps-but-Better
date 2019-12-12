#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include "lecture.h"
#define IN_FILE_ERROR 1 

FILE* ouverture_stop_par_ligne(int numero_du_fichier)
{    
    struct dirent *de;  // Pointer for directory entry 
  
    // opendir() returns a pointer of DIR type.  
    DIR *dr = opendir("Archives_ratp"); 
  
    if (dr == NULL)  // opendir returns NULL if couldn't open directory 
    { 
        printf("Could not open current directory" ); 
        return 0; 
    }
    int nombre_de_transports = 0 ;  
    numero_du_fichier = numero_du_fichier + 1 ;
    char *fichier_stop_nom =malloc(256* sizeof(char)) ;
    if (fichier_stop_nom == NULL) // Si l'allocation a échoué
    {
        exit(0); // On arrête immédiatement le programme
    }
    while ((de = readdir(dr)) != NULL)     // Refer http://pubs.opengroup.org/onlinepubs/7990989775/xsh/readdir.html for readdir()
    {    
        char* fichier_dans_Archives_ratp = de->d_name ;
        strcpy(fichier_stop_nom, "Archives_ratp/" );
        char* extension = "/stops.txt" ;
        if (numero_du_fichier == nombre_de_transports )
        {
            strcat(fichier_stop_nom,fichier_dans_Archives_ratp) ;
            // On rajoute l'extension
            strcat(fichier_stop_nom,extension) ;
            FILE *fichier_stop = NULL ;
            fichier_stop = fopen(fichier_stop_nom, "r+") ;
            if ((fichier_stop == NULL))
            {   
                printf("Erreur : mauvais chemin pour le fichier d'entree.\n");
                return (IN_FILE_ERROR);
            }
            else
            {
                printf("le fichier est ouvert\n") ;
                return fichier_stop ;
            }
        }
        nombre_de_transports ++ ;
    }
    closedir(dr);     
}
