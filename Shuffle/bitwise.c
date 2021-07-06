# include <stdio.h>



int main ()
{
	
	
	int a, b;
	
	printf("enter two number\n");
	
	scanf("%i",&a);
	scanf("%i",&b);
	
	printf("a = %d,  b=%d\n",a,b);
	
	printf("a&b %d\n",a&b);
	printf("a|b %d\n",a|b);
	printf("a^b %d\n",a^b);
	//a = 3;
	printf("~a %d\n",~a);
	printf("%d<<%d %d\n",a,3,a<<3);
	printf("a>>1 %d\n",a>>1);
	
	
	
	
	
	return 0;
}