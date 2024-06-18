#include <stdio.h>

/* print Fahrenheit-Celsius table 
   for fahr = 0, 20, ... , 300 */

int main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0; /* lower limit of temperature table */
	upper = 300; /* upper limit */
	step = 20; /* step size */

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}

/* 
	useful information from the book : 
	Any characters between the comment characters are ignored by the compiler.
	In C, all variables must be declared before they are used.
	Individual statements are terminated by semicolons.

	reference to line 18 : 
	In C, integer division truncates : any fractional part is discarded. 
	Since 5 and 9 are integers, 5/9 would be truncated to 0.
	reference to line 19 : 
	%d specifies an integer argument
*/
