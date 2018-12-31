#include <stdio.h>

int main() {
    printf("Input 5 number\n");
    int n=0,n1=0;
    for(int  i = 0; i < 5; i ++)
    {
        scanf("%d",&n);
        if(n % 2 == 1)
        {
            n1=n1+n;
        }

    }
    printf("Odd number sum is %d\n",n1);

    return 0;
}