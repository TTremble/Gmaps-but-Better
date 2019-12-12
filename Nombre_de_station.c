#include <stdio.h> 
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include "lecture.h"
#define IN_FILE_ERROR 1 

int nombre_de_transports()
{   
    int nombre_de_transports = 0 ;
    struct dirent *de;  // Pointer for directory entry 
  
    // opendir() returns a pointer of DIR type.  
    DIR *dr = opendir("Archives_ratp"); 
  
    if (dr == NULL)  // opendir returns NULL if couldn't open directory 
    { 
        printf("Could not open current directory" ); 
        return 0; 
    }
    while ((de = readdir(dr)) != NULL)     // Refer http://pubs.opengroup.org/onlinepubs/7990989775/xsh/readdir.html for readdir()
    {   
        nombre_de_transports ++ ;
    }
    printf("%d",nombre_de_transports - 2);
    return(nombre_de_transports - 2) ;
}