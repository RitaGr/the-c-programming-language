#include <stdio.h>

/* Exercise 2 : Set the celsius to int, and the print format to %d */
/* there's an error in the solution of the book, note line 23 the format
of celsius in the guide book is 6f, which throws an error */

int main()
{
	float fahr;
	int celsius; /* type change of celsius */
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
		printf("%3.0f %6d\n", fahr, celsius);
		/* change of format */
		fahr = fahr + step;
	}
}

