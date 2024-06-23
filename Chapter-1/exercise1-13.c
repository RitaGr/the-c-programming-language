/* Exercise 1-13 : Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */

/* Horizontal histogram */

#include <stdio.h>

#define MAX_LENGTH 20
#define IN 1 	/* inside a word */
#define OUT 0 	/* outside a word*/

int main()
{
	int c, i, j, wc, state;
	int word_len[MAX_LENGTH];
	state = OUT;
	wc = 0;
	for(i = 0; i < MAX_LENGTH; ++i)
		word_len[i] = 0;

	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
			if(wc > 0)
				++word_len[wc]; 
			wc = 0;
		} else
			{
				state = IN;
				++wc;
			}
	}
	printf("Horizontal Histogram\n");
	for(i = 1; i < MAX_LENGTH;++i)
		{
			printf("Word with %2d characters : ", i);
			for(j = 0; j < word_len[i]; ++j)
				printf("-");
			printf("\n");
		}

	printf("Vertical Histogram\n");

	for(i = MAX_LENGTH; i > 0 ;--i)
	{
		printf("%2d ", i);
		for(j = 1; j <= MAX_LENGTH;++j)
		{
			if(word_len[j] >=  i)
				printf(" | ");
			else
				printf("   ");
		}
		printf("\n");
	}
	// Print histogram base labels
    	printf("   ");
    	for (i = 1; i <= MAX_LENGTH; ++i)
        	printf("---");
   	 printf("\n   ");
    	for (i = 1; i <= MAX_LENGTH; ++i)
       		 printf("%3d", i);
    	printf("\n");
	return 0;
}
