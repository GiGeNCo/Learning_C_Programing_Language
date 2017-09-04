#include <stdio.h>



int main()
{

	int numb = 17;
	printf("numb: %i",numb);
	//numb ++;	
	printf("\nnumb ++:\t%i",numb++);
	//numb --;
	printf("\nnumb --:\t%i",numb--);
	//++numb;
	printf("\n++numb:\t%i",++numb);
	//--numb;
	printf("\n--numb:\t%i",--numb);
	//numb += 5;
	printf("\nnumb += 5:\t%i",numb += 5);
	//numb -= 10;
	printf("\nnumb -= 10:\t%i",numb -= 10);
	printf("\nnumb =+ 5:\t%i",numb =+ 5); // give value not add or sum positive number5
	
	printf("\nnumb =- 10:\t%i\n",numb =- 10); // give value not add or sum negative number10

	return 0;
}
