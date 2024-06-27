/* Exercise 1-22 : Write a program to "fold" long input lines into two or more shorter lines after the last non-blank character that occurs before the n-th column of input. Make sure your program does something intelligent with very long lines, and if there are no blanks or tabs before the specified column. */

#include <stdio.h>
#define MAX_LEN 40

int main() 
{
    	int c, pos, last_blank, i, remaining;
    	char line[MAX_LEN + 1]; /* array to hold the current line */
    	pos = 0;
    	last_blank = -1;

    	while ((c = getchar()) != EOF) 
	{
        	line[pos] = c;
        	if (c == ' ' || c == '\t') {
            		last_blank = pos;
        	}
        	pos++;
		/* print the current line since it ends with a newline */
        	if (c == '\n') 
		{
            		for (i = 0; i < pos; i++) 
			{
                		putchar(line[i]);
            		}
            		pos = 0;
            		last_blank = -1;
        	} else if (pos >= MAX_LEN) 
		{
            		if (last_blank == -1) 
			{
				 /* if no blank found, force wrap at MAX_LEN */
                		for (i = 0; i < pos; i++) 
				{
                    			putchar(line[i]);
                		}
                		putchar('\n');
                		pos = 0;
            		} else 
			{
				 /* Wrap at the last blank position */
                		for (i = 0; i <= last_blank; i++) 
				{
                    			putchar(line[i]);
                		}
                		putchar('\n');
				/* Move remaining characters to the beginning of the line array */
                		remaining = pos - last_blank - 1;
                		for (i = 0; i < remaining; i++) 
				{
                    			line[i] = line[last_blank + 1 + i];
                		}
                		pos = remaining;
                		last_blank = -1;
            		}
        	}
    	}

	/* Print any remaining characters in the array */
    	for (i = 0; i < pos; i++) 
	{
        	putchar(line[i]);
    	}

    	return 0;
}

