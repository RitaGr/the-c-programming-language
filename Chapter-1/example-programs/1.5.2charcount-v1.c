#include <stdio.h>

/* count characters in input; 1st version */
int main()
{
	long nc;
	
	nc = 0;
	while(getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
	return 0;
}

/* useful info :
	the conversion specification %ld tells printf that the 
	corresponding argument is a long integer.
*/
