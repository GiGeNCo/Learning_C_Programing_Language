#include <stdio.h>


int main() {
    printf("Enter three number\n");
    int number[3];
    //scanf("%d%d%d",&number[0],&number[1],&number[2]);
    scanf("%d%d%d",number,number+1,number+2);

    number[0] = (number[0]>number[1]) ? number[0] : number[1];

    number[0] = (number[0]>number[2]) ? number[0] : number[2];

    printf("Max number %d\n",number[0]);




    return 0;
}