#include <stdio.h>
#include <stdlib.h>
struct Stop
{
    unsigned short num_arret;
    char nom_arret[100];
    char adresse[1000];
    double longitude;
    double latitude
};