#include <stdio.h>

int main() {
    printf("Input 5 integer\n");
    int num[5],  reminder;
    for(int i = 0; i < 5; i++)
    {
        scanf("%d",&num[i]);
    }
    reminder = num[0];
    for(int i = 0; i < 5; i++)
    {
        if(num[0]<num[i])
        {
            num[0] = num[i];
            reminder = i;
        }
    }
    printf("Higest number is %d and order is %d\n",num[0],reminder+1);
    return 0;
}