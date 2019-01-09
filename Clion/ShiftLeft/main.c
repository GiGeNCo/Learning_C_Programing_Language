#include <stdio.h>

int main() {
    printf("Input value\n");
    int  a,b ;
    scanf("%i",&a);
     a <<=3;
     b = a << 2;
    printf("a %d, b %d",a,b);
    return 0;
}