#include <stdio.h>
#include <math.h>

int main() {
    printf("Import  x1 , y1 and x2, y2 values\n");
    int x1,x2,y1,y2;
    float d;
    printf("Enter x1 value\n");
    scanf("%d",&x1);
    printf("Enter y1 value\n");
    scanf("%d",&y1);
    printf("Enter x2 value\n");
    scanf("%d",&x2);
    printf("Enter y2 value\n");
    scanf("%d",&y2);
    x1 = x1-x2;
    y1 = y1-y2;
    d = sqrt(x1*x1+y1*y1);
    printf("Distance is : %3.2f\n",d);

    return 0;
}