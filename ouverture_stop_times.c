#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include "lecture.h"
#define IN_FILE_ERROR 1 

FILE* ouverture_stop_times_par_ligne(int numero_du_fichier)
{    
    struct dirent *de;  // Pointer for directory entry 
  
    // opendir() returns a pointer of DIR type.  
    DIR *dr = opendir("/home/zeqa/Projet_graphe/Archives_ratp"); 
  
    if (dr == NULL)  // exit si on ne peut pas ouvrir le dossier
    { 
        printf("Could not open current directory" ); 
        exit(0); 
    }
    int nombre_de_transports ;
    numero_du_fichier = numero_du_fichier-1 ;
    char *fichier_stop_time_nom =malloc(256* sizeof(char)) ;
    if (fichier_stop_time_nom == NULL) 
    {
        exit(0); 
    }
    while ((de = readdir(dr)) != NULL)     // Refer http://pubs.opengroup.org/onlinepubs/7990989775/xsh/readdir.html for readdir()
    {    
        char* fichier_dans_Archives_ratp = de->d_name ;
        strcpy(fichier_stop_time_nom, "Archives_ratp/" );
        char* extension = "/stop_times.txt" ;
        if (numero_du_fichier == nombre_de_transports )
        {
            strcat(fichier_stop_time_nom,fichier_dans_Archives_ratp) ;
            // On rajoute les extensions
            strcat(fichier_stop_time_nom,extension) ;
            FILE *fichier_stop_times = NULL ;
            fichier_stop_times = fopen(fichier_stop_time_nom, "r+") ;
            printf("%s\n",fichier_stop_time_nom);
            if ((fichier_stop_times == NULL))
            {   
                printf("Erreur : mauvais chemin pour le fichier d'entree.\n");
                exit(0) ;
            }
            else
            {
                printf("le fichier est ouvert\n") ;
                return fichier_stop_times ;
            }
        }
        nombre_de_transports ++ ;
    }
    free(fichier_stop_time_nom) ;
    closedir(dr);     

}
