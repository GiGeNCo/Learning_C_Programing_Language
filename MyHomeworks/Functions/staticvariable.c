#include<stdio.h>


void func();


int main ()
{	for(int i = 0; i <5; i++)
	func();
}

void func()
{
	static int snum = 0;
	int num = 0;
	printf("int tipe value is %d ### static int value is %d\n",num,snum);
	num += 2;
	snum += 2;
}
