/* Exercise 2-5 : Write the function any(s1, s2), which returns the first location in the string s1 where any character from string s2 occurs, or -1 if s1 contains no characters from s2. (The standart library function strpbrk does the same job but returns a pointer to the location. )*/

#include <stdio.h>
#define ARRAY_LEN 20

int any(char s1[], char s2[]);

int main()
{
	char s1[ARRAY_LEN] = "Hello";
	char s2[ARRAY_LEN] = "World";
	printf("The location is : %d\n", any(s1, s2));
	return 0;
}

int any(char s1[], char s2[])
{
	int i, j;
	for(i = 0; s1[i] != '\0'; ++i)
	{
		for(j = 0; s2[j] != '\0'; ++j)
		{
			if(s1[i] == s2[j])
			{
				return i;
			}
		}
	}
	return -1;
}
