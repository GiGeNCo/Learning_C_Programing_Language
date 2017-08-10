#include<stdio.h>
#include<string.h>


union Data
{
	int i;
	float f;
	char str[20];
};


int main()
{
	union Data udata;
	udata.i = 17;
	udata.f = 17.17;
   	strcpy(udata.str, "C Programming");

	printf( "data.i : %d\n", udata.i);
  	printf( "data.f : %f\n", udata.f);
  	printf( "data.str : %s\n", udata.str);
	/*
		there is differnece int and float cause 
		char variable write their value on full union location 
		and when write, 17 and 17,17 write in location of int and
		float write differrent values. (char value)  thats all about union
	*/

	udata.i = 17;
	printf( "data.i : %d\n", udata.i);
	udata.f = 17.17;
	printf( "data.f : %f\n", udata.f);
	strcpy(udata.str, "C programming");
	printf("data.str : %s\n", udata.str);

	return 0;
}
