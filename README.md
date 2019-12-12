Tout d'abord lancer le script Téléchargement.sh qui vous permet de télécharger le fichier gtfs de la ratp et de le placer dans un dossier.
Les structures sont dans station.h 
Les fonctions de cette structure sont create station.c
Initialisation.c permet l'initialisation du graphe et du tableau des trajets
La structure des stations est pensée pour immiter une mattrice d'adjacence après creation du graphe
Cela sera faciliter par la lecture par ligne qui permetrra de connaitre facilement les stations adjacente
Test find qui test la fonction find station et le test test prochain qui test les station prochaine