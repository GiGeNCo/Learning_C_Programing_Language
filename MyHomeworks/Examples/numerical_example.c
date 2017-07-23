#include <stdio.h>

int main ()
{
	float fahr, celsius;
	int lower, upper, step;
	/* Set lower and upper limits of the temperature table (in Fahrenheit) along with the
	* table increment step-size */

	lower = 0;
	upper = 300;
	step = 20;

	/* Create conversion table using the equation: C = (5/9)(F - 32) */

	fahr = lower;
	
	printf("fahrengheit\tcelsius\n");
	while (fahr <= upper)
	{	
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f \t\t%6.1f\n", fahr, celsius);  // i dont know why write 3.0 and 6.1
		fahr += step;
	}
}
