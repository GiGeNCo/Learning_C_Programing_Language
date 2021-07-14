#include <stdio.h>
#include "paybox.h"


int main ()
{
	
	printf("type: c - for check | d for deposit | s - for show\n");
	char c = ' ';
	
	scanf("%c",&c);
	
	
	switch(c)
	{
		case 'c':
			check();
			break;
		case 'd':
			deposite();
			break;
		case 's':
			show();
			break;
		default:
			printf("incorrect input\n");
			break;
		
	}
	
	
	
	
	
	return 0;
}