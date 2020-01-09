#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include "lecture.h"
#include "station.h"


int main(void)
{
    
    FILE * fichier = ouverture_stop_par_ligne(3);
    if (fichier == NULL)
    {
        printf("Erreur") ;
        return 1 ;
    }

    FILE * fichier2 = ouverture_stop_times_par_ligne(3);
    if (fichier2 == NULL)
    {
        printf("Erreur") ;
        return 1 ;
    }

    FILE * fichier3 = ouverture_trips_par_ligne(3);
    if (fichier3 == NULL)
    {
        printf("Erreur") ;
        return 1 ;
    }

    lecture_fichier_stop_times() ;
    lecture_fichier_stop() ;

}
