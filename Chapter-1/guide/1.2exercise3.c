#include <stdio.h>

/* Exercise 3 : Set the print format of fahr to integer print format %d,
   without changing the type of fahr to integer. */

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
		/* Note that in the above line the lhs (Left Hand Side)
		 of the assignment is of type int and the rhs (Right Hand Side)
		is of type float */
		printf("%d %6.1f\n", fahr, celsius);
		/* change of format */
		fahr = fahr + step;
	}
}

/* warning message : 
1.2exercise3.c:22:10: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘double’ [-Wformat=]
   printf("%d %6.1f\n", fahr, celsius);
*/

/* useful information : 
	The compiler doesn't check the compability between the type of the variable
	to the print format in the printf command. The compiler also doesn't check
	if the amount of variables in the printf string is equal to the format string.  
*/

