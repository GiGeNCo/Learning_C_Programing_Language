#include <stdio.h>




int main()
{


	int i;

	for(i = 0; i < 10; i++)
	{

		if(i == 3) continue;
		if(i == 7) break;
		printf("Continue\n");
		printf("i = %i\n",i);

	}


	return 0;
}
