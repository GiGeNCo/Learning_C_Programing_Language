#include<string.h>
#include"mstr.h"


void toUpper(char *str)
{
	int i = 0;
	for(;i < strlen(str)-1; i++)
	{
		*(str+i) = *(str+i) - 32;

	}

}
