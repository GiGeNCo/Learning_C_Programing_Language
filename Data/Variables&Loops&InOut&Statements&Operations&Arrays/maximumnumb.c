#include <stdio.h> 
int main()
{
	int num[5],j;
	printf("Enter 5 Number\n");

	for(int i = 0; i < 5; i++)
	{
		printf("Enter number %d\n",i+1);
		scanf("%d",&num[i]);
		//printf("i = %d --- num[%d] = %d\n",i,i,num[i]);	

	}

	j = num[0];

	for(int i = 1; i < 5; i++)
	{
		
		if(j < num[i])
		{
			j = num[i];
		}


	}
	printf("Biggest One is %d\n",j);

	return 0;
}
