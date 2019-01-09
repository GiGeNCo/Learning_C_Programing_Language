#include <stdio.h>
#include <math.h>

int main() {
    printf("Enter Integer\n");
    int num, rnum = 0,i;
    scanf("%d",&num);

    while(num >=1)
    {
        i = num%10;
        rnum = rnum * 10 +i;
        num = num / 10;
    }

    printf("%d Reversed number",rnum);

    return 0;
}