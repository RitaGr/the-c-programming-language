/* Exercise 1-23 : Write a program to remove all comments from a C program. Don't forget to handle quoted string and character constants properly. C comments do not nest. */

#include <stdio.h>

int main()
{
	int c;

	while((c = getchar()) != EOF)
	{
		if(c == '/')
		{
			if((c = getchar()) != EOF && c == '*'){
				while((c = getchar()) != EOF && c != '/')
					;
				putchar(' ');
				}
			else if ((c != EOF)){
				putchar(c);
				}
		} else
			putchar(c);
	}
	return 0;
}
