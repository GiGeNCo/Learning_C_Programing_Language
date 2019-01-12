#include <stdio.h>

int main()
{
    printf("Prime numbers up to 500\n2 ");

    for (int i = 1; i <500; i+=2)
    {
        for(int j = 3; j <= i; j++)
        {
            if(i%j == 0  && i != j)
            {
                break;
                //printf("%d ",j);
            }
            else if (i == j) printf("%d ",j);

        }

    }
    return 0;
}