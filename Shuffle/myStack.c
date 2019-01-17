#include <stdio.h>

#define SIZE 10


int position = -1 , stack[SIZE];



void push ()
{
	int data;
	if(position <= SIZE)
	{
		
		printf("enter data to store in stack\n");
		scanf("%d",&data);
		position ++;
		stack[position] = data;
				
	}
	else
		
		printf("stack is full\n");	
	
	
}


void pop ()
{
	
	if(position < 0)
	{
		printf("stack is full\n");			
	}
	else position--;
	
	
	
	
}

void show ()
{
	
	
	if (position == -1 )
		printf("stack is emprty\n");
	else
	{
		for(int i = 0; i <= position; i++)
		{
			
			printf("stack data: %d\n",stack[i]);			
		}
	}
	
	
	
	
	
}


int main()
{
	
	short command;
	
	while (1)
	{
		printf("enter 1 to push 2 to pop 3 for show stack\n");
		scanf("%d",&command);
		switch (command)
		{
			case  1 :
			{				
				push();		
				break;
			}
			case  2 : 
			{				
				pop();	
				break;					
			}
			case  3 :
			{				
				show();	
				break;				
			}
		
		
		}
		
		
		
	}
	
	
	return 0;
	
	
}