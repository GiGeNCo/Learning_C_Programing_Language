#include<stdio.h>
#include<string.h>

union Data
{
	int i;
	float f;
	char str[20];


};
// So union size is equal to which is much size variable in Union
// Difference structures is that structure's size is sum of variables their

int main()
{
	union Data data;	//(union)data type is unisgned long
	printf("Declared Union size is: %lu\n", sizeof(data)); 




	return 0;
}
