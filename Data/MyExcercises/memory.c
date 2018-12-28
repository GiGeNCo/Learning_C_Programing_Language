#include<stdio.h>
//#include<stdlib.h>

static int i;
static int i = 123;
static int i;
//static int  i = 12; //redefination


void func()
{
	
	
	printf("%d\n",i);
}

int main()
{
	
	printf("%d\n",i); // mexsierebashi globalebbs da statikebs aqvt calke adgili da axla is 123 is tolia
	static int i ;
	printf("%d\n",i);  // mtavari punqcia aris stekshi i s vqmnit stekshi amitom is 0 is tolia
	static int a = 17;
	func();
	
	return 0;
}

