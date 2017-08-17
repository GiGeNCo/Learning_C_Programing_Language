#include<stdio.h>



int main()
{
	printf("enter loop count and word to loop\n");

	int i,j = 0;
	char str[7];
	scanf("%i%s",&i,str);
	while(j < i)
	{

		printf("%s ------ %i\n",str,j);
		j++;
	}
	

	return 0;
}
