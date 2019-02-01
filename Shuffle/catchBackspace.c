#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void keys()
{
	char *c;
	for (int i = 65; i < 123; i++)
	{
		if(GetKeyState(8)) printf("\\b");
		//else if (GetKeyState()) ;
		
		
		
	}		
	
}


int main()
{
    printf("Press a virtual key\n");
	
	int counter = 0;
	
	if( GetKeyState(8))
	{
		printf("volalal %d",counter);
	}
    printf("Virtual key pressed. Press Any key to exit.\n");
    getchar();    //at this point, the program should wait for a user input.
    return 0;
}