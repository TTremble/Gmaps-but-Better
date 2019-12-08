#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>

#define IN_FILE_ERROR 1

int main(void) 
{   
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
    if (fichier_stop_nom == NULL) // Si l'allocation a échoué
    {
        exit(0); // On arrête immédiatement le programme
    }
    char *fichier_stop_time_nom =malloc(256* sizeof(char)) ;
    if (fichier_stop_time_nom == NULL) 
    {
        exit(0); 
    }
    char *fichier_transfer_nom =malloc(256* sizeof(char)) ;
    if (fichier_transfer_nom == NULL) 
    {
        exit(0); 
    }
    char *fichier_agency_nom =malloc(256* sizeof(char)) ;
    if (fichier_agency_nom== NULL) 
    {
        exit(0); 
    }
    char *fichier_routes_nom =malloc(256* sizeof(char)) ;
    if (fichier_routes_nom == NULL)
    {
        exit(0);
    }
    char *fichier_trips_nom =malloc(256* sizeof(char)) ;
    if (fichier_trips_nom == NULL)
    {
        exit(0);
    }
    char *fichier_calendar_dates_nom =malloc(256* sizeof(char)) ;
    if (fichier_calendar_dates_nom == NULL)
    {
        exit(0);
    }
    while ((de = readdir(dr)) != NULL) 
    {    
        //printf("%s\n", de->d_name);
        char* fichier_dans_Archives_ratp = de->d_name ;
        strcpy(fichier_stop_nom, "Archives_ratp/" );
        strcpy(fichier_stop_time_nom, "Archives_ratp/" );
        strcpy(fichier_transfer_nom, "Archives_ratp/" );
        strcpy(fichier_agency_nom, "Archives_ratp/" );
        strcpy(fichier_routes_nom, "Archives_ratp/" );
        strcpy(fichier_calendar_dates_nom, "Archives_ratp/" );
        strcpy(fichier_trips_nom, "Archives_ratp/" );
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
            //strcat(fichier_dans_Archives_ratp,extension1) ;
            //printf("%s\n",fichier_dans_Archives_ratp);
            strcat(fichier_stop_nom,fichier_dans_Archives_ratp) ;
            strcat(fichier_stop_time_nom,fichier_dans_Archives_ratp) ;
            strcat(fichier_routes_nom,fichier_dans_Archives_ratp) ;
            strcat(fichier_agency_nom,fichier_dans_Archives_ratp) ;
            strcat(fichier_trips_nom,fichier_dans_Archives_ratp) ;
            strcat(fichier_calendar_dates_nom,fichier_dans_Archives_ratp) ;
            strcat(fichier_transfer_nom,fichier_dans_Archives_ratp) ;
            // On rajoute les extensions
            strcat(fichier_stop_nom,extension1) ;
            strcat(fichier_stop_time_nom,extension2) ;
            strcat(fichier_transfer_nom,extension3) ;
            strcat(fichier_agency_nom,extension4) ;
            strcat(fichier_routes_nom,extension5) ;
            strcat(fichier_trips_nom,extension6) ;
            strcat(fichier_calendar_dates_nom,extension7) ;
            FILE *fichier_stop = NULL ;
            FILE *fichier_stop_times = NULL ;
            FILE *fichier_transfers = NULL ;
            FILE *fichier_agency = NULL ;
            FILE *fichier_routes = NULL ;
            FILE *fichier_trips = NULL ;
            FILE *fichier_calendar_dates = NULL ;
            fichier_stop = fopen(fichier_stop_nom, "r+") ;
            fichier_stop_times = fopen(fichier_stop_time_nom, "r+") ;
            fichier_transfers = fopen(fichier_transfer_nom, "r+") ;
            fichier_agency= fopen(fichier_agency_nom, "r+") ;
            fichier_routes = fopen(fichier_routes_nom, "r+") ;
            fichier_trips = fopen(fichier_trips_nom, "r+") ;
            fichier_calendar_dates = fopen(fichier_calendar_dates_nom, "r+") ;
            printf("%s\n",fichier_stop_time_nom);
            if ((fichier_stop_times == NULL))
            {   
                printf("Erreur : mauvais chemin pour le fichier d'entree.\n");
                return (IN_FILE_ERROR);
            }
            else
            {
                printf("le fichier est ouvert\n") ;
                char d ;
                while ((d = fgetc(fichier_stop_times)) != '\n')
                    {
                        //printf("%d", d); On saute la première ligne
                    }
                int nb = 1 ;
                int compteur_ligne = 0 ;
                while (compteur_ligne < 10)
                {
                    long trip_id ;
                    int heure ;
                    int minutes ;
                    int seconde ;
                    long stop_id;
                    int stop_sequence ;
                    int temps_en_minutes ;
                    int nb = fscanf(fichier_stop_times,"%ld",&trip_id) ;
                    printf("%ld\n",trip_id);
                    fscanf(fichier_stop_times,",%d:",&heure) ;
                    fscanf(fichier_stop_times,"%d:",&minutes) ;
                    fscanf(fichier_stop_times,"%d,",&seconde) ;
                    // On le double pour déplacé le curseur et on chage pas les variable puisque temps_arrivé = temps_depart 
                    fscanf(fichier_stop_times,"%d:",&heure) ;
                    printf("%d\n",heure);
                    fscanf(fichier_stop_times,"%d:",&minutes) ;
                    printf("%d\n",minutes);
                    fscanf(fichier_stop_times,"%d,",&seconde) ;
                    fscanf(fichier_stop_times, "%ld",&stop_id);
                    printf("%ld\n",stop_id);
                    fscanf(fichier_stop_times, ",%d,",&stop_sequence);
                    printf("%d\n",stop_sequence);
                    temps_en_minutes = heure*60 + minutes ;
                    //printf("%d\n", temps_en_minutes) ;
                    printf("**********************************\n") ;
                    // On se remet au debut de la ligne
                    while ((d = fgetc(fichier_stop_times)) != '\n')
                    {
                    //printf("%d", d); On saute la ligne
                    }
                    compteur_ligne ++ ;
                }

            }
        }
        compteur = compteur + 1 ;
        if (compteur == 367)
        {
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
