
#include <stdio.h> 
#include <conio.h> 

int main()
{
  int ch;

  puts ("Press any key, ESC or Enter to quit");  
  char *str;
  int index= 0;
  while ((ch = getch()) != EOF && ch != 13)
  {
	if(ch==27) break;
	str[index] = ch;  
	if(ch=='\t')
	{
		printf("\\t");
		//index++;
		str[index] = '\\';
		index++;
		str[index] = 't';
	}	
	
	
    else if(ch=='\b')
	{
		printf("\b ");
		//printf("\\b ");
		//index++
		str[index] = '\\';
		index++;
		str[index] = 'b';
	}
        
	
    printf ("%c", ch);
	index++;
	
	}
	
	printf("\ninputed daa is: %s",str);
  return 0;
}