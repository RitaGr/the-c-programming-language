/* Exercise 2-1 : Write a program to determine the ranges of char, short, int, and long variables, both signed and unsigned, by printing appropriate values from the standart headers and by direct computation. Harder if you compute them: determine the ranges of the various floating-point types.
%ld is for printing format of long; %u is for printing format of unsigned */

#include <stdio.h>
#include <limits.h>

int main()
{
		printf("The range of signed char is from : %d to %d\n", SCHAR_MIN, SCHAR_MAX);
	printf("The range of unsigned char is from : %d to %d\n", 0, UCHAR_MAX);
	printf("The range of int is from : %d to %d\n", INT_MIN, INT_MAX);
	printf("The range of unsigned int is from : %d to %u\n", INT_MIN, UINT_MAX);
	printf("The range of short is from : %d to %d\n", SHRT_MIN, SHRT_MAX);
	printf("The range of unsigned short is from : %d to %u\n", 0, USHRT_MAX);
	printf("The range of long is from : %ld to %ld\n", LONG_MIN, LONG_MAX);
	printf("The range of unsigned long is from : %d to %lu \n", 0, ULONG_MAX);
	return 0;
}
