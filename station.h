struct station{
    char * stop_name;
    int stop_id;
    int stop_lat;
    int stop_lon;
    int * arete; //liste de taille |V| avec les poids de chaque arête pour cette station à la station indiquée par le numéro de case dans le tableau
}
