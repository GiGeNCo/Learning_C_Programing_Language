#include <stdio.h>
int main() {
	char name[10];
	int hour,day;
	float value, salary, hm;
	printf("Input the Employees name(Max. 10 chars): ");
	scanf("%s", name);
	printf("\nInput the working time(hour) in a day: ");
	scanf("%d", &hour);
	printf("\nInput worked days in a month: ");
	scanf("%d", &day);
	printf("Day %d\n",day);
	printf("\nSalary amount/month: ");
	printf("Day %d\n",day);
	scanf("%f", &value);
	//hm = day*hour;
	salary=value/(day*hour);	
	printf("\nEmployees ID = %s\nHourly Salary = %d \n", name,day);
	printf("\nDay %d\n",day);
	
	
	return 0;
}