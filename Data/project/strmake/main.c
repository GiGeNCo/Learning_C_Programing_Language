#include<stdio.h>

#include"data.h"


typedef struct skyobject
{
	char ps_name[20];
	float ps_diameter;
	short ps_order;


} planet;

int main()
{
	float diameter;
	short order;
	char name[20];

	printf("Enter Planet Name, Diameter and Order\n");
	scanf("%s, %f, %d",name,&diameter,&order);
	planet earth;
	strcpy(earth.ps_name, name);
	prtplanet(earth.ps_name,12123.123,3);

	return 0;
}
