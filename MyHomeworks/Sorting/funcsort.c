#include<stdio.h>
#include "incfunc.h"



int main()
{
	
	char c;
	printf("Enter p to pow\t m to multiple \t a to add\t s to substract\n");
	scanf("%c",&c);
	switch(c)
	{
		case 'a':
		{
			add();
			break;
		}

		default:
		{

			notfound();
		}

	}
	
	


	return 0;
}

void add()
{
	printf("enter two number\n");
	int a,b;
	scanf("%i %i",&a,&b);
	printf("sum of this two number is %i\n",a+b);
}
void notfound()
{

	printf("try another operation\n");

}
