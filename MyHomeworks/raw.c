#include <stdio.h>
#include <string.h>

int main ()
{
char str[] = "giga";
int i = 0;
for(i; i < sizeof(str); i++)
{
    printf("str[%d] value is: %d\n",i,str[i]);
}

printf("size of char array is: %d",sizeof(str));

return 0;
}