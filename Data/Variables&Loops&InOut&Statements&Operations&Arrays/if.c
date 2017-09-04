#include <stdio.h>



int main ()
{
	int numb = 17;
	printf("insert numb. \n");
	scanf("%i",&numb); // after scanf numv value will not changed
			   // it will 17 :/
	int a,b;
	printf("insert value of a and b.\n");
	scanf("%i%i",&a,&b);

	if (numb > 17)
	{
		printf("ricxvi metia 17 ze.\n");
	}
	else if (numb < 17)
	{
		printf("ricxvi naklebia 17 ze.\n");
	}
	else
	{
		printf("ricxvi aris 17!\n");
	}

	if(a>b && a !=0)
	printf("%i is big than %i and it is positive\n", a,b);

	printf("numb value: %i\n",numb);






	return 0;
}
