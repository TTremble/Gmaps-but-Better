#include<stdlib.h>
#include<stdio.h>
#include"station.h"
#include"find_station.c"

int main(void){
  station * reseau=malloc(25479*sizeof(station));
  char * nom;
  int * ar;
  for(int i=0;i<25479;i++){
    reseau[i].name=nom;
    reseau[i].id=112;
    reseau[i].lat=1;
    reseau[i].lon=1;
    reseau[i].arete=ar;
  }
  reseau[20030].id=243102;
  printf("%i\n",find_station(243102,reseau).id);
  return 0;
}
