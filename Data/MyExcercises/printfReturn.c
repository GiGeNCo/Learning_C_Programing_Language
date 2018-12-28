#include<stdio.h>
#include<stdlib.h>

#define STRING "%s\n"



int main ()
{
	
	
	int a [] = {1,2,3,4,5,6,7,8};
	int b =9;
	char str [] = "lalu";
	int c = printf("%d%s%d",a,str,b); // printf abrunebs im elementebis raodenobas ramdensac bechdavs.
	printf("\n%d",c); // c = 12
	
	printf("\n%s\n","hello");
	printf("%10s\n","hello"); // am shemtxvevashi dabechdavs 10 simbolos bolo 5 iqneba hello, pirveli xuti space -ebi. 
							// teqsts yvela variantshi bechdavs, roca ricxvi striqonze didia ramxelatic aris didi win imdeni space eqneba.
							  
	char car = 127;
	//car =car + 20;
	
	printf("%d\n",car);
	car ++;
	printf("%d\n",car);
	car = car - 10;
	printf("%d\n",car);
	printf("Signed size %d\n",sizeof(signed));
	
	unsigned i = 1;  // % u
	int j = -5;
	printf("signed and int sum %u\n",i+j);
	
	
	int var = 072, varx = 0x7a;  // roca rvaobitsih vwert win 0 unda dvuweroT roca hex ebshi win vuwert 0x
	printf("octal %o  hex %x\n",var,varx);
	
	printf(STRING,"GiGeNCo");
	printf(STRING,"size of program");
	system("size pf.exe"); //system brdzanebebs schirdeba stdlib biblioteka isec mushaobs warningebit
	
	return 0;
}