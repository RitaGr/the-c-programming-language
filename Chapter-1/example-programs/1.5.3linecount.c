#include <stdio.h>

/* count lines in input */
int main()
{
	int c, nl;
	
	nl = 0;
	while((c = getchar()) != EOF)
		if(c == '\n')
			++nl;
	printf("%d\n", nl);
	return 0;
}

/*
	useful info :
	a character written between single quotes represents an integer value
	equal to the numerical value of the character in the machine's character
	set. This is called a character constant, although it is just another way
	to write a small integer.
	*/
