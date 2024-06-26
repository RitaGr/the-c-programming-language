/* Exercise 1-18: Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines. */

#include <stdio.h>
#define MAXLINE 1000 	/* maximum input line size */

int get_line(char line[], int maxline);
void remove_trailing(char line[]);

/* print longest input line */
int main()
{	
	int len; /* current line length */
	char line[MAXLINE]; /* current input line */

	while((len = get_line(line, MAXLINE)) > 0)
	{
		remove_trailing(line);
		if (line[0] != '\0') {  /* Only print non-blank lines */
			printf("%s\n", line);
		}
	}
	return 0;
}

/* getline : read a line into s, return length */
int get_line(char s[], int lim)
{
	int c, i;
	
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* remove_trailing: remove trailing blanks and tabs from a line */
void remove_trailing(char line[])
{
	int i;
	i = 0;

	while (line[i] != '\0') {  /* Find the end of the string*/
		i++;
	}
	i--;  /* Step back to the last character */

	while (i >= 0 && (line[i] == ' ' || line[i] == '\t' || line[i] == '\n')) {
		line[i] = '\0';  /* Remove trailing blanks, tabs, and newlines */
		i--;
	}
}
