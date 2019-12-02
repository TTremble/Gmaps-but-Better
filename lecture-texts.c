#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define INPUT_ERROR 1
#define IN_FILE_ERROR 2
#define OUT_FILE_ERROR 3
#define OTHER_ERRORS 4
 
int main()
{
    FILE *gtfs = NULL;
    unsigned short num_arret ;
    gtfs = fopen("Archives_ratp/RATP_GTFS_METRO_1/stops.txt", "r+") ;

    int nb = fscanf(gtfs,"%d",num_arret) ;
    if ((gtfs=NULL))
    {   
        printf("Erreur : mauvais chemin pour le fichier d'entree.\n");
        return (IN_FILE_ERROR);
    }   
    while ((nb!= ',') && (nb!= 0))
    {
        nb = fscanf(gtfs,"%d",&num_arret) ;
    }
    fclose(gtfs);
    return 0;
}
