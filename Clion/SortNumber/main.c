#include <stdio.h>

int main ()
{

    printf("Enter count of number\n");
    int count;
    scanf("%d",&count);
    int num [count];


    for(int i = 0; i < count; i++)
    {
        printf("Enter number %d \n",i+1);
        scanf("%d",&num[i]);
    }
    printf("length of arr is %d\n",sizeof(num)/sizeof(num[0]));
    int check= num[0];
    for(int i = 0; i < count; i++)
    {
        check= num[i];
        for(int j = 0; j < count; j++)
        {
            if(num[j]>num[i])
            {
                check = num[j];
                num[j] = num[i];
                num[i] = check;
            }
        }


    }

    printf("Sorted number\n");

    for(int i = 0; i < count; i++)
    {
        printf("%d, ",num[i]);
    }



    return  0;
}