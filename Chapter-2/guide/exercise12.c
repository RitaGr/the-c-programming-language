/* Exercise 12 : We will try to predict the following outcome of the functions below, whether they print the root of 2 and why.*/


/*
	1. 
		#include <stdio.h>
		main()
		{
			printf("%f\n", sqrt(2.0));
		}

	
	the function sqrt has no prototype and the <math.h> header is not 		included so there will be warnings given as the function is not declared. 
*/

/*
	2. 
		#include <stdio.h>
		main()
		{
			printf("%f\n", (double)sqrt(2.0));
		}

	In my opinion the double cast is not neccessary as sqrt already returns a 		double though again as mentioned in the first version above, it is not 		correct because the function had no prototypes to declare the return and 	parameter types.
*/

/*

	If no declaration is given for a parameterm, its type is taken to be an 	int. Appendix A, Section A10.1 page 226.
*/
