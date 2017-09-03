#include "crypt.h"

void encrypt(char *msg)
{
	while(*msg)
	{
		*msg = *msg+1;
		msg++;
	}

}

void decrypt(char *msg)
{
	while(*msg)
	{

		*msg = *msg-1;
		msg++;
	}


}
