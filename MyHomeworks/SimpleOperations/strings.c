#include <stdio.h>

int main()
{
	char * name = "Lalu";
	char aname[] = "Giga";
	printf("%s is %s .\n", name, aname);
	int size = sizeof(name);
	printf("size of name is %d\n", size);
	size = sizeof(aname);
	printf("size of aname is %d\n",size);
	return 0;
}
