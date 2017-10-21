#include <stdio.h>
#include "crypt.h"
#include "mstr.h"


int main()
{
	char msg[100];
	char str[100];
	
	fgets(msg,sizeof(msg),stdin);
	encrypt(msg);
	printf("Encrypted  %s\n",msg);
	decrypt(msg);
	printf("Decrypted  %s\n",msg);

	fgets(str,sizeof(str),stdin);
	toUpper(str);
	printf("ToUpper  %s",str);

	return 0;
}
