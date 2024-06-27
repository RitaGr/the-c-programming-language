/* Exercise 1-24: Write a program to check a C program for rudimentary syntax errors like unbalanced parentheses, brackets and braces.
   Don't forget about quotes, both single and double, escape sequences, and comments. (This program is hard if you do it in full generality.)*/

#include <stdio.h>
#define MAX_LENGTH 100

void match_parentheses(char line[]);
void match_brackets(char line[]);
void match_braces(char line[]);

int main()
{
	int c, i, pos;
	char line[MAX_LENGTH];
	pos = 0;
	
	for(i = 0; i < MAX_LENGTH; ++i)
		line[i] = 0;
	while((c = getchar()) != EOF && pos < MAX_LENGTH)
	{
		line[pos] = c;
		++pos;
	}

	match_parentheses(line);
	match_brackets(line);
	match_braces(line);
	return 0;
}

void match_parentheses(char line[])
{
	int i, flag;
	flag = 0;
	for(i = 0; i < MAX_LENGTH; ++i)
	{
		if(line[i] == '(')
			++flag;
		else if (line[i] == ')')
			--flag;
	}
	if(flag != 0)
		printf("Error: Unbalanced parentheses.\n");
}
void match_brackets(char line[])
{
	int i, flag;
	flag = 0;
	for(i = 0; i < MAX_LENGTH; ++i)
	{
		if(line[i] == '[')
			++flag;
		else if (line[i] == ']')
			--flag;
	}
	if(flag != 0)
		printf("Error: Unbalanced brackets.\n");
}
void match_braces(char line[])
{
	int i, flag;
	flag = 0;
	for(i = 0; i < MAX_LENGTH; ++i)
	{
		if(line[i] == '{')
			++flag;
		else if (line[i] == '}')
			--flag;
	}
	if(flag != 0)
		printf("Error: Unbalanced braces.\n");
}


