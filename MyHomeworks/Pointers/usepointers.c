#include<stdio.h>


int main ()
{
	int a = 17;
	int *p=&a;
	

	printf("value of a is %d\n",a);
	printf("adress of a is %p\n",&a);
	printf("value of a is *(&) %d\n",*(&a));
	//printf("value of p is %d\n",&p);
	printf("adress of p is %p\n",&p);
	printf("in adress p stored number %d\n",*p);	
	printf("on adress %p is stored number %d\n",&a,a);
	
}
