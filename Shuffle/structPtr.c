#include <stdio.h>


typedef strcat 
{
	
	
	int first;
	float second;
	
} Data

Data * makeData()
{
	
	
	return (Data *)malloc(sizeof(Data));
	
}

int main ()
{
	Data *d = makeData();
	d->first = 21;
	d->second = 3.14;
	printf("%d",d->first+ d->first);
	free(d);
	
	
	
	return 0;
}