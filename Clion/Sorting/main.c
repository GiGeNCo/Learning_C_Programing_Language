#include <stdio.h>
#include <string.h>
#include "parsing.h"

// cudi programaa mushaobs magram, stringad shemomyavs ricxvebi da ase ver gavigebt 57, 57 davweret tu 5 da 7

int main ()
{

    printf("Enter number for sorting\n");
    //char *string;
    char string [20];
    scanf("%s",string);

    //printf("size of string %d\n", strlen(string));

    int numArr[strlen(string)];

    for(int i = 0; i < strlen(string); i++)
    {
       // printf("parsing...\n");
        if(charToInt(string[i]) == -1)
            printf("Enter unsigned numbers\n");
        else
            numArr[i] = charToInt(string[i]);
        printf("int numbers %d\n",numArr[i]);
    }
    printf("size of number %d\n", strlen(string));
    int check= numArr[0];
    for(int i = 0; i < strlen(string); i++)
    {
        check= numArr[i];
        for(int j = 0; j < strlen(string); j++)
        {
            if(numArr[j]>numArr[i])
            {
                check = numArr[j];
                numArr[j] = numArr[i];
                numArr[i] = check;
            }
        }

    }

    printf("Sorted number\n");

    for(int i = 0; i < strlen(string); i++)
    {
        printf("%d",numArr[i]);
    }


    return  0;
}