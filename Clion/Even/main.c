#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    for (int i = 0; i <= 50; i++)
    {
        if(i%2 == 0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}