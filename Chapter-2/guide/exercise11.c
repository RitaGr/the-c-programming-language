#include <stdio.h>

int main()
{
	double sqrt();
	printf("%f\n", sqrt(2.0));
	return 0;
}

/*
	second option with cast : 

	double sqrt();
	printf("%f\n", sqrt(double 2));
*/
/*
	third option  : 

	double sqrt(double);
	printf("%f\n", sqrt(2));
*/
