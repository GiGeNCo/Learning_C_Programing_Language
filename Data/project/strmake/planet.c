#include<stdio.h>

#include"data.h"



void prtplanet (char name[20], float diameter, short order)
{
	printf("Name of planet is: %s\nDiameter of planet is: %f\nIt is %hd'th planet in Solar system\n",name,diameter,order);
}
