#include <stdio.h>

int main() {
    printf("Input Seconds\n");
    int seconds, h,m,s;
    scanf("%d",&seconds);

    h = seconds / 3600;
    seconds = seconds % 3600;
    m = seconds / 60;
    seconds = seconds % 60;
    s = seconds;

    printf("HH:MM:SS - %d:%d:%d",h,m,s);



    return 0;
}