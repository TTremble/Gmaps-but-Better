#include<stdio.h>
#include<stdlib.h>

station find_station(int id_search,station * reseau){
  for(int i=0;i<=25479;i++){
    if(reseau[i].id=id_search){
      return reseau[i];
    }
    else{
      printf("ERROR NON EXISTANT");
    }
  }
  return NULL;
}
