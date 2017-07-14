#include<stdio.h>

void ctof();
void ftoc();

int main()
{
	printf("Celsius to Fahrenheit ENTER ==> c\nFahrenheit to Celsius ENTER ==> f\n");
	char comand;
	scanf("%c",&comand);
	switch (comand)
	{
		case 'c':
		{
			ctof();
			break;
		}
		case 'f':
		{
			ftoc();
			break;			
		}
		default:
		{
			printf("Incorrect input! bye\n");
			break;		
		}

	}



	return 0;
}

void ctof()
{
	float celsius,fahrenheit;
	printf("Write Celsius\n");
	scanf("%f",&celsius);
	//printf("Write Fahrenheit\n");
	//scanf("%f",&fahrenheit);
	fahrenheit = ((9.0/5.0) * celsius) + 32;
	printf("%1.1f - Celsius is %1.1f Fahrenheit\n",celsius,fahrenheit);
	
}
void ftoc()
{


}
