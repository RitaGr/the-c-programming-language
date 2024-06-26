/* Exercise 1-19 : Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time. */

#include <stdio.h>
#define MAXLINE 1000

void reverse(char s[]);
int get_line(char line[], int maxline);

int main()
{
	int len; /* current line length */
	char s[MAXLINE]; /* current input line */

	while((len = get_line(s, MAXLINE)) > 0)
	{
		reverse(s);
		printf("%s\n", s);
	}
	return 0;
}

void reverse(char s[])
{
	int i, j;
	char temp;
	
	for(i = 0; s[i] != '\0'; ++i)
		;
	--i;
	for(j = 0; j < i; ++j, --i)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
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
