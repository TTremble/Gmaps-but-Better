#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>


void lecture(FILE *fichier, char *str)
{
    char d ;
    int num_arret  ;
    while ((d = fgetc(fichier)) != '\n')
        {
            //printf("%d", d); On saute la première ligne
        }
        printf("\n") ;
        fscanf(fichier,"%d",&num_arret) ;
        printf("%d\n",num_arret);
}