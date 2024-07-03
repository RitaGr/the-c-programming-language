/* Exercise 2-4 : Write an alternate version of squeeze(s1, s2) that deletes each character in s1 that matches any character in the string s2.*/

#include <stdio.h>
#define ARRAY_LEN 10
void squeeze (char s1[], char s2[]);

int main()
{
	char s1[ARRAY_LEN] = "Hello";
	char s2[ARRAY_LEN] = "World";
	printf("Before squeeze: %s\n", s1);
    	squeeze(s1, s2);
    	printf("After squeeze: %s\n", s1);
	return 0;
}

void squeeze (char s1[], char s2[])
{
	int i, j, k, remove;
	for(i = j = 0; s1[i] != '\0'; ++i)
	{
		remove = 0;
		for(k = 0; s2[k] != '\0'; ++k)
		{
			if(s1[i] == s2[k])
			{
				remove = 1;
				break;
			}		
		}
		if(!remove)
			s1[j++] = s1[i];
	}
	s1[j] = '\0';
} 
