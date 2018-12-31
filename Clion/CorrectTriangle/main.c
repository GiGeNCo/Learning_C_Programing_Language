#include <stdio.h>

int main() {
    printf("Enter Triangle Sides\n");
    int side[3];
    scanf("%d %d %d",side,side+1,side+2);

    if(side[0]+side[1] <= side[2] || side[0]+ side [2] <= side[1] || side[1] + side [2] <= side[0])
    {
        printf("Incorrect input\n");
    }
    else printf("perimeter is %d\n",side[0]+side[1]+side[2]);
    return 0;
}