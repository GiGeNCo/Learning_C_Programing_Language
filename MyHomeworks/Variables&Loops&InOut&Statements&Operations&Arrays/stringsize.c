#include<stdio.h>

void txt(char text []);
void numbs(short numbs[]);
int main()
{
	char str[] = "GiGeNCo";
	short n[7];
	printf("size of %s is: %lu\n",str,sizeof(str));
	
	printf("size of short array is: %lu\n",sizeof(n));
	txt(str);
	numbs(n);

	return 0;
}
void numbs(short numbs[])
{
	printf("size of short array is: %lu\n",sizeof(numbs));	
}

void txt(char text [])
{
	printf("text is: %s\nsize of text is: %lu\n",text,sizeof(text));

}
