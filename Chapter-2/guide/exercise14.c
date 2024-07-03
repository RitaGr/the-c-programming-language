/* Exercise 14 : Complete exercise 2-4; Write an alternate version of squeeze(s1, s2) that deletes each character in s1 that matches any character in the string s2.*/

/* Improved squeeze function. The main idea is to apply the function (book page 47) on each character of s2*/

#include <stdio.h>

void squeeze_char(char s[], int c)
{
/* This is the squeeze function (the book page 47)*/
	int i, j;
	for(i = j = 0; s[i] != '\0'; i++)
		if(s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';
}

void squeeze(char s1[], char s2[])
{
/* This is the squeezing function. It calls squeeze_char for each character of s2 */
	int i;
	for(i = 0; s2[i] != '\0'; i++)
		squeeze_char(s1, s2[i]);
}

int main()
{
	char string1[40] = "hello";
	char string2[40] = "world";
	/* The two lines above allocate storage to 40 bytes for each string. The assignment here acts as an initialization. It is  equivalent to writing : 
	
	char string1[40];
	string1[0] = 'h';
	string1[1] = 'e';
	.
	.
	.
	string1[5] = '\0';
you cannot assign a string to a character array by the assignment operator. You can only do it in the initialization.
*/
	printf("before squeeze, string1=%s and string2= %s\n", string1, string2);
	squeeze(string1, string2);
	printf("after squeeze, string1=%s and string2= %s\n", string1, string2);
	
	return 0;
}
