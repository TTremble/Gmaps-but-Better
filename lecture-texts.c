#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>

#define INPUT_ERROR 1
#define IN_FILE_ERROR 2
#define OUT_FILE_ERROR 3
#define OTHER_ERRORS 4
#define TAILLE_MAX 100000

int main(void) 
{   
    unsigned long num_arret ;
    struct dirent *de;  // Pointer for directory entry 
  
    // opendir() returns a pointer of DIR type.  
    DIR *dr = opendir("/home/zeqa/Projet_graphe/Archives_ratp"); 
  
    if (dr == NULL)  // opendir returns NULL if couldn't open directory 
    { 
        printf("Could not open current directory" ); 
        return 0; 
    } 
  
    // Refer http://pubs.opengroup.org/onlinepubs/7990989775/xsh/readdir.html 
    // for readdir() 
    int compteur = 0 ;
    char *fichier_stop_nom =malloc(256* sizeof(char)) ;
    char *fichier_stop_time_nom =malloc(256* sizeof(char)) ;
    char *fichier_transfer_nom =malloc(256* sizeof(char)) ;
    char *fichier_agency_nom =malloc(256* sizeof(char)) ;
    char *fichier_routes_nom =malloc(256* sizeof(char)) ;
    char *fichier_trips_nom =malloc(256* sizeof(char)) ;
    char *fichier_calendar_dates_nom =malloc(256* sizeof(char)) ;
    char chaine[TAILLE_MAX] = "";
    while ((de = readdir(dr)) != NULL) 
    {    
        //printf("%s\n", de->d_name);
        char* fichier_dans_Archives_ratp = de->d_name ;
        strcpy(fichier_stop_nom, "Archives_ratp/" );
        //printf("%s\n",fichier) ;
        char* extension1 = "/stops.txt" ;
        char* extension2 = "/stop_times.txt" ;
        char* extension3 = "/transfers.txt" ;
        char* extension4 = "/agency.txt" ;
        char* extension5 = "/routes.txt" ;
        char* extension6 = "/trips.txt" ;
        char* extension7 = "/calendar_dates.txt" ;
        if (compteur > 1 )
        { 
            strcat(fichier_dans_Archives_ratp,extension1) ;
            //printf("%s\n",fichier_dans_Archives_ratp);
            strcat(fichier_stop_nom,fichier_dans_Archives_ratp) ;
            strcat(fichier_stop_time_nom,fichier_dans_Archives_ratp) ;
            strcat(fichier_routes_nom,fichier_dans_Archives_ratp) ;
            strcat(fichier_agency_nom,fichier_dans_Archives_ratp) ;
            strcat(fichier_trips_nom,fichier_dans_Archives_ratp) ;
            strcat(fichier_calendar_dates_nom,fichier_dans_Archives_ratp) ;
            FILE *fichier_stop = NULL ;
            FILE *fichier_stop_times = NULL ;
            FILE *fichier_transfers = NULL ;
            FILE *fichier_agency = NULL ;
            FILE *fichier_routes = NULL ;
            FILE *fichier_trips = NULL ;
            FILE *fichier_calendar_dates = NULL ;
            fichier_stop = fopen(fichier_stop_nom, "r+") ;
            fichier_stop_times = fopen(fichier_stop_time_nom, "r+") ;
            fichier_transfers = fopen(fichier_stop_nom, "r+") ;
            fichier_agency= fopen(fichier_stop_nom, "r+") ;
            fichier_routes = fopen(fichier_stop_nom, "r+") ;
            fichier_trips_nom = fopen(fichier_stop_nom, "r+") ;
            fichier_calendar_dates = fopen(fichier_stop_nom, "r+") ;*/
            printf("%s\n",fichier_stop_nom);
            if ((fichier_stop == NULL))
            {   
                printf("Erreur : mauvais chemin pour le fichier d'entree.\n");
                return (IN_FILE_ERROR);
            }
            else
            {
                printf("le fichier est ouvert\n") ;
                char chaine[TAILLE_MAX] = ""; // Chaîne vide de taille TAILLE_MAX
                fgets(chaine, TAILLE_MAX, fichier_stop); // On lit maximum TAILLE_MAX caractères du fichier, on stocke le tout dans "chaine"
                printf("%s", chaine); // On affiche la chaîne
                /*int nb = fscanf(fichier_stop,"%hi",num_arret) ;
                //while ((nb!= ',') && (nb!= 0))
                printf("%hn\n", num_arret);
                free(num_arret) ;*/
            }
        }
        compteur = compteur + 1 ;
        printf("%i\n",compteur);
        if (compteur == 367)
        {
            printf("travail terminé") ;
            free(fichier_stop_time_nom) ;
            return 0;
        }
    }
    free(fichier_stop_time_nom) ;

    free(fichier_agency_nom) ;
    free(fichier_trips_nom) ;
    free(fichier_transfer_nom) ;
    free(fichier_routes_nom) ;
    free(fichier_calendar_dates_nom) ;
    closedir(dr);     
    return 0; 
}
