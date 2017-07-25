#include <stdio.h>
#include <string.h>

/*
difference union and stucture is that structure's variables are indefendent
and memory space is sum of variable struct uncrease 4 bytes
in union every variables addres start from one adress
and size is which wariable's has more space 
*/

struct structure 
{
	int num;
	int arr[5];
	short book_id;
	char str[33];
};

int main ()
{	
	struct structure bla;
	int a = sizeof(bla);
	printf("Size of structure is: %d\n",a);
}

