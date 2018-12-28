#include<stdio.h>
#include<string.h>

int stringsize(char *str);
int main ()
{

	puts("Type any string");
	char *s;
	gets(s);
	
//	char * s = "esesheshasashasia";
	//printf("%d   %d\n",s,sizeof(s));
	
	for(int i = strlen(s)-1; i >= 0; i--)
	{
				
		printf("%c",s[i]);
	}
	/* // asec shesadzlebelia
	for(int i = stringsize(s)-1; i >= 0; i--)
	{
		
		printf("%c",s[i]);
	}
	
	*/
	//printf("\nstringsize%d\n",stringsize(s));
	

	return 0;
}

int stringsize(char *str)
{
	int i = 0;
	for(i ; str[i]!=0;i++ )
	{
		printf("adress %d\n",&str[i]);
	}
	return i;
	
	
	
	
}