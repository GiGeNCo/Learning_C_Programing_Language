#include <stdio.h>

int f(int x, int s[]);


int main ()
{
	int *a;
	
	printf("%d\n\n",sizeof(a));
	int s [] = {5,4,3,2,6};
	printf("%d",f(6,s));
	
	
	
	
	return 0;
}


int f(int x, int s[])
{
	
	printf("%d\n",sizeof(s));
	int n,m = ((int)sizeof(s)/sizeof(int));
	for (n = 0; n < m ;n++)
	{
		printf("%d\n",n);
		printf("%d\n",x);
		printf("%d\n",m);
		if(s[n]==x)
		{
			
			
			return n;
			break;
		}
	
	}



}