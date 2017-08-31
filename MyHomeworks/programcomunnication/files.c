#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[])
{

	char str[27];
	FILE *in = fopen("in.txt","r");
	FILE *out = fopen("out.txt","a");
	fscanf(in,"%26s\n",str);
	fprintf(out,"%s\n",str);

	fclose(in);
	fclose(out);

	return 0;
}
