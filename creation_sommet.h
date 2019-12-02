#include <stdio.h>
#include <stdlib.h>
#include <"structure_graphe.h">

// Driver program to test above functions 
int main() 
{ 
    // create the graphe given in above fugure 
    int V = 25550; 
    struct graphe* graphe = creationgraphe(V); 
    ajouter_arrete(graphe, 0, 1); 
    ajouter_arrete(graphe, 0, 4); 
    ajouter_arrete(graphe, 1, 2); 
    ajouter_arrete(graphe, 1, 3); 
    ajouter_arrete(graphe, 1, 4); 
    ajouter_arrete(graphe, 2, 3); 
    ajouter_arrete(graphe, 3, 4); 
  
    // print the adjacency list representation of the above graphe 
    printgraphe(graphe); 
  
    return 0; 
} 