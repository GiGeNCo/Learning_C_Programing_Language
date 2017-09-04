#include<stdio.h>
#include<string.h>


int main(int argc, char *argv[])
{
	char artist[20];
	char song[20];
	int n = 0;
	while(scanf("%19s %19s",artist,song) == 2)
	{
		if(strstr(artist,argv[1]) || strstr(song,argv[1]))
		{
			printf("Artist: %s  Song: %s\n",artist,song);
			n++;
		}
		//printf("\n");
	}
	if(n == 0)
	{
		//printf("no such artist or song is found");
		fprintf(stderr, "no such artist or song is found\n");

	}

	return 0;
}
