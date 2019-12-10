#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include "station.h"

int nombre_de_transports() ;
int ouverture_text_par_ligne(int numero_du_fichier) ;
void lecture_fichier_stop_times() ;
void init_fichier_stop_one_file(FILE* fichier_stop, station*reseau) ;
