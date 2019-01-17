#include <stdio.h>


void func (char c)
{
	static short counter = 0;
	static int a = 1,n;
	
	if(c == 'g')
	{
		a<<=1;
		counter ++;
	}
	else if(c == 'b')
	{
		a <<= 1;
		a++;		
		counter++;
	}
	else
	{
		
		printf("Incorrect input\n");		
	}
		
	printf("a = %d\n",a);
	printf("entered number count = %d\n",counter);
	if(counter == 10)
	{
		
		printf("Class is full\ndata is %d\n",a);
		n=a;
		counter = 0;
		
		a = 1;
		

		while (n) 
		{
			if (n & 1)
				printf(" Boy ");
			else
				printf(" Girl ");

			n >>= 1;
		}
		printf("\n");
	}
	
}




int main ()
{
	
	while(1)
	{
		
		printf("enter g for girl or b bor boy\n");
		char data;
		scanf("%c",&data);
		func(data);
				
	}
	
	
	
	
	return 0;
}