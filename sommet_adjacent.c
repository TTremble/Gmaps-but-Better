#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include "lecture.h"
#include "station.h"

//fonction qui va actualiser les connexions d'une station lorsqu'elle est appelé, elle permet de créer les arêtes dont le dijkstra aura besoin
void update_aretes(int num_station ,int time, station* reseau)
{
    char d ;
    int b ;
    char adresse[100] ;
    int i = 0 ;
    int marque = 0 ;
    int id ;
    int a = find_station(num_station, reseau);
    int max = nombre_de_transports() ;
    int compteur_ligne = 0 ;
    long trip_id;
    int heure ;
    int minutes ;
    int seconde ;
    long stop_id;
    int stop_sequence ;
    int temps_en_minutes ;
    int temps_en_minutes_2 ;
    int *temps_proche ;
    *temps_proche = 100000 ;

    station star = reseau[a] ;
    for (int j = 0 ; j< 25479; j++)
    {
        star.arete[j] = 0 ; //on initialise toutes les arêtes à 0, ie on supprime toutes les connexions existantes avant d'en retrouver
    }
    FILE* fichier_stop_time = NULL ;
    while (i < max)
    {
        FILE* fichier = ouverture_stop_times_par_ligne(i) ;

        while ((d = fgetc(fichier_stop_time)) != '\n')
            {
                //On saute la première ligne
            }
        while (1 > 0)
        {
            if (fscanf(fichier_stop_time,"%ld",&trip_id) == EOF)
                {
                    break ;
                }
            fscanf(fichier_stop_time,",%d:",&heure) ;
            fscanf(fichier_stop_time,"%d:",&minutes) ;
            fscanf(fichier_stop_time,"%d,",&seconde) ;
            // On le double pour déplacé le curseur et on chage pas les variable puisque temps_arrivé = temps_depart
            fscanf(fichier_stop_time,"%d:",&heure) ;
            fscanf(fichier_stop_time,"%d:",&minutes) ;
            fscanf(fichier_stop_time,"%d,",&seconde) ;
            fscanf(fichier_stop_time, "%ld",&stop_id);
            fscanf(fichier_stop_time, ",%d,",&stop_sequence);
            temps_en_minutes = heure*60 + minutes ;
            // on cherche l'id quand est le prochain train pour la station suivante
            if (num_station == stop_id && temps_en_minutes >= heure && temps_en_minutes < *temps_proche )           {
                while ((d = fgetc(fichier_stop_time)) != '\n')
                {
                //On vient à la fin de la ligne
                }
                *temps_proche = temps_en_minutes ;
                fscanf(fichier_stop_time,",%d:",&heure) ;
                fscanf(fichier_stop_time,"%d:",&minutes) ;
                fscanf(fichier_stop_time,"%d,",&seconde) ;
                // On le double pour déplacé le curseur et on chage pas les variable puisque temps_arrivé = temps_depart
                fscanf(fichier_stop_time,"%d:",&heure) ;
                fscanf(fichier_stop_time,"%d:",&minutes) ;
                fscanf(fichier_stop_time,"%d,",&seconde) ;
                fscanf(fichier_stop_time, "%ld",&stop_id);
                fscanf(fichier_stop_time, ",%d,",&stop_sequence);
                temps_en_minutes_2 = heure*60 + minutes ;
                b = find_station(stop_id, reseau);
                star.arete[b] = temps_en_minutes_2 - time ; //on arriverait à cette station en ce temps, cela devient le poids de l'arête
                marque = 1 ; // si la marque vos un c'est qu'on est dans le bon dossier (ligne)
            }
            while ((d = fgetc(fichier_stop_time)) != '\n')
            {
                //On vient à la fin de la ligne
            }
        }
        if (marque = 1)
            {
                transfert_possible(num_station, i, reseau) ;
                exit(0);
            }
        i ++ ;
    }

}
