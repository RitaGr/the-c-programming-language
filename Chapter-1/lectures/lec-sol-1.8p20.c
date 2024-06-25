/* Exercise 1-8 : Write a program to count blanks, tabs and newlines */

#include <stdio.h> 	/* include standart input output library */

int main()
{
	int c; 		/* c = character*/	
	int ns, nt, nl; /* ns = space, nt = tab, nl = lines */
	ns = nt = nl = 0; /* start at zero mark */

	while((c = getchar()) != EOF)
		{
			if(c == ' ')
				++ns;
			if(c == '\t')
				++nt;
			if(c == '\n')
				++nl;
		}
	printf("---------------------\n");
	printf("Total spaces:\t%d\n", ns);
	printf("Total tabs:\t%d\n", nt);
	printf("Total newlines:\t%d\n", nl);
	return 0;
}
