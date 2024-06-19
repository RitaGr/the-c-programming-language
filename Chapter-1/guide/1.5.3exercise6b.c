/* Solution to exercise 1-10 in the book*/
#include <stdio.h>

int main()
{

	int read_char;		/* The char value we get from the input */

	while((read_char = getchar()) != EOF)
		if(read_char == '\b')
			printf("\\b");
		else if(read_char == '\t')
			printf("\\t");
		else if(read_char == '\\')
			printf("\\\\");
		else
			putchar(read_char); /* usual case */
	return 0;

}
