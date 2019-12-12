#include<stdio.h>
#include<stdlib.h>

int prochains(station A,station * reseau,int time){
  for(int i=0;i<=25479;i++){
    if(A->arete[i]!=0){ //si différent de 0 c'est qu'on peut y aller
      printf("%s ",reseau[i]->name); //Station qu'on peut atteindre
      printf("%i\n",arete[i]+time); //Heure du départ
    }
  }
  return 0;
}
