#include <stdio.h>

int main() {
    printf("Enter Number\n");

    int num,i,j=10,sum=0;

    scanf("%d",&num);
    i = num;
    while (num != 0)
    {
        sum = sum + num%10;
        i = num % j;
        j *=10;
        num = num/10;
    }


    printf("Sum of Digits is: %d\n",sum);

    return 0;
}