#include<stdio.h>
#include<string.h>
int person_num = 4;

char *person_list[] = {
"Giorgi: inglisuri, rusuli, espanuri",
"Ana: inglisuri, meqsikuri, italiuri",
"Nika: rusuli, franguli chinuri",
"Giga: inglisuri, espanuri, arabuli"
};

int ing_esp(char *s)
{
	printf("inglisuri espanuri\n");
	return (strstr(s,"inglisuri") && strstr(s, "espanuri"));
}

int rus(char *s)
{	
	printf("rusuli:\n");
	return (strstr(s,"rusuli") && strstr(s,","));
}

void find(int (*match)(char *))
{
	int i;
	puts("Search result:");
	puts("---------------");
	for(i = 0; i < person_num; i++)
	{
		if(match(person_list[i]))
		printf("%s\n",person_list[i]);

	}

	puts("---------------");
}


void print_num(int num1, int num2)
{
	
	printf("%i --- %i\n",num1,num2);

}

int main()
{
	//typeof(strstr("giga","giga lalu"));
	//void(*wrap_print_num)(int,int);
	//wrap_print_num = print_num;
	//wrap_print_num(1,2);
	find(ing_esp);
	find(rus);

	return 0;
}
