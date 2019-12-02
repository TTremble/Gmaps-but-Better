// A C Program to demonstrate adjacency list  
// representation of Graphes 
#include <stdio.h> 
#include <stdlib.h> 
  
// A structure to represent an adjacency list node 
struct Noeud_liste_adjacent 
{ 
    int dest; 
    struct Noeud_liste_adjacent* next; 
}; 
  
// A structure to represent an adjacency list 
struct Liste_adjacent 
{ 
    struct Noeud_liste_adjacent *head;  
}; 
  
// A structure to represent a Graphe. A Graphe 
// is an array of adjacency lists. 
// Size of array will be V (number of vertices  
// in Graphe) 
struct Graphe 
{ 
    int V; 
    struct Liste_adjacent* array; 
}; 
  
// A utility function to creation a nouveau adjacency list node 
struct Noeud_liste_adjacent* nouveauNoeud_liste_adjacent(int dest) 
{ 
    struct Noeud_liste_adjacent* nouveauNode = 
     (struct Noeud_liste_adjacent*) malloc(sizeof(struct Noeud_liste_adjacent)); 
    nouveauNode->dest = dest; 
    nouveauNode->next = NULL; 
    return nouveauNode; 
} 
  
// A utility function that creations a Graphe of V vertices 
struct Graphe* creationGraphe(int V) 
{ 
    struct Graphe* Graphe =  
        (struct Graphe*) malloc(sizeof(struct Graphe)); 
    Graphe->V = V; 
  
    // creation an array of adjacency lists.  Size of  
    // array will be V 
    Graphe->array =  
      (struct Liste_adjacent*) malloc(V * sizeof(struct Liste_adjacent)); 
  
    // Initialize each adjacency list as empty by  
    // making head as NULL 
    int i; 
    for (i = 0; i < V; ++i) 
        Graphe->array[i].head = NULL; 
  
    return Graphe; 
} 
  
// Adds an edge to an undirected Graphe 
void ajouter_Arrete(struct Graphe*Graphe, int src, int dest) 
{ 
    // Add an edge from src to dest.  A nouveau node is  
    // added to the adjacency list of src.  The node 
    // is added at the begining 
    struct Noeud_liste_adjacent* nouveauNode = nouveauNoeud_liste_adjacent(dest); 
    nouveauNode->next = Graphe->array[src].head; 
    Graphe->array[src].head = nouveauNode; 
  
    // Since Graphe is undirected, add an edge from 
    // dest to src also 
    nouveauNode = nouveauNoeud_liste_adjacent(src); 
    nouveauNode->next = Graphe->array[dest].head; 
    Graphe->array[dest].head = nouveauNode; 
} 
  
// A utility function to print the adjacency list  
// representation of Graphe 
void printGraphe(struct Graphe* Graphe) 
{ 
    int v; 
    for (v = 0; v < Graphe->V; ++v) 
    { 
        struct Noeud_liste_adjacent* pCrawl = Graphe->array[v].head; 
        printf("\n Adjacency list of vertex %d\n head ", v); 
        while (pCrawl) 
        { 
            printf("-> %d", pCrawl->dest); 
            pCrawl = pCrawl->next; 
        } 
        printf("\n"); 
    } 
} 