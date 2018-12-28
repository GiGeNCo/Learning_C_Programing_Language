#include <stdio.h>
#define PI  3.14


int main ()
{
	
	float  l,s;
	int r;
	puts("Enter Radius");
	
	scanf("%d",&r);
	printf("Perimeter of Cycle is: %4.2f", 2*(PI*r));
	printf("\nArea of Cycle is: %4.2f", PI*r*r);
	
	
	
	return 0;
}