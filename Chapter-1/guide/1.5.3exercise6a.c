/* Solution to exercise 1-8 in the book*/
#include <stdio.h>

int main()
{

	int blank_cnt; 		/* counter for blanks */
	int tab_cnt;		/* counter for tabs */
	int newline_cnt;	/* counter for newlines */
	int read_char;		/* The char value we get from the input */
	blank_cnt = 0;
	tab_cnt = 0;
	newline_cnt = 0;

	/* main program */
	while((read_char = getchar()) != EOF)
		if(read_char == ' ')
			blank_cnt = blank_cnt + 1;
		else if(read_char == '\t')
			tab_cnt = tab_cnt + 1;
		else if(read_char == '\n')
			newline_cnt = newline_cnt + 1;
	printf("Number of newline character is %d\n", newline_cnt);
	printf("Number of blank character is %d\n", blank_cnt);
	printf("Number of tab character is %d\n", tab_cnt);
	return 0;

}
