#include <stdio.h>

int main ()
{	
	int i = 1, j = 1, m;
	for (i; i<=3;i++)
	{
		printf("multiple %d\n",i);
		while(j<=10)
		{
			
			m = i*j;
			printf("%d x %d = %d\n",i,j,m);
			j++;			
		}		
		j =1;		
	}
	
	return 0;
}