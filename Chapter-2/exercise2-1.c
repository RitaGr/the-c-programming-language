/* Exercise 2-1 : Write a program to determine the ranges of char, short, int, and long variables, both signed and unsigned, by printing appropriate values from the standart headers and by direct computation. Harder if you compute them: determine the ranges of the various floating-point types. */

#include <limits.h>
#include <stdio.h>
#include <float.h>

int main()
{
	printf("The range of signed char variables : %d - %d\n", SCHAR_MIN, SCHAR_MAX);
	printf("The range of unsigned char variables : %u - %u\n", 0, UCHAR_MAX);
	printf("The range of short variables : %d - %d\n", SHRT_MIN, SHRT_MAX);
	printf("The range of unsigned short variables : %d - %u\n", 0, USHRT_MAX);
	printf("The range of int variables : %d - %d\n", INT_MIN, INT_MAX);
	printf("The range of unsigned int variables : %d - %u\n", INT_MIN, UINT_MAX);
	printf("The range of long variables : %ld - %ld\n", LONG_MIN, LONG_MAX);
	printf("The range of unsigned long variables : %d - %lu\n", 0, ULONG_MAX);
	printf("The range of floating-point variables : %.0f - %.0f \n", FLT_MIN, FLT_MAX); /* remove the .0 if you want to see the digits after the decimal point*/
	return 0;
}
