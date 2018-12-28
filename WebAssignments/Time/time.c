# include<stdio.h>



int main ()
{
	int days = 365, month = 12,  week = 7;
	
	int period = 1339;
	
	printf("Year: %d\nWeek:  %d\nDays: %d",period/days,(period%days)/week,((period%days)%week));
	
	
	
	
	return 0;
}