#include<stdio.h>

void txt(char text []);
void numbs(short numbs[]);
int main()
{
	char str[] = "GiGeNCo GiGaLFC";
	short n[7];
	printf("size of %s is: %lu\n",str,sizeof(str));
	printf("size of adress is %lu\n",sizeof(&str));
	printf("size of short array is: %lu\n",sizeof(n));
	txt(str);
	numbs(n);

	return 0;
}
void numbs(short numbs[])
{
	printf("size of short array is: %lu\n",sizeof(numbs));	
}

void txt(char text [])
{
	printf("text is: %s\t and size of text is: %lu\n",text,sizeof(text));

}

/*
	roca gvaqvs masivebi misi zoma aris im tipis masivis baitebis raodenoba gamravlebuli
	masivis elementebis raodenobaze. anu tu gvaqvs int tipis 5 elementiani masivi schirdeba
	mas 4 baiti gamravlebuli 5 ze, titouli elementistvis 4 baiti.
	xolo mis misamarts schirdeba shedarebit naklebi imdeni ramdensac standartulad gamohyops
	kompiuteri misamartis chasawerad, anu rodesac vbechdavt masivis zomas ibechdeba, gamoiyofa 
	is zoma ra misamartis zomasac gamohyops kompiuteri am masivistvis

*/
