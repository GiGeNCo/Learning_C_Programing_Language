#include <stdio.h>

void gbCount()
{
	printf("enter count of Girls and boys from 0 to 30\n");
	int count;	
	scanf("%i",&count);
	while(count < 0 && count > 31)
	{	
		printf("Enter correct value\n");
		
		scanf("%i",&count);
	}
	printf("Enter g for girl, b for boy\n");
	char c;
	//printf("count %i\n",count);
	int boys=0, girls=0, amount = 1;
	
	int i = 0;
	
	for(i; i < count; i++)
	{
		c = ' ';
		scanf(" %c",&c);
		if(c=='g')
		{
			amount = amount  << 1;
			amount++;
		}else if(c=='b')
		{
			amount = amount <<1;
		}
		else
		{
			printf("enter correct value\n");
			i--;
		}
		//printf("value of c is %c ---- ",c);
		//printf("value of count is %d ---- ",count);
		//printf("value of i is %d\n",i);
		
	}
	
	
	int n = amount;
	
	while(n > 1)
	{
		if(n%2 == 1)
		{
			girls++;
		}else{
			boys ++;
		}
		n= n /2;
		
		
		
	}
	
	
	printf("decimal  %i\n",amount);
	printf("gb in class %i  ----  %i\n",girls, boys);
	
	
	
}

int main()
{
	gbCount();
	return 0;
}