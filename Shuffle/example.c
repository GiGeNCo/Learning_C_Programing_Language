# include <stdio.h>
#include <string.h>


void check (char *d)
{
	
	short c = 0;
	for(int i = 0; i< strlen(d); i++)
	{
		if(d[i] == '(')
			c++;
		else if (d[i] == ')')
			c--;
		
	}
	//printf("%d",c);
	if(c!= 0)
		printf("Incorrect data\n",c);
	else 
		printf("Data is correct\n",c);
}



int main ()
{
	
	char c;
	char data[20];
//	printf("Enter S to start or Q to quite\n");
	
//	scanf("%c",c);
		while(1)
	{
		printf("\nEnter data  \n");
		scanf("%s",data);
		check(data);
		
	}
	
	return 0;
}