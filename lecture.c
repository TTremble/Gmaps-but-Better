#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>


void lecture(FILE *fichier, char *str)
{
    char d ;
    int num_arret  ;
    char *station =malloc(30* sizeof(char)) ;
    if (station== NULL) 
    {
        exit(0); 
    }
    while ((d = fgetc(fichier)) != '\n')
        {
            //printf("%d", d); On saute la première ligne
        }
        
}