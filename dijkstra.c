#include<stdio.h>

int main(void){
  int id_depart;
  int id_arrivee;
  int time;
  int * dijkstra[25479];
  int * visit[25479];
  int a;
  int b;
  int * id_actuel;
  int * min;
  int timeplus;
  int * precedent[25479];
  reseau = initialisation();
  b=find_station(id_arrivee,reseau);
  printf("id de votre station :");
  scanf("%d", &id_depart);
  printf("\nid de l'arrivee :")
  scanf("%d", &id_arrivee);
  printf("\nheure de départ :")
  scanf("%d", &time);
  printf("\n");
  for(int i=0;i<25479;i++){
    dijkstra[i]=999999;
  }
  for(int i=0;i<25479;i++){
    visit[i]=0;
  }
  dijkstra[id_depart]=0;
  *id_actuel=id_depart;
  while(visit[b]=0){
    min = 999999;
    a = find_station(*id_actuel,reseau);
    update_aretes(*id_actuel,time,reseau);
    for(int i=0;i<25479;i++){
      if(reseau[a].arete[i]!=0){
        if(reseau[a].arete[i]<*min && visit[i]=0){
          *min = reseau[a].arete[i];
          *id_actuel = reseau[i].id;
          timeplus = reseau[a].arete[i];
          precedent[i]=reseau[a].id;
        }
        if(dijkstra[a]+reseau[a].arete[i]<dijkstra[i]){
          dijkstra[i]=dijkstra[a]+reseau[a].arete[i];
        }
      }
    }
    visit[a]=1;
    time = time + timeplus;
  }
  while(id_rev=!id_depart){
    b = find_station(id_arrivee,reseau);
    printf("%d",id_arrivee);
    id_arrivee = precedent[b];
  }
  return 0;
}
