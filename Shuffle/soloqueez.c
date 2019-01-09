#include <stdio.h>


int recursive(int num)
{
	
	
	printf("%d\n", num);
	if(num == 10)
	{
		return 1;
	}
	
	return num + recursive (num+2);
	
}

int main ()
{
	printf("Main %d\n",recursive(2));
	
	
	
	return 0;
}


