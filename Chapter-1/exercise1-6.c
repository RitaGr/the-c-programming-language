/* Exercise 1-6 : Verify that the expression getchar() != EOF is 0 or 1*/

#include <stdio.h>

int main()
{
	int c;
	c = (getchar() != EOF);
	printf("%d", c);
	return 0;
}

/* ctrl + D = 0, newline/char = 1*/
