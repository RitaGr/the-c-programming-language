/* Exercise 1-14 : Write a program to print a histogram of the frequencies of different characters in its input. */
#include <stdio.h>

#define MAX_CHARACTERS 26

int main()
{
	int c, i, j;
	int char_array[MAX_CHARACTERS];

	for(i = 0; i < MAX_CHARACTERS; ++i)
		char_array[i] = 0;

	while((c = getchar()) != EOF)
	{
		if(c >= 'a' && c <= 'z')
			++char_array[c - 'a'];	
	}

	for(i = 0; i < MAX_CHARACTERS; ++i)
	{
		printf("%c: ", 'a' + i);
		for(j = 0; j < char_array[i]; ++j)
			printf("-");
		printf("\n");
	}
	return 0;

}


