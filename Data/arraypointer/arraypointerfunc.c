#include<stdio.h>

void func1(int i)
{
	int j = i + 1;
	printf("func1 --- %i\n",j);

}

void func2(int i)
{
	int j = i + 2;
	printf("func2 --- %i\n",j);

}

void func3(int i)
{
	int j = i + 3;
	printf("func3 --- %i\n",j);

}

int main()
{
	void (*arrfunc[])(int) = {func1, func2, func3};
	(arrfunc[0])(0);
	(arrfunc[1])(0);
	(arrfunc[2])(0);

	return 0;
}
