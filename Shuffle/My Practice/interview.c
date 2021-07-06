#include <stdio.h>


void arrfunc(int *arr1)
{



	for(int i = 0; i<5; i++)
	{
		printf("arr1[%d] = %d\n",i, arr1[i]);		
	}
	
	
}
short foo(char c)
{
	
	c=c>>4;
	
	
	if(c%2)
	{
		return 1;
	}
		
	return 0;
	
}

int main()
{
	int arr[5]= {5,4,3,2,1};
	
	arrfunc(arr);


	for(int i = 1; i<=5; i++)
	{
		arr[i-1]=i;
	}
	
	

	
	int n;
	for(int i = 0; i<2; i++)
	{
		n = arr[i];
		
		arr[i] = arr[4-i];
		arr[4-i] = n;
		
	}
	
	
	for(int i = 0; i<5; i++)
	{
		printf("arr[%d] = %d\n",i, arr[i]);		
	}



	int tab[3] = {1,5,8};
	int* p = tab;
	
	printf("*p = %i\n",*p);
	printf("*(p+2) = %i\n",*(p+2));
	printf("*p+1 = %i\n",*p+1);

	
	printf("%d",foo(0b10000000));
	
	return 0;
}