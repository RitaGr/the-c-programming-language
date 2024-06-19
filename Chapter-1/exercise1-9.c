/* Exercise 1-9 : Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank. */

#include <stdio.h>

int main()
{
	int c, cblank;
	cblank = 0;
	while((c = getchar()) != EOF)
	{
		if(c == ' ')
			++cblank;
		else
			cblank = 0;
		if(cblank > 1) 		/* if there're more blanks */
		{
			c = getchar();	/* go to the next character, without outputing on screen */
			--cblank; 	/* increment the counter */
			
		}
		else
			putchar(c); 	/* else, output the character */
		if(cblank == 1 && c != ' ') /* for even number of blanks */
			putchar(c);
	}
	return 0;
}
