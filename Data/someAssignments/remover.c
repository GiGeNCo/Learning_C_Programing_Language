#include <stdio.h>

int main()
{
	FILE *fptr;
	fptr = fopen("C:\\Users\\LaLu\\Desktop\\Subtitle.txt","r+");
	if(fptr == NULL)
   {
      printf("Error!");   
      //exit(1);             
   }
   else printf("opened");

	getch();
	
	return 0;
}