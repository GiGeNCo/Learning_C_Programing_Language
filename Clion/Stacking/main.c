#include <stdio.h>

int main() {
    int a=3;
    printf ("adress of a = %x\n",&a);
    int b [] = {1,2};
    printf ("adress of b[0] = %x\n",b);
    printf ("adress of b[1] = %x\n",b+1);
    int c = 4;
    printf ("adress of c = %x\n",&c);
    b[3]=10;
    printf ("adress of b[3] = %x\n",b+2);
    printf ("adress of a = %x\n",&a);

    printf ("a = %d",a);
    return 0;
}