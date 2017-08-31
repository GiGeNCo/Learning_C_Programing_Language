#include<stdio.h>


int main(int argc, char *argv[])
{
	int i;
	for(; i < argc; i++)
	{

		printf("%s\n",argv[i]);

	}

	printf("value %s ----- %i  -------  %i",argv[0],i,argc);



	
	return 0;
}
