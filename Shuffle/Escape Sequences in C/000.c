#include <stdio.h> 
int main(void) 
{ 
	// we are using \OOO escape sequence, here 
	// each O in "OOO" is one to three octal 
	// digits(0....7). 
	char* s = "A\07731\069";  //   \0oo oo is octal value asci table
	printf("A\05531\043"); 
	return 0; 
} 