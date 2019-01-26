#include <stdio.h>


long int concatenate(int num1, int num2)
{
	int result = num1, i = 1;
	
	
	while(num2/i != 0)
	{
		i*=10;		
		//printf("%d\n",i);
	}
	result = num1*i+num2;
	
	//printf("result is %d\n",result);
	
	
	return result;
}


int main ()
{
	int a = 1234, b = 56789,c;
	
	c=concatenate(a,b);
	
	printf("Concatenated number %d\n",c);
	
	
	
	
	
	return 0;
}