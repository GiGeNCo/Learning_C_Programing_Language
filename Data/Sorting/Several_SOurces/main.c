#include<stdio.h>
#include"crypt.h"


int main()
{	
	printf("Enter some text\n");
	char msg[100];
	fgets(msg,sizeof(msg),stdin);
	encrypt(msg);
	printf("\nencrypted msg: \n%s",msg);

	decrypt(msg);
	printf("\ndecrypted msg: \n%s",msg);

	printf("\nHappy end ^_^\n");
	
	return 0;
}
