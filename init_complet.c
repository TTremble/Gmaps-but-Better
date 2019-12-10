#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include "lecture.h"

void initialisation_stop_graphe(reseau)
{
    int i = 0 ;
    int max = nombre_de_transports() ;
    while ( i < max)
    {
    FILE* fichier_stop = ouverture_text_stop_par_ligne(i) ;
    init_fichier_stop_one_file(fichier_stop,reseau) ;
    i++ ;
}