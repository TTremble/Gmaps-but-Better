#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char buff[1024];
    char name[100] ;
    char name2[100] ;
    int id ;
    char caca[100] ;
    FILE*fichier = NULL ;
    fichier = fopen("Archives_ratp/RATP_GTFS_METRO_7/stops.txt", "r+") ;
    char d ;
    char y ;
    while ((d = fgetc(fichier)) != '\n')
            {
                //On saute la première ligne
            }
        while (1 > 0)
        {
            if (fscanf(fichier,"%d",&id) == EOF)
            {
                
                break ;
            }
            printf("%d\n", id);
            fscanf(fichier,"%99[^\"]",name); // prend pas le premier mot de la station
            y = fgetc(fichier) ;
            printf("%d\n",d) ;
            fscanf(fichier,"%99[^\"]",name2);
            printf("%s\n", name) ;
            printf("%s\n", name2) ;
            return 1 ;
        }
}