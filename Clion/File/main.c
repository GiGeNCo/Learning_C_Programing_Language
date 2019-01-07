#include <stdio.h>

int main ()
{
    FILE *fp;

    fp = fopen("file.txt","w+");
    fputs("This is tutorialspoint.com", fp);

    fseek( fp, 27, SEEK_END ); //SEEK_CUR, SEEK_SET
    fputs(" C Programming Language", fp);
    fclose(fp);

    return(0);
}