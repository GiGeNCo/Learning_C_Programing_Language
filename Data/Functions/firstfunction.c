#include<stdio.h>

int add(int num1, int num2);

int main()
{
	int num1,num2;
	puts("Enter two number for add");
	scanf("%d",&num1);
	scanf("%d",&num2);
	//num1 = add(num1,num2);
	printf("Number1 + Number2 is %d\n",add(num1,num2));
	

}

int add(int num1,int num2)
{
	return num1+num2;

}
