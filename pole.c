#include <stdio.h>
#include <stdlib.h>
#define sirka 20
#define vyska 4


int main()
{ 
    int pole[vyska][sirka];
    int d, j;
    for (j = 0; j < vyska; j++)
    for (d = 0; d < sirka; d++)
        pole[j][d] = 0;
    for (j = 0; j < vyska; j++)
    {
        for (d = 0; d < sirka; d++)
        printf("%d ", pole[j][d]);
        printf("\n");
    }
return 0;
}