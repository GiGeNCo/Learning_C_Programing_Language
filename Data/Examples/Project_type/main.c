#include<stdio.h>
#include"funcdata.h"


int main()
{

	short tem;
	printf("Enter temperature\n");
	scanf("%hd",&tem);
	temperature(tem);
	date();
	printf("\nDONE!");

	return 0;
}
