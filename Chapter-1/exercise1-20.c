/* Exercise 1-20 : Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns. Should n be a variable or a symbolic parameter? */

#include <stdio.h>
#define N 8

void detab(int i);

int main()
{
	int c, i;
	i = 0;
	while((c = getchar()) != EOF)
	{
		if( c == '\t')
		{
			detab(i);
			i = 0;
		}
		else 
		{
			putchar(c);
			++i;
			if (c == '\n') {
                		i = 0;
           		 }
		}
	}
	return 0;
}

void detab(int i)
{
	int spaces;
	spaces = N - (i % N);
	for(i = 0; i < spaces; ++i)
		putchar(' ');
}
