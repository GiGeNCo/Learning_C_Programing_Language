#include"libdata.h"



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

	printf("Enter Planet Name:\n");
	scanf("%s",name);
	printf("Enter Planet diameter:\n");
	scanf("%f",&diameter);
	printf("Enter Planet order:\n");
	scanf("%hd",&order);
	
	planet earth;
	strcpy(earth.ps_name, name);
	prtplanet(earth.ps_name,diameter,order);

	return 0;
}
