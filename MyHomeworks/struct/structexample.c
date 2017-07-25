#include <stdio.h>
#include <string.h>


struct books 
{
	char title[50];
	char author[50];
	char subject[50];
	short book_id;
}current;

int main ()
{
	
	struct books book1;
	struct books book2;
	strcpy(book1.title, "C Programing Language");
	strcpy(book1.author, "Unknown");
	//strcpy(book1.subject, "Programming Tutorial");
	printf("Enter Subject of Book:\n");
	scanf("%s",book1.subject);
	book1.book_id = 32687;
	strcpy(current.title,"C is perfect\n");

	printf( "\ncurrent Book's title : %s\n", current.title);

	printf( "Book 1 title : %s\n", book1.title);
	printf( "Book 1 author : %s\n", book1.author);
	printf( "Book 1 subject : %s\n", book1.subject);
	printf( "Book 1 book_id : %d\n", book1.book_id);
}
