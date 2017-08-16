#include <stdio.h>



int main ()
{

	char character;
	int a,b;
	printf("to compare type > c <\nto add type > a <\nto multiple type > m <\n Exit type > e < ");
	scanf("%c",&character);
	printf("enter  2 numb: \n");
	scanf("%i%i",&a,&b);
	switch(character)
	{
		case 'c': 
			if(a >= b) printf("\n%i metia an toli %i\n",a,b);
			else printf("\n%i metia %i\n",b,a);
			break;
		case 'a':
			printf("\nsum of 2 numb is: %i\n",a+b);
			break;
		case 'm':
			printf("\nmultiple of 2 numb is: %i\n",a*b);
			break;
		case 'e': 
			return 0;


	}





	return 0;
}
