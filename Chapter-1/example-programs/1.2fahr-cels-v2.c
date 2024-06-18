#include <stdio.h>

/* print Fahrenheit-Celsius table 
   for fahr = 0, 20, ... , 300; floating-point version */

int main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0; 	/* lower limit of temperature table */
	upper = 300; 	/* upper limit */
	step = 20; 	/* step size */

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

/* 
	useful information from the book : 
	If an arithmetic operator has integer operands, an integer operation
	is performed. 
	If an arithmetic operator has one floating point operand and one 
	integer operand, however, the integer will be converted to floating point
	before the operation is done.
	reference to line 19 : 
	The printf conversion specification %3.0f says that a floating point number
	(here fahr) is to be printed at least three characters wide, with no 
	decimal point and no fraction digits. %6.1f describes another number (celsius)
	that is to be printed at least 6 characters wide, with 1 digit after the decimal 		point.  
*/
