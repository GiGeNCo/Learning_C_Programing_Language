#include <stdio.h>
int main()
{
	int num[5],j;
	printf("Enter 5 Number\n");

	for(int i = 0; i < 5; i++)
	{
		j = i + 1;
		printf("Enter number %d\n",j);
		scanf("%d\n",&num[i]);
		printf("j = %d ---- i = %d --- num[i] = %d\n",j,i,num[i]);

	}
	for(int i = 0; i < 5; i++)
	{
		printf("Printing... \ni = %d\n",num[i]);



	}

	return 0;
}
