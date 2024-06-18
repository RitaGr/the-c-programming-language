#include <stdio.h>

/* print Fahrenheit-Celsius table */

int main()
{
	int fahr;
	for(fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

	return 0;
}

/*
	for loop explanation :
	The first part, the initialization
	fahr = 0
	is done once, before the loop proper is entered.
	The second part is the test or condition that controls the loop :
	fahr <= 300
	This condition is evaluated; if true - the body of the loop is executed
	Then the increment step 
	fahr = fahr + 20
	is executed, and the condition re-evaluated.
	The loop terminates if the condition has become false.
*/
