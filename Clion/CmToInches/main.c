#include <stdio.h>

int main() {
    printf("Input number\n");
    float num;
    scanf("%f",&num);
    printf("%d cm In inches is: %.2f",num, num/2.54);
    return 0;
}