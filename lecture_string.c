#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char lecture(FILE*fichier) 
{
    FILE *fp;
    char buff[1024];
    char str[128];

    fp=fopen("data.txt","r");

    while (NULL!=fgets(buff, sizeof(buff), fp))
    {
        sscanf(buff, "%*[^\"]%*c%[^\"]%*c%*[^\n]%*c", str);
        printf("%s\n", str);
    }
    fclose(fp);
    return 0;
}