/* Solve question 1-12. Write a program that prints its input one word per line. We will assume characters '\t' '' '\n' mean end of word. */

#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
	int read_char;
	int state; 		/* Are we in the middle of a word? */
	state = OUT;		/* The beginning : not in the middle of a word. */
	while((read_char = getchar()) != EOF)
		if(read_char == ' ' || read_char == '\n' || read_char == '\t')
/* word separator encountered */
		{
		if (state = IN)
/* if we were in the middle of a word and found a white space next to it*/
			putchar('\n');
/* then print a newline */
		state = OUT;
/* in any case we are not in the middle from now on */
		}
		else
		{
			putchar(read_char);
			state = IN;
		}

	return 0;
}


