#include <stdio.h>

int b;
void func ()
{
    int a = 123;
    float c = 123.123;
    double d = 111.222;
    char *car = "character";


}

int main() {

    size_t a=-11,a1=-5,a2=1 ;
    printf("size %d\n",sizeof(size_t));
    func();
    func();
    func();
     //& 000000000061FE4C
    printf("address of a =%p value %d\nb = %d",&a,a1,b);

    return 0;
}