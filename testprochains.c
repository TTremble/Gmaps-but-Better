#include<stdlib.h>
#include<stdio.h>
#include"station.h"
#include"prochains.c"


int main(void){
  station * reseau=malloc(25479*sizeof(station));
  char * nom;
  int * ar;
  char nam[4];
  nam[0]='Y';
  nam[1]='v';
  nam[2]='e';
  nam[3]='s';
  for(int i=0;i<=25479;i++){
    reseau[i].name=nom;
    reseau[i].id=112;
    reseau[i].lat=1;
    reseau[i].lon=1;
    reseau[i].arete=ar;
  }
  reseau[18159].name=nam;
  for(int i=0;i<=25479;i++){
    reseau[20030].arete[i]=0;
  }
  reseau[20030].arete[18159]=95;
  prochains(reseau[20030],reseau,1300);
  return 0;
}
