#include <stdio.h>


int main ()
{
	int i,z = 0;
	printf("enter loop count: ");
	scanf("\n%i",&i);
	
	while(z < i)
	{
		printf("Loop %i\n",z+1);
		++z;
	}
	
	while(1)
	{

		printf("decriment of z: %i\n",z--);
		if (z == 0) break;
	}

	//finally value of z will 0 cause last operation is z-- and after compiler run it z value will be decremented

	return 0;
}
