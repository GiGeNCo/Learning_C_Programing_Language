#include <stdio.h>


int main (void)

/* Print the size of various types in “number-of-chars” */

{
printf("Variable byte Sizes\nvoid\tchar\tshort\tint\tlong\tfloat\tdouble\n");
printf("%3d\t%3d\t%3d\t%3d\t%3d\t%3d\t%3d\n",
sizeof (void), sizeof (char), sizeof (short), sizeof (int),sizeof (long), sizeof (float), sizeof (double));

return 0;
}
