# include<stdio.h>

int main()
{
	char *str = "Hello World!\n";
	char *str1 = "Hello Wor\bld!";
	char *str2 = "Hello Wor\tld!\t";
	char *str3 = "Hello Wor\"ld!\"";
	int i;
	printf(" init i ==> %d\n", i);
	
	while(str[i])
	{
		printf("%c",str[i++]);	
	}
	printf("\n");

	i = 0;
	while(str1[i])
	{
		printf("%c",str[i++]);	
	}
	printf("\n");
	i = 0;

	while(str2[i])
	{
		printf("%c",str[i++]);	
	}
	printf("\n");

	i = 0;

	while(str3[i])
	{
		printf("%c",str[i++]);	
	}
	printf("\n");


	return 0;
}
