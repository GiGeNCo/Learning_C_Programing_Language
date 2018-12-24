#include<stdio.h>


int main ()
{
	char ch = 'c';  //simbolo
	
	char ca [] = "I am Lalu"; //striqoni
	
	printf("sizeof ca is: %d",sizeof(ca)); //	10
	printf("\nstriqoni: %s",ca);	//	I am Lalu
	//printf("\ntest1: %s",ch);		// runtime error, am adgilis mere tishavs programas,kompilacias aketebs
	printf("\ntest2: %c",ch);		//	c 
	printf("\ntest3: %c",ca);		//	%, ca-s mnishvneloba ricxvebshi aris 6422309, charis diapazoni aris -128 dan 127 amd, es ricxvi am diapazonshi rom chavsvat mivigebt 37s anu %-simbolos
	printf("\ntest4: %d",ca);		//  6422309
	printf("\ntest5:  %c << ",	sizeof(ca)+68);		// N <3
	ch = ca;								//warning, 
	printf("\ntest6: %d",ch);				// 37
	printf("\ntest8: %d", sizeof(int));		//	4
	printf("\ntest9: %d", sizeof(char));	//	1
	printf("\ntest10: %d", sizeof(long));	//	4
	printf("\ntest11: %d", sizeof(float));	//	4
	printf("\ntest12: %d", sizeof(double));	//	8
	printf("\ntest13: %d", sizeof(short));	//	2
	printf("\ntest14: %d", sizeof(void));	//	1
	unsigned short a;
	unsigned int ui;
	printf("\ntest15: %d", a);	//	128
	printf("\ntest16: %d", ui);	//	random number
	a = 0;
	a -=1;
	ui = 0;
	ui -=1;
	printf("\ntest17: %d", a);	//	65535, max value of u short
	printf("\ntest18: %i", ui);	//	-1, why? it is unsigned, cause in prntf we also need %ui, but why does we need unsigned int declaration?
	printf("\ntest18: %u", ui); //	4294967295, max value of uint
	
	return 0;
}