#include <stdio.h> 
int main()
{
    int a = 125, b = 12345;
    long l = 1234567890;
    short s = 4043;
    float f = 2.13459;
    double d = 1.1415927;
    char c = 'W';
    unsigned long ul = 2541567890;

    printf("a + c = (digit) %d\n", a + c);
    printf("a + c = (character) %d\n", a + c);
    printf("f + c = %f\n", f + c);
    printf("df + f = %f\n", d + f);
    printf("((int) df) + l =  %ld\n", ((int) d) + l);
    printf("a + f = %f\n", a + f);
    printf("s + b =  %d\n", s + b);
    printf("l + b = %ld\n", l + b);
    printf("s + c =  %hd\n", s + c);
    printf("l + c = %ld\n", l + c);
    printf("l + ul = %lu\n", l + ul);

    return 0;
}
