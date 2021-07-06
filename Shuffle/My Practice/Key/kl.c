#include <stdio.h>
#include <iostream.h>
#include <conio.h>

int main()
{
	while (!kbhit())
	{
		printf("Press a key\n");
	}

	return 0;
}