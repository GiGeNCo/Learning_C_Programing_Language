#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct city
{
	char *name;
	char *date;
	struct city *next;
} city;

void disp(city *start)
{
	city *i = start;
	for(; i != NULL; i = i -> next)
	{
		//printf("\n-   %i   -\n", );
		printf("city:\t %s  -   %s\n",i->name, i->date);
		
	}

}
city *create(char *name, char *date)
{
	city *c = malloc(sizeof(city));
	c->name = strdup(name);
	c->date = strdup(date);
	c->next = NULL;
	return c;
}
void release(city *start)
{
	city *i = start;
	city *next = NULL;
	for(; i != NULL; i = next)
	{
		next = i->next;
		free(i->name);
		free(i->date);
		free(i);
	}

}


int main()
{
	char name[37];
	char date[37];
	city *start = NULL;
	city *current = NULL;
	city *prev = NULL;

	FILE *in = fopen("data.txt","r");
	
	while(fscanf(in,"%s %s", name, date) == 2)
	{
		current = create(name, date);
		if(start == NULL)
			start = current;
		if(prev != NULL)
			prev->next = current;
		prev = current;

	}
	fclose(in);

	disp(start);
	release(start);
/*
	city c1 = {"Liverpool","1 August",NULL};
	city c2 = {"Fiji","12 August",NULL};
	city c3 = {"Khashuri","22 August",NULL};
	city c4 = {"Bruge","8 August",NULL};
	
	c1.next = &c4;
	c4.next = &c2;
	c2.next = &c3;
	c3.next = NULL;
	disp(&c1);

	city *pc = malloc(sizeof(city));
	pc -> name  = "Batumi";
	pc -> date = "6 November";
	printf("\n%s ---  %s\n",pc -> name,pc -> date);

	free(pc);
*/




	return 0;
}




