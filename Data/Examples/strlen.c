#include<stdio.h>



int main ()
{	
	char str[17];

	printf("%lu Enter some string:  \n",sizeof(str));
	fgets(str,sizeof(str),stdin);

	int i = 0;

	while(1)
	{
		i++;
		if(str[i] == 0) break;		

	}

	printf("Recieved string symbol count is: %i\n",i-1);


	return 0;
}
