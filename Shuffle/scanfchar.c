#include <stdio.h>
#include <string.h>
#include<stdlib.h>


int main ()
{


    char * string;
    //scanf("%s",&string);   
	gets(string);

    printf("size of string %d\n", strlen(string));

    int *numArr;

    for(int i = 0; i < strlen(string); i++)
    {

        printf("character N%d  is %c\n",i+1,string[i]);

    }

    
    return  0;
}