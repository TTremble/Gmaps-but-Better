#include <stdio.h>
#include "station.h"
#include "lecture.h"

//fonction principale pour trouver le plus court chemin, on utilise l'algorithme de dijkstra.
int main(void){
  int id_depart;
  int id_arrivee;
  int time;
  int dijkstra[25479]; //tableau des valeurs attribuées à chaque noeud pendant dijkstra
  int visit[25479]; //tableau pour le marquage de chaque noeud, 0 si il n'a pas été visité, 1 si il l'a été
  int a;
  int b;
  int * id_actuel; //id du noeud qu'on visite actuellement
  int * min;
  int timeplus;
  int precedent[25479]; //tableau qui contient l'ID du noeud visité précédemment, pour retrouver le chemin emprunté plus tard
  station * reseau = initialisation(); // création du réseau, ie du graphe mais sans les âretes pour l'instant
  b=find_station(id_arrivee,reseau);
  printf("id de votre station :");
  scanf("%d", &id_depart);
  printf("\nid de l'arrivee :") ;
  scanf("%d", &id_arrivee);
  printf("\nheure de départ :") ;
  scanf("%d", &time);
  printf("\n");
  for(int i=0;i<25479;i++){
    dijkstra[i]=999999; //1ere étape de dijkstra, on initialise tout les sommets à "l'infini"
  }
  for(int i=0;i<25479;i++){
    visit[i]=0; //on fait en sorte qu'aucun noeud ne soit marqué au départ
  }
  dijkstra[id_depart]=0;
  *id_actuel=id_depart; //le premier noeud que l'on visite est celui du départ
  while(visit[b]=0){ //tant qu'on a pas visité l'arrivée, on réitère
    *min = 999999; //cette variable permet de trouver le noeud qui est le plus proche du sommet visité
    a = find_station(*id_actuel,reseau);
    update_aretes(*id_actuel,time,reseau); //on fournit à l'algorithme la partie du graphe qui nous intéresse ici, en fonction de l'heure.
    for(int i=0;i<25479;i++){
      if(reseau[a].arete[i]!=0){
        if(reseau[a].arete[i]<*min && visit[i]==0){
          *min = reseau[a].arete[i];
          *id_actuel = reseau[i].id; //on passera sur ce sommet à la prochaine visite, on le remplace si on en trouve un mieux cependant
          timeplus = reseau[a].arete[i]; //temps pour y aller
          precedent[i]=reseau[a].id;
        }
        if(dijkstra[a]+reseau[a].arete[i]<dijkstra[i]){
          dijkstra[i]=dijkstra[a]+reseau[a].arete[i]; //on change la valeur du noeudcomme dans dijkstra
        }
      }
    }
    visit[a]=1; //on marque le sommet visité
    time = time + timeplus; //on change l'heure par la nouvelle après le trajet
  }
  while(id_arrivee != id_depart){ //on affiche une par une les stations qui constituent le plus court chemin
    b = find_station(id_arrivee,reseau);
    printf("%d",id_arrivee);
    id_arrivee = precedent[b];
  }
  return 0;
}
